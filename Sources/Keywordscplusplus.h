#ifndef KEYWORDCPLUSPLUS
#define KEYWORDCPLUSPLUS

#include "Parser.h"
#include "Parser.h"
#include "Utilities.h"
#include <string>
#include <vector>

#define KEYWORDSFILE "Keywords"
#define KEAWORDSPATH "..\\Keywords\\Keywords.txt"

class BaseGenerator;

class KeywordsCPlusPlus:public Parser{
public:
    virtual ~KeywordsCPlusPlus(){;}
    void Parse();
    void giveData();
    General::Types::DataTypes getDataType() {return General::Types::DataTypes::Vector;}
    void registerObservers(BaseGenerator* observer);

private:
    std::vector<std::string> values;
    int id;
};

#endif // KEYWORDCPLUSPLUS
