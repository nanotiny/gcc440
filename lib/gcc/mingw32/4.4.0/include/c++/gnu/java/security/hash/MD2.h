
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_hash_MD2__
#define __gnu_java_security_hash_MD2__

#pragma interface

#include <gnu/java/security/hash/BaseHash.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace hash
        {
            class MD2;
        }
      }
    }
  }
}

class gnu::java::security::hash::MD2 : public ::gnu::java::security::hash::BaseHash
{

public:
  MD2();
private:
  MD2(::gnu::java::security::hash::MD2 *);
public:
  virtual ::java::lang::Object * clone();
public: // actually protected
  virtual JArray< jbyte > * getResult();
  virtual void resetContext();
public:
  virtual jboolean selfTest();
public: // actually protected
  virtual JArray< jbyte > * padBuffer();
  virtual void transform(JArray< jbyte > *, jint);
private:
  void encryptBlock(JArray< jbyte > *, jint);
  void updateCheckSumAndEncryptBlock(JArray< jbyte > *, jint);
  static const jint DIGEST_LENGTH = 16;
  static const jint BLOCK_LENGTH = 16;
  static JArray< jbyte > * PI;
  static ::java::lang::String * DIGEST0;
  static ::java::lang::Boolean * valid;
  JArray< jbyte > * __attribute__((aligned(__alignof__( ::gnu::java::security::hash::BaseHash)))) checksum;
  JArray< jbyte > * work;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_security_hash_MD2__
