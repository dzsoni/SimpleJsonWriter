#ifndef SIMPLEJSONWRITER_H
#define SIMPLEJSONWRITER_H

#include "WString.h"

class SimpleJsonWriter
{
private:
    String _jsonString;
    unsigned int _keyvaluecount = 0;
public:
    SimpleJsonWriter(){};
    ~SimpleJsonWriter(){};

    void addKeyValue(String key, String value);
    String getJsonString();
    void clear();
};



#endif /* SIMPLEJSONWRITER_H */
