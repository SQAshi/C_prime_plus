#include <stdio.h>

void smile(void);
void Review_Q(void);
void Review_Q2(void);

void smile(void)
{
	printf("Smile!");
}

#include <stdio.h>

void Review_Q(void)
{
	int a, b;
	a = 5;
	b = 2;
	b = a;
	a = b;
	printf("%d %d\n", b, a);
}

void Review_Q2(void)
{
	int x, y;

	x = 10;
	y = 5;
	y = x + y;
	x = x*y;
	printf("%d %d\n", x, y);

}

int PE_3(void) {
	int age=29;
	printf("your age is %d, and  %d days", age, age * 365);
	return 0;
}


// programming exercise 4
void jelly() {
	printf("For he's a jolly good fellow!\n");
}

void deny() {
	printf("Which nobody can deny!");
}

int PE_4(void) {
	for (int i = 0; i < 3; i++)
		jelly();

	deny();
	return 0;
}

//programming exercise 5
void br(void) {
	printf("Brazil, Russia");
}

void ic(void) {
	printf("India, China");
}

int PE_5(void) {
	br();
	ic();
	printf("\n");
	ic();
	printf(",\n");
	br();
	return 0;
}

int PE_6(void) {
	int toes = 10;
	printf("there are %d toes, its twice is %d, the squared is %d", toes, 2 * toes, toes*toes);
	return 0;
}
