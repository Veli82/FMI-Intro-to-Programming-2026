#define _CRT_SECURE_NO_WARNINGS	


#include <stdio.h>
#include <math.h>


int main() {

	//task 6
	int x = 0;
	int y = 0;
	int r = 0;
	scanf("%d %d %d", &x, &y, &r);
	int distance = sqrt(pow(x, 2) + pow(y, 2));
	int result = distance <= r;
	printf("%d", result);
	

	//task7.1
	float y = 0;
	float x = 0;
	scanf("%f %f", &x, &y);
	int result = x >= -1 && x <= 1 && y >= -1 && y <= 1;
	printf("%d", result);


	//task7.4 
	float y = 0;
	float x = 0;
	scanf("%f %f", &x, &y);
	int inR0 = sqrt(x * x + y * y) <= 2;	//same as sqrt(pow(x,2) + pow(y,2)) <= 2
	int inR2 = sqrt(pow(x - 1, 2) + pow(y, 2)) < 1;
	int inR1 = sqrt(pow(x + 1, 2) + y * y) < 1;
	int result = inR0 && (y >= 0 && !inR2) || inR1;
	printf("%d", result);


	//const variables
	const number = 10;
	//number = 15;	//error


	//floating point comparison
	float a = 0.1 + 0.2;
	float b = 0.3;
	printf("%f", a == b);	//you would expect it to be 1, but it's 0 because of floating point rounding error
	//printf("%.20f", a);
	float eps = 0.000001;
	printf("%d", fabs(a - b) < eps);	//do this instead

	//useful constants
	float inf = INFINITY;
	float nan = NAN;
	int num = _CRT_INT_MAX;

	double a = 0.0;
	double b = 0.0;
	printf("%lf", a / b);			//NAN
	printf("%lf", 5 * INFINITY);	//INF	
	printf("%lf", 1 / INFINITY);	//0
	printf("%lf", 5 == NAN);		//0	(NAN gives 0 on every comparison)


	//beggining of task 8
	float y = 0;
	float x = 0;
	scanf("%f %f", &x, &y);
	float r1 = sqrt(pow(1, 2) + pow(6, 2));
	float r2 = 1.0;
	float distR1 = sqrt(pow(x + 4, 2) + pow(y + 1, 2));
	float distR2 = sqrt(pow(x + 3, 2) + pow(y + 5, 2));
	int inR1 = distR1 <= r1;
	int inR2 = distR2 <= r2;
	int res = inR1 && !inR2 /* && ...*/;


	return 0;
}

