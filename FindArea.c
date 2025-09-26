/* Documentation Section: Tell about your program
  Program Name: Area of Circle.C
  Date: 3-10-2024
  Author: M.Srinu
  Formula: area = Pi*r*r;
*/
#include<stdio.h>		// Link Section
#define PI 3.142		// Definition Section
void displayArea();     // funtion prototype
float area;    			// Global variable declaration
int main()				// main function section
{
	float r;			// local variable declaration
	scanf("%f",&r);
	displayArea();
	area=PI*r*r;
	displayArea();
	//printf("Area = %.2f",area);
	return 0;
}
//This function displays the area of the Circle.
void displayArea()
{
	printf("Area = %.2f",area);
}









