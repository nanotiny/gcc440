
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_key_KeyPairGeneratorFactory__
#define __gnu_java_security_key_KeyPairGeneratorFactory__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace key
        {
            class IKeyPairGenerator;
            class KeyPairGeneratorFactory;
        }
      }
    }
  }
}

class gnu::java::security::key::KeyPairGeneratorFactory : public ::java::lang::Object
{

  KeyPairGeneratorFactory();
public:
  static ::gnu::java::security::key::IKeyPairGenerator * getInstance(::java::lang::String *);
  static ::java::util::Set * getNames();
private:
  static ::gnu::java::security::key::IKeyPairGenerator * makeInstance(::java::lang::String *);
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_security_key_KeyPairGeneratorFactory__
