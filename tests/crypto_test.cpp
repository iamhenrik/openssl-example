#include "crypto.hpp"
#include <cassert>

using namespace std;

int main() {
  // Results copied from https://caligatio.github.io/jsSHA/
  assert(Crypto::hex(Crypto::sha1("Test")) == "640ab2bae07bedc4c163f679a746f7ab7fb5d1fa");
  assert(Crypto::hex(Crypto::sha1("Test", 2)) == "af31c6cbdecd88726d0a9b3798c71ef41f1624d5");

  // Results copied from http://www.freecodeformat.com/pbkdf2.php
  assert(Crypto::hex(Crypto::pbkdf2("Password", "Salt", 4096, 128 / 8)) == "f66df50f8aaa11e4d9721e1312ff2e66");
  assert(Crypto::hex(Crypto::pbkdf2("Password", "Salt", 8192, 512 / 8)) == "a941ccbc34d1ee8ebbd1d34824a419c3dc4eac9cbc7c36ae6c7ca8725e2b618a6ad22241e787af937b0960cf85aa8ea3a258f243e05d3cc9b08af5dd93be046c");
  
  assert(Crypto::hex(Crypto::md5("Password")) == "dc647eb65e6711e155375218212b3964");
  
  assert(Crypto::hex(Crypto::sha256("Password", 2)) == "b6d663310f045614926972d01204a87535f13b332ea789bac89480a17bd3ad0f");
  assert(Crypto::hex(Crypto::sha512("Password", 2)) == "a00897a139981322d7e07aa6e9a15173f15ff4f968e251578a4562edcc39b86ff846dc4bb07c143d00f0334f6e369e735caf320e3054b28541bd751f7f6bbad8");
 //assert(Crypto::hex/Crypto::
  
}

