#define _CRT_SECURE_NO_WARNINGS	

#include <stdio.h>


void printmyName()
{
	printf("veli");
	return;
	printf("veli");	//this will never be reached
}

int sqr(int x);
int sum(int a, int b);	//forward declaration

int canDrive(int is18, int isSober)
{
	return is18 && isSober;
}


int main()
{
	//printf("in main");
	//printmyName();
	//printf("in main");
	//int sqrof5 = sqr(5);

	int num = 5;
	
	printf(" %d", sqr(num));
	printf(" %d", num);


	return 0;
}


int isUppercase(char c)
{
	return ('A' <= c && 'Z' >= c);
}


int sum(int a, int b)
{
	printf("%d %d", a, b);
	return a + b;
}

int avg(int a, int b, int c)
{
	int sum = a + b + c;
	return sum / 3;
}


int sqr(int x)
{
	return x * x;

}
