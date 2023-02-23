#include "CustomString/CustomString.hpp"

int main() {
    char symbol = 'b';
    int size = 5;
    char symbols [7] = {'s','y','m','b','o','l', 's'};
    cs::CustomString string1(symbol, size);
    cs::CustomString string(symbols);
//    cs::CustomString string1 = string;
    string1 = string;
    string1.outString();
    string.outString();
    return 0;
}
