// Vector Class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class Vector
{
public:
	Vector(int s) : yourObject{new int[s]}, size{ s } {}
	int getSize() { return size; }
	int* getVector() { return yourObject; }
	int getElementAtPosition(int position) { return yourObject[position]; }
private:
	int size;
	int* yourObject;

};


int main()
{
    return 0;
}

