#include <stdio.h>
#include <math.h>
//#define ROWS 6
//#define CHARS 10
#define SIZE 10
#define PAR 72

int L6_1(void)
{
	long num;
	long sum = 0L;
	int status;

	printf("Please enter an integer to be summed");
	printf("(q to quit):");
	status = scanf("%ld", &num);
	//while (scanf("%ld",&num) == 1)
	while (status == 1)
	{
		sum = sum + num;
		printf("Please enter an integer to be summed");
		printf("(q to quit):");
		status = scanf("%ld", &num);
	}
	printf("Those integers sum to %ld.\n", sum);

	return 0;

}

int L6_2(void)
{
	int n = 0;

	while (n < 7) 
	{
		printf("n is %d\n", n);
		n++;
		printf("now n is %d\n", n);
	}
	printf("the loop is finished.");
}

int L6_5(void)
{
	const double ANSWER = 3.14159;
	double response;

	printf("what is the value of pi\n");
	scanf("%lf", &response);

	while (fabs(response - ANSWER)>0.0001)  //fabs() absolute function
	{
		printf("try again\n");
		scanf("%lf", &response);
	}

	printf("close enough\n");
	return 0;
}

int L6_6(void)
{
	int true_val, false_val;

	true_val = (10 > 2);
	false_val = (10 == 2);
	printf("true = %d, false = %d", true_val, false_val);

	return 0;
}

int L6_7(void)
{
	int n = 3;
	while (n)
		printf("%2d is true\n", n--);
	printf("%2d is false\n", n);

	n = -3;
	while (n)
		printf("%2d is true\n", n++);
	printf("%2d is false\n", n);
}

int L6_9(void)
{
	long num;
	long sum=0L;
	_Bool input_is_good;

	printf("Please enter an integer to be summed;");
printf("(q to quit)");
input_is_good = (scanf("%ld", &num) == 1);
while (input_is_good)
{
	sum = sum + num;
	printf("Please enter an integer:");
	input_is_good = (scanf("%ld", num) == 1);
}
printf("those num summed is %ld\n", sum);
return 0;
}

int L6_10(void)
{
	int num;

	printf("    n    n cubed\n");
	for (num = 1; num <= 6; num++)
		printf("%5d %5d\n", num, num*num*num);
	return 0;
}

int L6_13(void)
{
	const int FIRST_OZ = 46;
	const int NEXT_OZ = 20;
	int ounces, cost;

	printf(" ounces  cost\n");
	for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
		printf("%5d    $%4.2f\n", ounces, cost / 100.0);

	return 0;
}

int L6_14(void)
{
	int t_ct;
	double time, power_of_2;
	int limit;

	printf("Enter the number of terms you want:");
	scanf("%d", &limit);
	for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2.0)
	{
		time += 1.0 / power_of_2;
		printf("time = %f when terms = %d.\n", time, t_ct);
	}
	return 0;
}

int L6_15(void)
{
	const int SECRET_CODE = 13;
	int code_entered;
	do
	{
		printf("To enter the therapy club,\n");
		printf("Please enter your code.");
		scanf("%d", &code_entered);
	} while (code_entered != SECRET_CODE);
	printf("Congratulations!");
	return 0;
}

int L6_17(void)
{
	int row;
	char ch;
	const int ROWS = 6;
	const char CHARS = 6;

	for (row = 0; row <= ROWS; row++)
	{
		for (ch = 'A' + row; ch < ('A' + CHARS); ch++)
			printf("%c", ch);
		printf("\n");
	}
	return 0;
}

int L6_19(void)
{

	int n, score[SIZE];
	int sum = 0;
	float avg;

	for (n = 0; n <SIZE; n++)
		scanf("%d", &score[n]);
	printf("The scores read in are as follows:\n");

	for (n = 0; n < SIZE; n++)
		printf("%5d", score[n]);
	printf("\n");

	for (n = 0; n < SIZE; n++)
		sum += score[n];
	avg = (float)sum / SIZE;
	printf("Sum of scores = %d, average = %.2f\n",sum, avg);
	printf("That's a handicap of %.0f.\n", avg - PAR);

	return 0;

}

double L6_power(double n, int p)
{
	double pow = 1;
	int i;
	for (i = 1; i <= p; i++)
		pow *= n;
	return pow;
}