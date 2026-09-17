/*
- Programmer: Logan Meyers
- Class: CptS 121 Lab #12
- Assignment: Lab 2 Tasks 1-3
- Date: 09/10/2026
- Decription: Velocity, Perpendicular Bisector, and BMI Calculators!
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>  // again, needed for printf() and scanf()
#include <math.h>   // needed for sqrt() and pow() functions

int main() {

	// ---------- Task 1 - Velocity Calculation ----------
	printf("---------- Task 1 - Velocity Calculation ----------\n\n");

	// declare variables and init them
	double velocity = 0.0, initial = 0.0, distance = 0.0, accel = 0.0;

	printf("Here is the equation we're going to solve: v^2 = u^2 + 2ad\n\n");
	
	// get u
	printf("Please enter in a value for initial velocity (u): ");
	scanf("%lf", &initial);

	// get a
	printf("Please enter in a vlaue for acceleration (a): ");
	scanf("%lf", &accel);

	// get d
	printf("Please enter in a value for distance travelled (d): ");
	scanf("%lf", &distance);

	// calculate result
	velocity = sqrt(initial * initial + 2 * accel * distance);

	// output result
	printf("Your final velocity is: %lf\n\n", velocity);

	// ---------- Task 2 - Perpendicular Bisector ----------

	// declare and init variables
	double x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0;

	// prompt user for first coord
	printf("Please enter the values for your first coordinate (x1, y1): ");
	scanf("%lf%lf", &x1, &y1);

	// prompt user for second coord
	printf("Please enter the values for your second coordinate (x2, y2): ");
	scanf("%lf%lf", &x2, &y2);

	// perform calculations
	double slope = (y2 - y1) / (x2 - x1);
	double midpoint_x = (x2 + x1) / 2;
	double midpoint_y = (y2 + y1) / 2;
	double perp_slope = -(1 / slope);
	double y_intercept = midpoint_y - (perp_slope * midpoint_x);

	// output results
	printf("Your first coordinate was: (%lf, %lf)\n", x1, y1);
	printf("Your second coordinate was: (%lf, %lf)\n\n", x2, y2);
	printf("The perpendicular bisector in the form y = mx + b is:\n");
	printf("  y = %lf * x + %lf\n\n", perp_slope, y_intercept);

	// ---------- Task 3 - BMI Calculator ----------
	printf("---------- Task 3 - BMI Calculator ----------\n\n");

	// declare and init variables
	float weight = 0.0;
	float height_ft = 0.0;

	printf("Please enter your weight in pounds (as a decimal): ");
	scanf("%f", &weight);

	printf("Please enter you height in feet (as a decimal): ");
	scanf("%f", &height_ft);

	// perform calculations
	float height_in = height_ft * 12;
	float bmi = (weight / (height_in * height_in)) * 703;

	// output results
	printf("Here is your BMI: %f", bmi);

	// NOT REQUIRED - ADVANCED: output bmi classification using if-statements
	if (bmi < 18) {
		printf("You are underweight!\n");
	}
	else if (bmi < 25) {
		printf("You are a healthy weight!\n");
	}
	else if (bmi < 30) {
		printf("You are overweight!\n");
	}
	else {
		printf("You are obese!\n");
	}

	return 0;
}
