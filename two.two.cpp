#include <iostream>
#include <math.h>

void printBinary(int n){

    // sizeof() returns number of bytes, so multiply by 8 to get bits.
    int num_of_bits = sizeof(n) * 8;

    int binary_representation[num_of_bits];

    // mask of 1 followed by thirty-one 0's.  Bit shift to right and record bitwise ANDs.
    uint mask = pow(2, num_of_bits - 1);

    for (int i = 0; i < num_of_bits; ++i){
        if (n & mask)
            binary_representation[i] = 1;
        else
            binary_representation[i] = 0;
        mask = mask>>1;
    }

    // Got cute.  Represent 32 (size of 'binary_represenation') by dividing size of entire array by size of first memory location designated by array pointer
    int length_of_binary_rep = sizeof(binary_representation)/sizeof(*binary_representation);

    for (int j = 0; j < length_of_binary_rep; ++j)
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