#define _CRT_SECURE_NO_WARNINGS	

#include <stdio.h>


int main() {

//---IF-ELSE---

    //task 1
    int num = 0;
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
	

    //task3
	int year = 0;
	scanf("%d", &year);
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				printf("Leap");
			}
			else
			{
				printf("Not leap");
			}
		}
		else
		{
			printf("Leap");
		}
	}
	else
	{
		printf("Not leap");
	}


    //this also works since we have one line only on every if-else
    // if (year % 4 == 0)
    //     if (year % 100 == 0)
    //         if (year % 400 == 0)
    //             printf("Leap");
    //         else
    //             printf("Not leap");
    //     else
    //         printf("Leap");
    // else
    //     printf("Not leap");
    

	char letter;
    scanf("%c", &letter);
	if (letter >= 'a' && letter <= 'z')
	{
		printf("lowercase");
	}
	else if (letter >= 'A' && letter <= 'Z')
	{
		printf("uppercase");
	}
	else
	{
		printf("not a letter");
	}

    //---LOOPS---

    //task 1
{	
    int n = 0;
	scanf("%d", &n);
	int res = 1;
	for (int i = 2; i <= n; i++)
	{
		res *= i;
	}
	printf("%d", res);
}
    //task 1
{	
    int n = 0;
	scanf("%d", &n);
	int res = 1;
	for (int i = n; i > 0; i--)
	{
        res *= i;
	}
    printf("%d", res);
}

    //task 4
	int n = 0;
	scanf("%d", &n);
	int counter = 0;
	while (n > 0)
	{
		n /= 10;
		counter++;
	}

	printf("%d", counter);
}