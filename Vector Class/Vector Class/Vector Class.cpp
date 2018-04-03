// Vector Class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

class Vector
{
public:
	Vector(int s) : yourObject{new int[s]}, size{ s } {}
	~Vector() { delete[] yourObject; }
	int getSize() { return size; }
	int getElementAtPosition(int position) { return *yourObject+position; }	
	void addValueToPosition(int position, int value) { yourObject[position] = value; }
	void pushBack(int element) {
		yourObject = yourObject + size*size;
		yourObject[size] = element;
		size++;
	}
private:
	int size;
	int* yourObject;

};


int main()
{
	Vector v(5);
	for (int i = 0; i < v.getSize; i++)
	{
		v.addValueToPosition(i, i);
	}
	cout << v.getElementAtPosition(2);
	getchar();
    return 0;
}

