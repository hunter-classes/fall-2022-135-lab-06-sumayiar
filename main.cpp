#include <iostream>
#include "funcs.h"
#include "vigenere.cpp"
#include "caesar.cpp"

int main()
{
  //Task B
  std::string s;
  int shift;

  std::cout << "Enter plaintext: " << std::endl;
  getline(std::cin, s);

  std::cout << "Enter shift: " << std::endl;
  std::cin >> shift;

  std::cout << "Ciphertext: " << encryptCaesar(s, shift) << std::endl;

  //Task C
  std:: string t;
  int key;

  std::cout << "Enter plaintext: " << std::endl;
  getline (std::cin, t);

  std::cout << "Enter keyword: " << std::endl;
  std::cin >> key;

  std::cout << "Ciphertext: " << encryptVigenere(t, key) << std::endl;
  return 0;
}
