#define _CRT_SECURE_NO_WARNINGS	    //needed to stop the warning from visual studion
//#pragma warning (disable : 4996)		also works to stop it

#include <stdio.h>


int main()
{
	//task1
	printf("Hello World!");


	//task2
	int side1 = 0;
	int side2 = 0;
	scanf("%d %d", &side1, &side2);
	int area = side1 * side2;
	int perimeter = (side1 + side2) * 2;
	printf("Perimeter: %d \n", perimeter); //\n prints a new line
	printf("Area: %d \n", area);


	//task3
	int a = 5;
	int b = 12;

	int c = a;
	a = b;
	b = c;
	/* (Bonus)
	a = a + b;
	b = a - b;
	a = a - b;
	*/
	printf("%d %d \n", a, b);


	//task4
	int num = 0;
	scanf("%d", &num);
	int firstDigit = num % 10;
	num /= 10;
	int secondDigit = num % 10;
	num /= 10;
	printf("%d\n", firstDigit + secondDigit + num);

    
	//task5
	int x = 0;
	int y = 0;
	int z = 0;

	scanf("%d %d %d", &x, &y, &z);
	int result = (x + y > z) && (y + z > x) && (x + z > y);
	printf("%d\n", result);
}