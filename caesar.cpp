/*
Author: Sumayia Rashid
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab6B

This program implementS Caesar cipher encryption based on a shift given by the user.
*/
#include <iostream>
#include <string>


char shiftChar(char c, int rshift);
std::string encryptCaesar(std::string plaintext, int rshift);

char shiftChar(char c, int rshift){
        if (c >= 'A' && c <= 'Z'){
            c ='A' + (c - 'A' + rshift + 26) % 26; //setting c equal to the shifted character from A
        }
        else if(c >= 'a' && c <= 'z'){
            c = 'a' + (c - 'a' + rshift + 26) % 26;//setting c equal to the shifted character from a
        }
        return c;
    }
std::string encryptCaesar(std::string plaintext, int rshift){
        std::string b = "";
        char c;
        for (int i = 0; i < plaintext.length(); i++){
            b += shiftChar(plaintext[i], rshift);
        }
        return b;
    }