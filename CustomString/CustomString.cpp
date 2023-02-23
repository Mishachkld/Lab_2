//
// Created by Mishach on 14.02.2023.
//
#include "CustomString.hpp"

namespace cs {

    /// Конструктор 1
    CustomString::CustomString(char &symbol, int &size) : _size(size + 1), _string(new char[size]){
        std::fill(_string,_string + _size, symbol);
//        _string[_size] = 0;

    /*for (int i = 0; i < size; i++)
            _string[i] = symbol;*/
    }
    ///Конструктор копирования   (!!!)
    CustomString::CustomString(char *str) : _string(str), _size(strlen(str)+ 1){
        std::copy(str, str + _size, _string);
//        _string[_size]; /// костыль

    }

    /// Конструктор 2
    CustomString::CustomString(const CustomString& other) : CustomString(other._string) {
   /*     _size = other._size;
        ///выделили память
        _string = new char [_size];
        std::copy(other._string, other._string + _size, _string);*/
    }

    CustomString::~CustomString() {
            delete[] _string;
    }

    void CustomString::outString() const {
        for (int i = 0; i < _size; i++)
            std::cout << _string[i];
        std::cout << std::endl;
    }

    int CustomString::length() {
        return _size;
    }

    CustomString& CustomString::operator=(const CustomString& other) {
        CustomString temp = other;
        std::swap(temp._string, _string);
        std::swap(temp._size, _size);
        std::copy(other._string, other._string + other._size, _string);
        return *this;
    }

} // cs