// Vector Class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

class Vector
{
public:
	Vector(int s) : array{ new int[s] }, size{ s }, elementCount{ s } {}
	~Vector() { delete[] array; }
	int getSize() { return size; }
	int getElementAtPosition(int position) { return *(array+position); }	
	void addValueToPosition(int position, int value) { array[position] = value; }
	void pushBack(int element) {
		if (elementCount == size)
		{
			int const s = this->getSize();
			int newArray[s*s] = *array;
			newArray[size] = element;
			*array = newArray;
			++elementCount;
		}
		if (elementCount < size)
		{
			array[elementCount] = element;
			++elementCount;
		}
		}

private:
	int size, elementCount;
	int* array;
};


int main()
{
	Vector v(5);
	for (int i = 0; i < v.getSize(); i++)
	{
		v.addValueToPosition(i, i);
	}
	for (int i = 0; i < v.getSize(); i++)
		cout << v.getElementAtPosition(i) << endl;
	getchar();
    return 0;
}

