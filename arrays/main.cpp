#include <iostream>

int main(){
    int example[5];

    int* ptr = example;

    for (int i = 0; i < 5; i++)
        example[i] = 2;

    example[2] = 6;
    std::cout << example[0] << std::endl;
    std::cout << example <<std::endl;
    std::cout << *ptr << std::endl;
    std::cout << *(ptr + 2) << std::endl;

    return 0;
};