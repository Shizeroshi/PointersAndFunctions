#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stdio.h>
#include <io.h>
#include <Windows.h>
#include <locale>
#include <algorithm>
#include <fcntl.h>
#include <valarray>
#include <conio.h>

using namespace std;

/*
#define escape 27
#define enter 13
#define space 32
#define tab 9
#define BackSlash 92
*/
/*
#define UgolUpLeft (char)218
#define UgolUpRight (char)191
#define UgolDownLeft (char)192
#define UgolDownRight (char)217
#define HorizontalLine (char)196
#define VerticalLine (char)179
#define Kvadrat (char)219
#define space 32
*/

int Sum(int n, ...)
{
	int sum;

	int* second = &n;
	second++;

	int* third = second++;

	sum = n + *second + *third;

	return sum;
}

int Mul(int n, ...)
{
	int sum2;

	int* second = &n;
	second++;

	int* third = second++;

	sum2 = n * (*second) * (*third);

	return sum2;
}

int main()
{
	setlocale(LC_ALL, "");
	system("Color 0A");
	
	const char Task1[] = "Task one: Write a function with a variable number of parameters, which will return the sum of all values passed to it";
	for (int i = 0; i < sizeof(Task1); i++, Sleep(20))
		cout << Task1[i];
	cout << endl << endl;

	
	cout << "Answer:" << endl;

	const char First[] = "1st Function = Sum(4, 8, 12)";
	for (int i = 0; i < sizeof(First); i++, Sleep(50))
		cout << First[i];
	cout << endl;


	cout << "Sum: " << Sum(4, 8, 12) << " (4 + 8 + 12)" << endl << endl;

	const char Task2[] = "Task two and last: Write a function with a variable number of parameters which will return the product of all values passed to it";
	for (int i = 0; i < sizeof(Task2); i++, Sleep(20))
		cout << Task2[i];
	cout << endl << endl;
	
	cout << "Answer: " << endl;

	const char Second[] = "2nd Function = Mul(2, 4, 8)";
	for (int i = 0; i < sizeof(Second); i++, Sleep(50))
		cout << Second[i];
	cout << endl << endl;

	cout << "Mul: " << Mul(2, 4, 8) << " (2 * 4 * 8)" << endl;

	// Как то так :)
}