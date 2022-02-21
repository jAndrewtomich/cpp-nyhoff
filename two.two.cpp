#include <iostream>

void printBinary(int &n){
    std::cout << sizeof(n) << '\n';
}


int main(){
    
    int input{};

    std::cout << "Enter an integer: " << '\n';
    std::cin >> input;

    printBinary(input);

    return 0;
}