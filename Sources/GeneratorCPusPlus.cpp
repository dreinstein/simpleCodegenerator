
#include <QtGlobal>
#include <QString>
#include "Utilities.h"
#include "Parsing/Parser.h"
#include "Base/BaseGenerator.h"
#include "Base/BaseEvaluator.h"
#include "Evaluator.h"
#include "GeneratorCPlusPlus.h"
#include "Codegen/CPluspluscodegenerator.h"
#include "ParserFassade.h"
#include "Codegeneratorfassade.h"



using namespace NParser;
using namespace Codegenerator;
using namespace General;


namespace NGenerator
{


GeneratorCPlusPlus::GeneratorCPlusPlus(QString str)
{

  //  pathScript = strString;
    pCodegeneratorFassade = new CodegeneratorFassade(this,General::Languages::Parserlanguage::CPLUSPLUS);
    pParserFassade = new ParserFassade(this,General::Languages::Parserlanguage::CPLUSPLUS);

  //  Evaluator eval;
    pEvaluator = new ScriptEvaluator();
    pathScript = str;
}


GeneratorCPlusPlus::~GeneratorCPlusPlus()
{
    if(pEvaluator)
    {
         delete pEvaluator;
    }
    if(pParserFassade)
    {
        delete pParserFassade;
    }
    if(pCodegeneratorFassade)
    {
        delete pCodegeneratorFassade;
    }
}

void GeneratorCPlusPlus::generate()
{
    Q_ASSERT(pParserFassade);
    keywordsReceived = false;
    rulesReceived = false;
    rulesReceived = false;
    QString pathKeywords = General::FilePath::KeywordsCPlusPlus;
    QString pathRules = General::FilePath::RulesCPlusPlus;
    pParserFassade->ParseKeyword(pathKeywords);
    pParserFassade->ParseRules(pathRules);
    pParserFassade->ParseScript(pathScript);
}

void GeneratorCPlusPlus::notify(General::ParserId::Id parserId)
{
    // lock data
    switch(parserId)
    {
        case General::ParserId::Id::Keyword:
            pParserFassade->giveKeywordData();
        break;
        case General::ParserId::Id::Rules:
            pParserFassade->giveRulesData();
            break;
        case General::ParserId::Id::Script:
            pParserFassade->giveScriptData();
            break;
        default:
            Q_ASSERT(false);
    }
}

void GeneratorCPlusPlus::notifyCodeGenerated()
{
    int i=1;
    i=i+1;
}

void GeneratorCPlusPlus::allDatasReceived()
{
    // evaluate script first (Script keywords regarding defined keywords)
    //@todo evaluate doesn't work
    // @todo also evaluate rules against keywords
  // bool evaluationOk = pEvaluator->evaluate(keywords,script);
    bool evaluate = true;

   if(evaluate)
    {
       // get correct rule
       // parameter script and rule
        pCodegeneratorFassade->generate(script,rules,keywords);
    }
    else
    {
        // showing evaluation was not ok!!
    }
}

// expect keywords and script
// rules are needed later
bool GeneratorCPlusPlus::areAllDatasReceived()
{
    if(keywordsReceived && scriptReceived && rulesReceived)
    {
        keywordsReceived = false;
        rulesReceived = false;
        scriptReceived = false;
        return true;
    }
    return false;
}


void GeneratorCPlusPlus::receiveData(std::vector<QString> strv,General::ParserId::Id parserId)
{
    switch(parserId)
    {
        case General::ParserId::Id::Keyword:
            keywords = strv;
            keywordsReceived = true;
            if(areAllDatasReceived())
            {
                allDatasReceived();
            }
            break;
        case General::ParserId::Id::Rules:
            Q_ASSERT(false);
            break;
        case General::ParserId::Id::Script:
            script = strv;
            scriptReceived = true;
            if(areAllDatasReceived())
            {
                allDatasReceived();
            }
            // this is the last, assume all is received
            break;
        default:
            Q_ASSERT(false);
    }
}

void GeneratorCPlusPlus::receiveData(std::map<QString,QString> strv,General::ParserId::Id parserId)
{
    switch(parserId)
    {
        case General::ParserId::Id::Keyword:
            Q_ASSERT(false);
            break;
        case General::ParserId::Id::Rules:
            rules = strv;
            rulesReceived = true;
            if(areAllDatasReceived())
            {
                allDatasReceived();
            }
            break;
        case General::ParserId::Id::Script:
            Q_ASSERT(false);
            break;
        default:
            Q_ASSERT(false);
    }
}


}



