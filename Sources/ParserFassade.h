///////////////////////////////////////////////////////////
//  ParserFassade.h
//  Implementation of the Class ParserFassade
//  Created on:      01-Nov-2015 20:03:25
//  Original author: udo_2
///////////////////////////////////////////////////////////

#if !defined(EA_BF356F96_D102_426f_A476_1891C7E56F5F__INCLUDED_)
#define EA_BF356F96_D102_426f_A476_1891C7E56F5F__INCLUDED_


#include "Utilities.h"
#include <Vector>
#include<string>

class Parser;


class ParserFassade
{

public:	
    ParserFassade(General::Languages::Parserlanguage lang);
    ~ParserFassade();
    std::vector<std::string> ParseKeyword();
    std::vector<std::string> ParseRules();
    std::vector<std::string> ReadScript();

private:
    Parser *parser;
    General::Languages::Parserlanguage language;

    ParserFassade(const ParserFassade& f);
    ParserFassade& operator = (const ParserFassade& src);

};
#endif // !defined(EA_BF356F96_D102_426f_A476_1891C7E56F5F__INCLUDED_)
