#ifndef PARSERIMPLEMENTATIONXML_H
#define PARSERIMPLEMENTATIONXML_H

#include <vector>
#include <QString>
#include <map>
#include <qxmlstream.h>

#include "Base/BaseParserImplementation.h"

namespace NParser
{

class ParserImplXML : public BaseParserImpl
{
private:
    const QString at = "@";
    const QString doubleColon = "::";
    const QString emptyChar = " ";
    const QString root = "root";
    mutable QXmlStreamReader reader;
    mutable QString vecElement;
    mutable QString startElement;
    mutable std::vector<QString> xmlValues;
    void parseAndStoreToVec() const;
    void storeValue()const;
    void pushInVectorArray()const;
    bool mustLoopBeInterrupted() const;
public:
    ParserImplXML(){;}
    virtual ~ParserImplXML(){;}
    std::vector<QString> doParseForVec(const QString)const override final;
    std::map<QString,QString> doParseForMap(const QString)const override final;
};

}

#endif // PARSERIMPLEMENTATIONXML_H

