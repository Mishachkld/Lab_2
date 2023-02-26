//
// Created by Mishach on 14.02.2023.
//
#include "CustomString.hpp"

namespace cs {

    /// Конструктор 1
    CustomString::CustomString(char &symbol, int &size) : _size(size), _string(new char[size]) {
        std::fill(_string, _string + _size, symbol);
//        _string[_size] = 0;

        /*for (int i = 0; i < size; i++)
                _string[i] = symbol;*/
    }

    ///Конструктор копирования   (!!!)
    CustomString::CustomString(char *str) : _string(str), _size(strlen(str)) {
        std::copy(str, str + _size, _string);
//        _string[_size]; /// костыль

    }

    /// Конструктор 2
    CustomString::CustomString(const CustomString &other) : CustomString(other._string) {
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

    CustomString &CustomString::operator=(const CustomString &other) {
        CustomString temp = other;
        std::swap(temp._string, _string);
        std::swap(temp._size, _size);
        std::copy(other._string, other._string + other._size, _string);
        return *this;
    }

    int CustomString::find(const char &a) {
        int index = -1;
        for (int i = 0; i < _size; i++) {
            if (_string[i] == a) {
                index = i;
                break;   /// осуждаю
            }
        }
        return index;
    }

    char *CustomString::c_str() {
        return _string;
    }
    /// Возвращает ссылку на i-ый элемент. В противном случае возвращает костыль :)
    char& CustomString::at(const int i) {
        if ((i >= 0) and (i < _size))
            return _string[i];
        std::cout << "Errorr..."<< std::endl;
        return exceptionChar;

       /* try {
            return _string[i];
        }
        catch(const std::out_of_range& e){
            return exceptionChar;
            std::cout << e.what() << std::endl;
        }*/

    }
} // cs