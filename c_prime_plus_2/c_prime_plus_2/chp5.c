#include <stdio.h>
#define ADJUST 7.31
#define SQUARES 64
typedef double real;


int L5_1(void)
{
	const double SCALE = 0.333;
	double shoe, foot;

	printf("Shoe size(men's)     foot length\n");
	shoe = 3.0;
	while (shoe < 18.5)
	{
		foot = SCALE * shoe + ADJUST;
		printf("%10.1f %15.2f inches\n", shoe, foot);
		shoe = shoe + 1.0;
	}
	printf("If the shoe fits, wear it.\n");
	return 0;
}

int L5_2(void)
{
	int jane, tarzan, cheeta;

	cheeta = tarzan = jane = 68;
	printf("                 cheeta    tarzan   jane\n");
	printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);

	return 0;
}

int L5_3(void)
{
	int num = 1;

	while (num < 12)
	{
		printf(" %4d  %6d\n", num, num*num);
		num = num+1;
	}
	return 0;
}

int L5_5(void)
{
	const double CROP = 2E16;
	double current, total;
	int count = 1;

	printf("square     grains     total     ");
	printf("fraction of \n");
	printf("           added      grains     ");
	printf("world total\n");
	total = current = 1.0;
	printf("%4d %13.2e %12.2e %12.2e\n", count, current,
		total, total / CROP);
	while (count < SQUARES)
	{
		count = count + 1;
		current = 2.0 *current;
		total = total + current;
		printf("%4d %13.2e %12.2e %12.2e\n", count, current,
			total, total / CROP);
	}
	printf("That's all\n");

	return 0;
}

int L5_6(void)
{
	printf("integer division: 5/4 is %d\n", 5 / 4);
	printf("integer division: 6/3 is %d\n", 6 / 3);
	printf("integer division: 7/4 is %d\n", 7 / 4);
	printf("floating division: 7./4. %1.2f \n", 7. / 4.);
	printf("mixed division: 7./4 %1.2f \n", 7. / 4);

	return 0;
}


int L5_8(void)
{
	int n = 0;
	real deal;
	size_t intsize;

	intsize = sizeof(int); //4byte
	deal = 0.05;
	printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n",
		n, sizeof n, intsize); 
	printf("%.2f", deal);

	return 0;
}

int L5_9(void)
{
	int min, sec, left;
	const int SEC_PER_MIN = 60;

	printf("Please enter the number of seconds:\n");
	scanf("%d", &sec);
	while (sec > 0)
	{
		left = sec % SEC_PER_MIN;
		min = sec / SEC_PER_MIN;

		printf("%d seconds is %d minutes and %d seconds\n", sec,min, left);
		printf("Please enter the number of seconds:\n");
		scanf("%d", &sec);
	}
	printf("Done!");
	return 0;

}

int L5_try(void)
{
	int left1, left2, div;

	div = 11 / -5;
	left1 = -11 % 5;
	left2 = 11 % -5;

	printf("%d %d %d", div, left1, left2);
	return 0;
}

int L5_10(void)
{
	int ultra = 0, super = 0;
	while (super < 5)
	{
		super++;
		++ultra;
		printf("super = %d, ultra = %d\n", super, ultra);

	}
	return 0;
}

int L5_11(void)
{
	int a = 1, b = 1;
	int a_post, pre_b;
	a_post = a++;
	pre_b = ++b;
	printf("a  a_post  b  pre_b\n ");
	printf("%1d  %5d  %5d  %5d\n", a, a_post, b, pre_b);
	return 0;
}

int L5_14(void) {
	char ch;
	int i;
	float fl;

	fl = i = ch = 'C';
	printf("ch=%c, i = %d, fl=%2.2f\n", ch, i, fl);
	ch = ch + 1;
	i = fl + 2 * ch;
	fl = 2.0 *ch + i;
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
	ch = 1107; //83
	printf("now ch = %c\n", ch);
	ch = 80.89; //80
	printf("now ch= %c\n", ch);

	return 0;

}

//void L5_15_pound(int n);
void L5_15_pound();
int L5_15(void)
{
	int times = 5;
	char ch = '!';
	float f = 6.0f;

	L5_15_pound(times);
	L5_15_pound(ch);
	L5_15_pound((int)f);

	return 0;
}

void L5_15_pound(int n)
{
	while (n-- > 0)
		printf("#");
	printf("\n");
}

const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;

int L5_16(void)
{
	double distk, distm;
	double rate;
	int min, sec;
	int time;
	double mtime;
	int mmin, msec;

	printf("time in minute:\n");
	scanf("%d", &min);
	printf("time in secs:\n");
	scanf("%d", &sec);
	printf("Enter the kilometer:\n");
	scanf("%lf", &distk);

	time = min *S_PER_M + sec;
	distm = distk*M_PER_K;
	rate = distm / time*S_PER_H;
	mtime = (double)time / distm;
	mmin = (int)mtime / S_PER_M;
	msec = (int)mtime % S_PER_M;
	printf("you ran %1.2f km (%1.2f miles) in %d min, %d sec\n",
		distk, distm, min, sec);
	printf("That pace corresponds to running a mile in %d min", mmin);
	printf("%d sec.\nYour average speed was %1.2f mph.\n", msec, rate);

	return 0;

}