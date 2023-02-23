#include "CustomString/CustomString.hpp"

int main() {
    char a = 'b';
//    char a[] = 'b';
    int size = 5;
    cs::CustomString string(a, size);
    string.outString();
    return 0;
}
