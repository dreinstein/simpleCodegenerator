#include "Attributescriptexception.h"

namespace Errorhandling
{

AttributeScriptException::AttributeScriptException()
{

}

AttributeScriptException::~AttributeScriptException()
{

}


std::string AttributeScriptException::whatDescription() const throw ()
{
    return error;
}

}


