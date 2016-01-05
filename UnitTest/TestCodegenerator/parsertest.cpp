#include "parsertest.h"
#include "../../gtest/gtest.h"
//#include "../../gmock/gmock.h"
#include "Parserimplementation.h"
#include <vector>
#include <map>
#include <QString>
#include <unistd.h>
#include <QtGlobal>

using namespace NParser;

ParserTest::ParserTest()
{
}



TEST(ParserTest, GetVecValuesFromParserImplementation) {
    ParserImpl *parser = new ParserImpl();
    std::vector<QString> value = parser->doParseForVec("..\\Files\\Keywords\\myFirstKeywords.txt");
    EXPECT_EQ("Parser Test successfully done", value[0]);
    delete parser;
}

TEST(ParserTest, GetHashValuesFromParserImplementation) {
    ParserImpl *parser = new ParserImpl();
    std::map<QString, QString> mapValues = parser->doParseForMap(("..\\Files\\Rules"));
    QString cwd = "..\\Files\\Rules\\class.txt";
    EXPECT_EQ(cwd, mapValues["class"]);
    delete parser;
}
