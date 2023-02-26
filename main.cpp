#include "CustomString/CustomString.hpp"

int main() {
    char symbol = 'b';
    int size = 5;
    char symbols[7] = {'s', 'y', 'm', 'b', 'o', 'l', 's'};
    cs::CustomString string1(symbol, size);
    std::cout << string1.length() << std::endl;
    cs::CustomString string(symbols);
    string1 = string;
    string1.outString();
    string1.at(6) = 'x';
//    string += string1.at(6);
    string1.outString();
    std::cout << string1.find('7') << " " << string1.find('l') << std::endl;
    std::cout << string.c_str()[0] << std::endl;
    return 0;
}
