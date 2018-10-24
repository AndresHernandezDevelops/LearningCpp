// Learning.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <cmath>
#include <ctime>
#include <iostream>
using namespace std;

void casting() {
	float number = float(10) / 3;
	cout << number << endl;
}

void characterArrays() {
	char n = 'g';
	const char * name = "Duncan";
	char name2[7] = "jordan";
	cout << name << ", " << name2 << endl;
}

void randomNumbers() {
	srand(time(NULL));
	int random = rand() % 100; //generates a random number between 0 or 1 and 100, the seed fed to it is the time in seconds.
	cout << random << endl;
}

int quadratic(int a, int b, int c, int multi) {
	int result;
	result = (-b + multi * sqrt(b*b - 4 * c*a)) / (2 * a);
	return result;
}

void functions() {
	int a = 10, b, c;
	cout << "enter a: ";
	cin >> a;
	cout << "enter b: ";
	cin >> b;
	cout << "enter c: ";
	cin >> c;

	int pZero = quadratic(a, b, c, 1), nZero = quadratic(a, b, c, -1);

	cout << "your two zeroes are: " << pZero << " and " << nZero << endl;
}

void times_ten_pointer(int* a) {
	*a *= 10;
}

void times_ten_reference(int& a) {
	a *= 10;
}

void pointersVsReference() {
	int a = 10;
	int *p = &a, &ra = a; //p is a pointer to p, ra is a reference to a, neither serves a purpose in this method.
	cout << "a before pointer mult: " << a << endl;

	times_ten_pointer(&a);
	cout << "a after pointer mult, before reference mult: " << a << endl;

	times_ten_reference(a);
	cout << "a after reference mult: " << a << endl;
}

void pointerArithmetic() {
	int numbers[] = { 1,10,100 };
	cout << &(numbers[0]) << " -> " << *(&(numbers[0])) << endl;
	cout << &(numbers[0]) + 1 << " -> " << *(&(numbers[0])+1) << endl;
	cout << &(numbers[0]) + 2 << " -> " << *(&(numbers[0])+2) << endl;
}

//each function call represents a new tool i've learned about the language
int main()
{
	casting();
	characterArrays();
	randomNumbers();
	//functions();
	pointersVsReference();
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
