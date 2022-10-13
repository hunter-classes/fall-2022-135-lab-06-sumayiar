/*
Author: Sumayia Rashid
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab6A

This program asks the user to input a line of text (which may possibly include spaces). Then, it reports all the characters from the input line together with their ASCII codes.
*/
#include <iostream>
#include <string>

int main(){
    std::cout << "Input: " << std::endl;
    std::string s;
    getline(std::cin, s);
    for (int i = 0; i <= s.length(); i++){
        std::cout << s[i] << " " << (int)s[i] << std::endl;  
    }
}
