//
// Created by Mishach on 14.02.2023.
//
#pragma once
#include <iostream>
#include<cstring>
#define SIZE_STRING
namespace cs {
    class CustomString {
    public:
        ///Constructors
        CustomString(char &symbol, int &size); // №1
        CustomString(const CustomString  &other); // №2
        CustomString(char *str); // №3
        ~CustomString();

        ///Functions
        void outString() const;
        int getSize();
    private:
        char* _string;
        int _size;
    };
} // cs
