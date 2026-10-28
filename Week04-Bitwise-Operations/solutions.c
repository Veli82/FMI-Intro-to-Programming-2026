#define _CRT_SECURE_NO_WARNINGS	


#include <stdio.h>
#include <math.h>


int main() {

	int a = 5;
	int b = 3;

	printf("%d\n", a & b);	//AND
	printf("%d\n", a | b);	//OR
	printf("%d\n", ~a);		//NOT
	printf("%d\n", a ^ b);	//XOR

	printf("%d\n", a << 1);	//LEFT SHIFT
	printf("%d\n", a >> 1);	//RIGHT SHIFT

	//-a = ~a + 1


	//task 3
	int n = 0;
	scanf("%d", &n);
	unsigned long long res = 1 << n;
	printf("%d\n", res);

    
	//task 4
	{
		unsigned int n, num;
		scanf("%u %u", &n, &num);

		unsigned res1 = num & 1;
		unsigned res2 = (num >> 31) & 1;
		unsigned res3 = (num >> n) & 1;
		printf("%d %d %d \n", res1, res2, res3);
	}

}