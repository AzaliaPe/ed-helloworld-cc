
#include<iostream>
int main()
{
    int number1{2147483647};
    short int number2{1};
    unsigned int number3{4294967295};
    const unsigned short int number4{4}; //Este valor no es modificable y es de 16 bits o sea 2 bytes
    long long int number5{6};
    unsigned char char1{254};
    bool option{false}; //Es verdadero o es falso también de que 1 o 0

    // double numberf1{1901902921.99999999};

    std::cout << "int size is: " << sizeof(number1) << " bytes" << std::endl;
    //[1][1][0][0] [1][1][0][1] [1][1][0][0] [1][1][0][1] [1][1][0][0] [1][1][0][1] [1][1][0][0] [1][1][0][1] 32 bits (tu compu)

    std::cout << "short int size is: " << sizeof(number2) << " bytes" << std::endl;
    //[1][1][0][0] [1][1][0][1] [1][1][0][0] [1][1][0][1] 16 bits (tu super nintendo)

    std::cout << "unsigned size is: " << sizeof(number3) << " bytes" << std::endl;

    std::cout << "long long int size is: " << sizeof(number5) << " bytes" << std::endl;

    std::cout << "float: " << sizeof(float) << " bytes" <<std::endl;//32 bits

    std::cout << "double: " << sizeof(double) << " bytes" <<std::endl;//64 bits

    std::cout << "char: " << char1 <<  " " << sizeof(char) << " bytes" <<std::endl;//8 bits es un byte
    // std::cout << "char: " << char1 <<  " " << sizeof(unsigned const char) << " bytes" <<std::endl;//8 bits es un byte

    std::cout << "bool: " << option <<  " " << sizeof(option) << " bytes" <<std::endl;

    // std::cout <<"Holi";

    std::cin.get();

    return 0;
}
