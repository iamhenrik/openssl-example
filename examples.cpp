#include "crypto.hpp"
#include <iostream>

using namespace std;

int main() {
  cout << "SHA-1 with 1 iteration" << endl;
  cout << Crypto::hex(Crypto::sha1("Test")) << endl << endl;
  
  cout << "SHA-1 with two iterations" << endl;
  cout << Crypto::hex(Crypto::sha1(Crypto::sha1("Test"))) << endl;
  cout << Crypto::hex(Crypto::sha1("Test", 2)) << endl << endl;

  cout << "The derived key from the PBKDF2 algorithm" << endl;
  cout << Crypto::hex(Crypto::pbkdf2("Password", "Salt")) << endl;
  
  cout << "The derived key from the MD5 algorithm" << endl;
  cout << Crypto::hex(Crypto::md5("Password")) <<endl;
  
  cout << "The derived key from the SHA256 algorithm" << endl;
  cout << Crypto::hex(Crypto::sha256("Password",2)) <<endl;

  cout << "The derived key from the SHA512 algorithm" << endl;
  cout << Crypto::hex(Crypto::sha512("Password",2)) <<endl;
}
