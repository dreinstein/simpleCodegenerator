///////////////////////////////////////////////////////////
//  ParserFassade.cpp
//  Implementation of the Class ParserFassade
//  Created on:      01-Nov-2015 20:03:25
//  Original author: udo_2
///////////////////////////////////////////////////////////



#include <memory>

#include <QtGlobal>

#include "ParserFassade.h"
#include "Utilities.h"
#include "KeywordsCPlusPlus.h"
#include "Rulescplusplus.h"
#include "Script.h"
#include "GeneratorCPlusPlus.h"
#include "Parser.h"

namespace Parser
{

using namespace General;
using namespace Logic;


ParserFassade::ParserFassade(BaseGenerator* generator,Languages::Parserlanguage lang)
{
    language = lang;
    keyParser = new KeywordsCPlusPlus();
    keyParser->registerObservers(generator);
    rulesParser = new RulesCPlusPlus();
    rulesParser->registerObservers(generator);
    scriptParser = new Script();
    scriptParser->registerObservers(generator);
}


ParserFassade::~ParserFassade()
{
    delete keyParser;
    delete rulesParser;
    delete scriptParser;
}


void ParserFassade::ParseKeyword()
{
     Q_ASSERT(keyParser);
     keyParser->Parse();
}

void ParserFassade::ParseRules()
{
     Q_ASSERT(rulesParser);
     rulesParser->Parse();
}

void ParserFassade::ParseScript()
{
     Q_ASSERT(scriptParser);
     scriptParser->Parse();
}


void ParserFassade::giveKeywordData()
{
     Q_ASSERT(keyParser);
     keyParser->giveData();
}

void ParserFassade::giveRulesData()
{
     Q_ASSERT(rulesParser);
     rulesParser->giveData();
}


void ParserFassade::giveScriptData()
{
     Q_ASSERT(scriptParser);
     rulesParser->giveData();
}


} // end namespace



