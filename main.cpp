#include <iostream>
#include "funcs.h"

int main()
{
  std::string s;
  int shift;

  std::cout << "Enter plaintext: " << std::endl;
  getline(std::cin, s);

  std::cout << "Enter shift: " << std::endl;
  std::cin >> shift;

  std::cout << "Ciphertext: " << encryptCaesar(s, shift) << std::endl;

  return 0;
}
