// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Please enter your name: ";
    std::cin >> str;
    
    std::cout << str;
    std::cout << " is a great name for a coder!";

    std::cout << std::endl << std::endl;
    return (0);
}
