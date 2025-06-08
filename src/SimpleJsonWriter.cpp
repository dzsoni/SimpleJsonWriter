#include "SimpleJsonWriter.h"

void SimpleJsonWriter::addKeyValue(String key, String value)
{
    if(_keyvaluecount == 0)
    {
        _jsonString += "{";
    }
    else
    {
        _jsonString += ",";
    }
    _jsonString += "\""+ key + "\":\"" + value + "\"";
    _keyvaluecount++;
}

String SimpleJsonWriter::getJsonString()
{
    if(_keyvaluecount == 0) _jsonString += "{";
    return _jsonString + "}";
}

void SimpleJsonWriter::clear()
{
    _keyvaluecount = 0;
    _jsonString = "";
}
