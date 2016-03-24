#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
#define IN_WORD 1
#define OUT_WORD 0
#define MAXLEN 10


void L1_1()
{
	printf("hello, world \n");
	getchar();
}

/*print Fahrenheit-Celsius table for 
fahr = 0, 20, ....,300*/
void L1_2(void)
{
	int fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		//printf("%3d %6d\n", fahr, celsius);
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}

}

void L1_2_2(void)
{
	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;

	fahr = (float)lower;
	printf("Fahrenheit  celsius\n");
	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr - 32.0);
		//printf("%3d %6d\n", fahr, celsius);
		printf("%6.0f %9.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

}

void L1_3(void)
{
	int fahr;

	//for (fahr = 0; fahr <= 300; fahr = fahr + 20)
	for (fahr = LOWER; fahr <= UPPER; fahr =fahr +STEP)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));
}

void L1_3_1(void)
{
	int fahr;
	
	for (fahr = 300; fahr>=0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));
}

void L1_4(void)
{
	int c;
	//c = getchar();
	printf("The value of EOF is %d\n\n", EOF);
	while ((c=getchar()) != EOF) {
		putchar(c);
		//c = getchar();
	}

}

void L1_5(void) {
	long nc = 0;
	while (getchar() != '\n')
		++nc;
	printf("%ld\n", nc);
}

void L1_5_2(void) {
	double nc;
	for (nc = 0; getchar() != '\n'; ++nc)
		;
	printf("%.0f", nc);

}

void L1_6(void) {
	double nl=0;
	int c;
	while ((c=getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%.0f", nl);
}

void Ex1_10(void) {
	int c;
	while ((c = getchar()) != '\n') {
		if (c == '\t' || c == '\b')
			c = '\\'; 
		putchar(c);
	}		

}

void Ex1_9(void) {
	int c;
	int inspace;
	while ((c = getchar()) != '\n') {
		if (c == ' ') {
			if (inspace = 0) {
				inspace = 1;
				putchar(c);
			}
		}
		if (c != ' ')
		{
			inspace = 0;
			putchar(c);
		}

	}

}

void L1_7(void)
{
	int c, nl, nw, nc, state;
	
	state = OUT_WORD;
	nl = nw = nc = 0;
	while ((c = getchar()) != '\\')
	{
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT_WORD;
		else if (state == OUT_WORD)
		{

			state = IN_WORD;
			++nw;
		}			
	}
	printf("%d %d %d\n", nl, nw, nc);
}

void Ex1_12(void)
{
	int c;
	int state;
	state = OUT_WORD;
	while ((c = getchar()) != '\\')
	{
		if (state == IN_WORD && (c == ' ' || c == '\t'))
		{
			putchar('\n');
			state = OUT_WORD;
		}
				
		else if (c == ' ' || c == '\t')
			;
		else
		{
			putchar(c);
			state = IN_WORD;
		}
			
	}
}

int  L1_8(void)
{
	int c, i, nwhite, nother,a;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != '\\') 
	{

		if (c >= '0' && c <= '9')
		{
			a = c - '0';
			++ndigit[c - '0'];
			//++ndigit[(int)c];
		}
			
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	}
	printf("digit=");
	for (i = 0; i < 10; i++)
		printf("%i=%d,", i,ndigit[i]);
	printf(",white space = %d, other = %d\n", nwhite, nother);

	return 0;
}


long L1_9(int m, int n)
{
	long c=1;
	int i;

	for (i = 0; i < n; i++)
			c *= m;

	return c;
}