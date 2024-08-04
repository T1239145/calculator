#include <iostream>
#include <cmath>


using namespace std;
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
/*
*
* 4. Calculator for Scientific Operations in C++
The main goal of a Calculator for Scientific Operations is to do simple mathematical computations.
It also executes a few difficult-to-solve trigonometric and logarithmic functions.
The calculator will evaluate any mathematical equation entered using infix notation,
which will then provide the result. In addition, it supports addition, subtraction, multiplication,
and division in mathematics. This calculator allows keyboard entry. The C++ class is used to define the
data of the Calculator and the various types of functions it can perform such as addition, subtraction,
multiplication, division, and modulo. The project also uses classes that handle different exceptions when
an illegal input is received or when an operation results in a singular value, such as an imaginary number.
The technology used for this program was object-oriented programming which provided the flexibility necessary
for the implementation of the various operations.

Technologies Required: C++ programming language, Data structures, and Algorithms, Math library in C++, and OOPS.
*/
struct basicCalculator {
	double add(double a, double b) { return a + b; }
	double subtract(double a, double b) { return a - b; }
	double multiply(double a, double b) { return a * b; }
	double division(double a, double b) { return a / b; }

	//trig functions   if not using namespace it would  be return std:sin
	double sin(double angle) { return sin(angle); }
	double cos(double angle) { return cos(angle); }
	double tan(double angle) { return tan(angle); }

};

void calculateFunctions(basicCalculator& calculator, int choice, double a, double b) {

	double result;
	switch (choice) {
	case 1:
		result = calculator.add(a, b);
		cout << "\t\t" << " answer is: " << result << endl;
		break;
	case 2:
		result = calculator.subtract(a, b);
		cout << "\t\t" << " answer is: " << result << endl;
		break;
	case 3:
		result = calculator.multiply(a, b);
		cout << "\t\t" << " answer is: " << result << endl;
		break;
	case 4:
		result = calculator.division(a, b);
		cout << "\t\t" << " answer is: " << result << endl;
		break;
	case 5://convert degree to radian
		result = calculator.sin(a * M_PI / 180.0);
		cout << "\t\t" << " answer is: " << result << endl;
		break;
	}
}

int main() {
	basicCalculator calculator;//declares object
	double num1, num2;
	bool beta = true;
	int input;

	while (beta) {
		cout << "\t\t" << " choose options below " << endl;
		cout << "\t" << "==================================== " << endl;
		cout << "\t\t" << "1.addition " << endl;
		cout << "\t\t" << "2.subtraction " << endl;
		cout << "\t\t" << "3.multiplication " << endl;
		cout << "\t\t" << "4.division " << endl;
		cout << "\t\t" << "5.sin " << endl;
		cout << "\t\t" << "0.exit " << endl;
		cout << "\t\t" << "enter your choice: ";
		cin >> input;

		if (input == 0) {
			beta = false;
		}
		else {
			cout << "\t\t" << " enter first number: ";
			cin >> num1;
			cout << "\t\t" << " enter second number: ";
			cin >> num2;
			calculateFunctions(calculator, input, num1, num2);
		}


	}
	return 0;
}