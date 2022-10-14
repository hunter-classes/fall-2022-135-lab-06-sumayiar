/*
Author: Sumayia Rashid
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab6C

This program implementS Caesar cipher encryption based on a shift given by the user.
*/
#include <iostream>
#include <string>

std::string encryptVigenere(std::string plaintext, std::string keyword);
std::string encryptVigenere(std::string plaintext, std::string keyword){
    std::string s;
    char c;
    int index = 0;
    int key;
    
    for (int i = 0; i < plaintext.length(); i++){
        c = plaintext[i];
        if (c >= 'A' && c <= 'Z'){
            key = keyword[index] - 'a';
            index = (index + 1) % keyword.length();
            c = 'a' + (c -'a' + key + 26) % 26;
        }
        s += c;
    }
    return s;
}
