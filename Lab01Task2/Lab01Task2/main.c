/*
- Programmer: Logan Meyers
- Class: CptS 121 Lab #12
- Assignment: Lab 1 Task 2
- Date: 09/03/2026
- Decription: Fun with numbers!
*/

#define _CRT_SECURE_NO_WARNINGS  // necessary to ignore scanf_s () warnings

#include <stdio.h>  // necessary to use printf() and scanf()

#define PI 3.14159

int main(void) {  // the starting point of all C programs

	// ---------- Task A ----------
	printf("---------- Task A - fun with numbers! ----------\n\n");  // custom print for some cleanliness

	// requesting memory for variables; variable declarations & instantiations
	int number1_int = 0, number2_int = 0;  // 2 integer variables set to 0 initially
	double number1_float = 0.0, number2_float = 0.0;  // 2 high precision (floating-point) variables set to 0.0 initially

	printf("Enter two integer values: ");  // prompt the user for inputs
	scanf("%d%d", &number1_int, &number2_int);  // read numbers typed by user into variables. Using %d for integers

	printf("Enter two floating-point values: ");  // prompt user for more inputs
	scanf("%lf%lf", &number1_float, &number2_float);  // read numbers types by user into the two variables. Using %lf for long-floats, i.e. doubles like above

	// all code for next tasks below:
	printf("\nInteger addition between the two ints: %d\n", number1_int + number2_int);
	printf("Floating point subtraction between two doubles: %lf\n", number1_float - number2_float);
	printf("Int multiplication between first int and first float: %d\n", (int)(number1_int * number1_float));  // casting to avoid weird output from incorrect conversion
	printf("Float output of int devision of two ints: %lf\n", number1_int / number2_int);
	printf("First int divided by second float as int: %d ... vs as float: %lf\n", (int)(number1_int / number2_float), number1_int / number2_float);  // same cast here
	printf("first int as float divided by second int printed as float: %lf\n", (double)number1_int / number2_int);
	printf("first float mod'd by second float: %d\n", (int)number1_float % (int)number2_float);  // have to cast the floats as ints to truncate and allow for the mod operator to happen
	printf("Is first int even? 0 for even, 1 for odd: %d\n", number1_int % 2);
	printf("Is second int even? 0 for even, 1 for odd: %d\n", number2_int % 2);

	// ---------- Task B - Ohm's Law ----------
	printf("\n---------- Task B - Ohm's Law ----------\n\n");

	// first, declare variables
	int i = 0, r = 0;

	printf("Please enter an int value for the current (I): ");
	scanf("%d", &i);

	printf("Please enter an int value for the resistance (R): ");
	scanf("%d", &r);

	printf("\nYour result is: V = IR = %d%d = %d\n\n", i, r, i * r);

	// ---------- Task C - Joule's Law ----------
	printf("\n---------- Task C - Joule's Law ----------\n\n");

	// first, declare variables
	int v = 0;
	// reset r variable to 0
	r = 0;

	printf("Please enter an int value for the voltage (V): ");
	scanf("%d", &v);

	printf("Please enter an int value for the resistance (R): ");
	scanf("%d", &r);
	
	// yes, there is a loss of precision, since we're only doing integer operations and losing that decimal precision
	printf("\nYour result is: P = (V^2) / R = (%d^2) / %d = %d / %d = %d\n\n", v, r, v * v, r, (v * v) / r);

	// ---------- Task D - Third Order Polynomial ----------
	printf("\n---------- Task D - Third Order Polynomial ----------\n\n");

	printf("Your polynomial looks like this: y = 3ax^3 + (1/4)bx^2 + 10cx + -5d\n");

	// declare variables
	int y = 0, x = 0, a = 0, b = 0, c = 0, d = 0;

	printf("\nPlease enter integer values for the variables x, a, b, c, and d in that order:\n> ");
	scanf("%d%d%d%d%d", &x, &a, &b, &c, &d);

	// do operations and assign the result to y
	y = 3 * a * (x * x * x) + (1.0 / 4.0) * b * (x * x) + 10 * c * x + -5 * d;  // yes we ultimately have a loss in precision

	printf("Your output is the following: y = %d\n", y);

	// ---------- Task E - Circumference Calculator ----------
	printf("\n---------- Task E - Circumference Calculator ----------\n\n");

	double radius = 0.0;

	printf("Please enter a floating-point value for the circle's radius: ");
	scanf("%lf", &radius);

	printf("\nYour circumference is: 2 * PI * radius = 2 * %lf * %lf = %lf\n", PI, radius, 2 * PI * radius);

	return 0;  // indicate success (return value 0) for our program
}  // end of the main() function
