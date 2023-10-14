#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Strings.h"
using namespace std;

int mystrlen(const char* str)
{
    int length = 0;
    while (*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}



void mystrcat_s(char*& str1, int& size1, const char* str2)
{
    int s1 = strlen(str1);
    int s2 = strlen(str2);

    if (s1 + s2 >= size1)
    {
        int new_size = s1 + s2 + 1;
        char* new_str = new char[new_size];

        for (int i = 0; i < s1; i++)
        {
            new_str[i] = str1[i];
        }

        for (int i = 0; i < s2; i++)
        {
            new_str[s1 + i] = str2[i];
        }

        new_str[s1 + s2] = '\0';

        delete[] str1;
        str1 = new_str;
        size1 = new_size;
    }
    else
    {
        for (int i = 0; i < s2; i++)
        {
            str1[s1 + i] = str2[i];
        }
        str1[s1 + s2] = '\0';
    }
}

char* mystrchr(const char* str, char s)
{
    while (*str != '\0')
    {
        if (*str == s)
        {
            return const_cast<char*>(str); //Используем const_cast для удаления const
        }
        str++;
    }
    return nullptr;
}

int StringToNumber(const char* str)
{
    return atoi(str); //Используем функцию atoi для преобразования строки в число
}

char* NumberToString(int number)
{
    const int maxLength = 5;
    char* result = new char[maxLength];

    snprintf(result, maxLength, "%d", number);
    return result;
}

void Uppercase(char* str1)
{
    int length = strlen(str1);
    for (int i = 0; i < length; i++)
    {
        str1[i] = toupper(str1[i]);
    }
}

void Lowercase(char* str1)
{
    int length = strlen(str1);
    for (int i = 0; i < length; i++)
    {
        str1[i] = tolower(str1[i]);
    }
}

char* mystrrev(char* str)
{
    int length = strlen(str);
    char* reversedStr = new char[length + 1];

    for (int i = 0; i < length; i++)
    {
        reversedStr[i] = str[length - i - 1];
    }

    reversedStr[length] = '\0';
    return reversedStr;
}