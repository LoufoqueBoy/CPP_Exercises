#include<iostream>

int main (void){
    std::string nom;
    std::cout << "What's your name? " << std::endl;
    std::cin >> nom;
    std::cout << "Hello " << nom << " !" << std::endl;
    return 0;
}