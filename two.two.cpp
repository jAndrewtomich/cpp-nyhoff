#include <iostream>
#include <math.h>

void printBinary(int n){

    int num_of_bits = sizeof(n) * 8;
    int binary_representation[num_of_bits];

    uint mask = pow(2, num_of_bits - 1);

    for (int i = 0; i < num_of_bits; ++i){
        if (n & mask)
            binary_representation[i] = 1;
        else
            binary_representation[i] = 0;
        mask = mask>>1;
    }

    for (int j = 0; j < num_of_bits; ++j)
        std::cout << binary_representation[j];

    std::cout << std::endl;    
}


int main(){
    
    int input{};

    std::cout << "Enter an integer: " << '\n';
    std::cin >> input;

    printBinary(input);

    return 0;
}