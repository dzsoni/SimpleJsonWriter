#ifndef JSONWRITER_H
#define JSONWRITER_H

#include "Arduino.h"
#include <SPIFFS.h>


//! Type of JSON value /from RapidJson/
enum Type {
    kNullType = 0,      //!< null
    kFalseType = 1,     //!< false
    kTrueType = 2,      //!< true
    kObjectType = 3,    //!< object
    kArrayType = 4,     //!< array 
    kStringType = 5,    //!< string
    kNumberType = 6     //!< number
};

class JsonWriter
{
 private:
    bool    writenumbersasstring=0;
 public:
    JsonWriter();
    ~JsonWriter();
    bool Open(String filename);
    void SetWriteNumbersAsString(bool asstring){writenumbersasstring=asstring;};
    bool GetWriteNumbersASString(){return writenumbersasstring;};
};

#endif /* JSONWRITER_H */
