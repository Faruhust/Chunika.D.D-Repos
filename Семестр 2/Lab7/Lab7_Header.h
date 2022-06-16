#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <typeinfo>
#include "windows.h";

using namespace std;

#define amount_of_elements 3




struct Stats {

    char* name = new char[15];
    char type;
    int tempr;
    float speed;

};


void input_backlist(Stats liquid);
void random(Stats liquid);
void print(Stats liquid);
void print_all(Stats liquid);
void listNumberPrint(Stats liquid);
void input_forvardlist(Stats liquid);
