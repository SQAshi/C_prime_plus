#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
//#include <iso646.h>
#define SPACE ' '
#define PERIOD '.'

int L7_1(void) //write by myself, refer to p275
{
	float temp, freeze_p;
	int freeze_n = 0, total_n = 0;

	printf("Please enter the temp(q to quit): ");
	//for (i = 1; scanf("%f", &temp) == 1; i++)
	while(scanf("%f",&temp)==1)
	{
		//total_n += 1;
		total_n++;
		if (temp < 0)
			//freeze_n += 1;	
			freeze_n++;
	}
	freeze_p = ((float)freeze_n / total_n)*100 ;
	printf("%d entries, %d temp under 0 degree, percentage is %.0f%%", total_n, freeze_n, freeze_p);
	return 0;

}

int L7_2(void)
{
	char ch;
	//ch = getchar();  comment first method
	//while (ch != '\n') 
	while ((ch=getchar()) != '\n') //second method
	{
		if (ch == SPACE)
			putchar(ch);
		else
			putchar(ch + 1);
		//ch = getchar();
	}
	putchar(ch);

	return 0;
}

int L7_3(void)
{
	char ch;
	
	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))
			putchar(ch + 1);
		else
			putchar(ch);
	}
	putchar(ch);
	return 0;
}

int L7_4(void) //differ from example, example is much better p284
{
	double number;
	double charge;
	const double PRICE1 = 0.13230, PRICE2 = 0.15040, PRICE3 = 0.30025, PRICE4 = 0.34025;

	printf("please enter the amount used: ");
	scanf("%lf", &number);
	if (number <= 360)
		charge = (double)number*PRICE1;
	//else if (360<number <= 468) // can not write like this
	else if (number <=468)
		charge = (number - 360)*PRICE2 + 360 * PRICE1;
	//else if (468<number <= 720)
	else if (number <=720)
		charge = 360 * PRICE1 + 108 * PRICE2 + (number - 360 - 108)*PRICE3;
	else
		charge = 360 * PRICE1 + 108 * PRICE2 + 252 * PRICE3 + (number - 360 - 108 - 252)*PRICE4;
	printf("the total charge is $%.2lf", charge);
	return 0;
}

int L7_5(void)
{
	unsigned long num;
	unsigned long i;
	bool isPrime;

	printf("Please enter an integer: ");
	while (scanf("%d", &num))
	{
		for (i = 2, isPrime=true; (i*i) <=num;i++)
			if (num%i == 0)
			{
				if (i*i != num)
					printf("%lu is divisible by %lu and %lu.\n", num, i, num / i);
				else
					printf("%lu is divisible by %lu.\n", num,i);
				isPrime = false;
					
			}
		if (isPrime)
			printf("%lu is prime.\n", num);
		printf("Please enter another number\n");
			
	}
	return 0;
}

int L7_6(void)
{
	char ch;
	int count=0;

	while ((ch = getchar()) != PERIOD)
	{
		//if (ch != '"'and ch != '\'')
		if (ch != '"'&& ch != '\'')
			count++;
	}
	printf("%d the number of characters", count);
	
	return 0;
}

int L7_7(void) //written by me
{
	bool inword;
	int ch, word, line;
}