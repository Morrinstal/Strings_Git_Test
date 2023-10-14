
#pragma once
#include <stdlib.h>
using namespace std;

int mystrlen(const char* str); //-функция определяет длину строки.

void mystrcat_s(char*& str1, int& size1, const char* str2);///-функция присоединяет строку str2 к строке str1 треба перевіряти щоб буфер був потрібного розміру БЕЗПЕЧНА ВЕРСІЯ

char* mystrchr(const char* str, char s);// -функция осуществляет поиск символа s в строке str.Функция возвращает указатель на первое вхождение символа в строку, в противном случае 0.

int StringToNumber(const char* str);// -функция конвертирует строку в число и возвращает это число.

char* NumberToString(int number);// -функция конвертирует число в строку и возвращает указатель на эту строку.

void Uppercase(char* str1); //-функция преобразует строку в верхний регистр.

void Lowercase(char* str1); //-функция преобразует строку в нижний регистр.

char* mystrrev(char* str); //-функция реверсирует строку и возвращает указатель на новую строку.

