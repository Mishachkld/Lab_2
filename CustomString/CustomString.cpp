//
// Created by Mishach on 14.02.2023.
//
#include "CustomString.hpp"

namespace cs {

    /// Конструктор 1
    CustomString::CustomString(char &symbol, int &size) : _size(size), _string(new char[size]){
        for (int i = 0; i < size; i++)
            _string[i] = symbol;
    }
    ///Конструктор копирования   (!!!)
    CustomString::CustomString(char *str) : _string(str), _size(strlen(str)){

    }

    /// Конструктор 2
    CustomString::CustomString(const CustomString& other) : CustomString(other._string) {
    }

    CustomString::~CustomString() {
        delete[] _string;
    }

    void CustomString::outString() const {
        for (int i = 0; i < _size; i++) {
            std::cout << _string[i];
        }
    }

    int CustomString::getSize() {
        return _size;
    }

} // cs