
#pragma once
#include <stdlib.h>
using namespace std;

int mystrlen(const char* str); //-������� ���������� ����� ������.

void mystrcat_s(char*& str1, int& size1, const char* str2);///-������� ������������ ������ str2 � ������ str1 ����� ��������� ��� ����� ��� ��������� ������ �������� ���Ѳ�

char* mystrchr(const char* str, char s);// -������� ������������ ����� ������� s � ������ str.������� ���������� ��������� �� ������ ��������� ������� � ������, � ��������� ������ 0.

int StringToNumber(const char* str);// -������� ������������ ������ � ����� � ���������� ��� �����.

char* NumberToString(int number);// -������� ������������ ����� � ������ � ���������� ��������� �� ��� ������.

void Uppercase(char* str1); //-������� ����������� ������ � ������� �������.

void Lowercase(char* str1); //-������� ����������� ������ � ������ �������.

char* mystrrev(char* str); //-������� ����������� ������ � ���������� ��������� �� ����� ������.

