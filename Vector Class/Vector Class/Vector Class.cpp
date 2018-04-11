// Vector Class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

class Vector
{
public:
	Vector(int s) : array{ new int[s] }, size{ s }, elementCount{ getElements(0)} {}
	~Vector() { delete[] array; }
	int getSize() { return size; }
	int getElementAtPosition(int);
	void addValueToPosition(int, int);
	void pushBack(int);
	int* checkCapacity(int);
	int getElements(int);

private:
	int size, elementCount;
	int* array;
};

int Vector::getElements(int v) {
	while (array[v] != NULL)
		v++;
	return v;
}
int Vector::getElementAtPosition(int position) {
	if (position<elementCount)
		return array[position];
	cout << "Position out of range";
	return 0;
}
void Vector::addValueToPosition(int position, int value) {
	if (position<elementCount)
		array[position] = value;
	else
		cout << "Position out of range, value not added";
}
void Vector::pushBack(int element) {
	if (elementCount < size)
		array[elementCount] = element;
	if (elementCount == size)
		array = checkCapacity(element);
	++elementCount;
}
int* Vector::checkCapacity(int element) {
	int* newArray = new int[size*size];
	size *= size;
	for (int i = 0; i < size; i++)
		newArray[i] = array[i];
	newArray[elementCount] = element;
	return newArray;
}


int main()
{
	Vector v(5);
	for (int i = 0; i < v.getSize(); i++)
	{
		v.addValueToPosition(i, i);
	}
	v.pushBack(5);
	for (int i = 0; i < v.getSize(); i++)
		cout << v.getElementAtPosition(i) << endl;
	getchar();
    return 0;
}

