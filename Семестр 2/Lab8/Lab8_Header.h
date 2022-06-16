#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>

using namespace std;






struct Node
{
	Node* next;
	//char* name = new char[15];
	char name[15];
	char type;
	int tempr;
	float speed;
};






Node* CreateListConsole();// user`s input 
Node* CreateListRandom();// randomize the information 
Node* LoadFromFile();// reading from data.txt
void PrintList(Node* begin);// print list table information
void SearchByDenomination(Node* begin); // searching by name
void SearchByType(Node* begin);// searhing by type
void SearchByQuantity(Node* begin);// searhing by tempr
void SearchByWeight(Node* begin);// searhing by weigth
void AddTermBegin(Node** begin);// adding new item in the beginning of the list
void AddTermEnd(Node* begin);// adding new item in the end of the list
void AddTermTag(Node* begin);// inserting item 
void DeleteTermBegin(Node** begin);// delete from the beginnng of list
void DeleteTermEnd(Node** begin);// delete from the end of list
void RemoveTermTag(Node** begin);// remove inserted item
void SortTerm(Node* begin, int set); // sorting information
void SaveInFile(Node* begin);// writing in data.txt
void FreeList(Node** begin);// clean list
bool checkNULL(Node* begin);// cheking on empty