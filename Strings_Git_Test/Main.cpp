#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Strings.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    system("chcp 1251");
    system("cls");

    //Задание 1

    const char* myString = "Оппенгеймер";
    int length = mystrlen(myString);
    cout << "Длина строки: " << length << endl;

    //Задание 2

    //const char* source = "hello, world!";
    //int bufferSize = 14; //выделяем размер буфера под размер строки (с учётом нуль-терминатора)

    //char* destination = new char[bufferSize];
    //destination[0] = '\0';

    //mystrcpy_s(destination, bufferSize, source);

    //cout << "Скопированная строка: " << destination << endl;

    //delete[] destination;

    //Задание 3

    //const char* str1 = "Hello, ";
    //const char* str2 = "world!";

    //int buffer_size = 3; //Специально выделил размер намного меньше, чтобы функция сработала)

    //char* result = new char[buffer_size];
    //result[0] = '\0';

    //mystrcat_s(result, buffer_size, str1);
    //mystrcat_s(result, buffer_size, str2);

    //cout << "Результат после конкатенации строк: " << result << endl;

    //delete[] result;

    //Задание 4

    /*const char* myString = "Please, help me!";
    char searchChar = 's';

    char* result = mystrchr(myString, searchChar);

    if (result != nullptr)
    {
        cout << "Символ '" << searchChar << "' найден по индексу: " << result - myString << endl;
    }
    else
    {
        cout << "Символ '" << searchChar << "' не найден!" << endl;
    }*/

    //Задание 5

    /*const char* str = "65009";

    int number = StringToNumber(str);

    cout << "Результат после конвертации: " << number << endl;*/


    //Задание 6

    /*int number = 2001;
    char* str = NumberToString(number);
    cout << "Число в виде строки: " << str << endl;

    delete[] str;*/

    //Задание 7

    /*char str[] = "Человек собаке друг!";
    Uppercase(str);
    cout << "Строка в верхнем регистре: " << str << endl;*/

    //Задание 8

    /*char str[] = "ЭТО ЗНАЮТ ВСЕ ВОКРУГ!";
    Lowercase(str);
    cout << "Строка в нижнем регистре: " << str << endl;*/

    //Задание 9

    /*char originalStr[] = "Ветер в ивах";
    char* reversedStr = mystrrev(originalStr);

    cout << "Изначальная строка: " << originalStr << endl;
    cout << "Реверс: " << reversedStr << endl;

    delete[] reversedStr;*/

}
