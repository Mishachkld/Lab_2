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
        CustomString(char *str1, char *str2, int sizeFirst, int sizeSecond);
        ~CustomString();

        ///Functions
        void outString() const;
        int length();
        int find(const char &a);
        char* c_str();
        char& at(int i);

        CustomString& operator=(const CustomString& other);
//        CustomString operator+(const CustomString& other);
        bool operator==(const CustomString& other) const ;
        bool operator>(const CustomString& other) const;
        bool operator<(const CustomString& other) const;
    private:
        char* _string;
        int _size;
        char exceptionChar = '0'; /// костыль
    };
} // cs
