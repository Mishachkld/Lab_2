#include "CustomString/CustomString.hpp"

int main() {
    char symbol = 'b';
    int size = 7;
    char symbols[7] = {'s', 'y', 'm', 'b', 'o', 'l', 's'};
    cs::CustomString string1(symbol, size);
    cs::CustomString string(symbols);
    string.at(6) = 'x';
//    string1 = string;
    string.outString();
    string1.outString();
    cs::CustomString newStr = string + string1;
    newStr.outString();
    std::cout << (string1 == string) << std::endl;
    std::cout << string1.find('7') << " " << string1.find('l') << string.c_str()[0] << " " << (string1 < string) << " ";

//    string += string1.at(6);

    return 0;
}
