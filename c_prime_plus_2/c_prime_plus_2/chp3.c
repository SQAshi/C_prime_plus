// Listing 3.1
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int L1(void)
{
	float weight;
	float value;

	printf("Are you worth your weight in platnium?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds:");

	scanf("%f", &weight);
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platnium is worth $%.2f.\n", value);
	printf("You are easily worth that! If platnium prices drop.\n");
	printf("eat more to maintain your value.\n");
	//getchar();
	//getchar();

	return 0;

}

int L2(void)
{
	int ten = 10;
	int two = 2;

	printf("Doing it right: ");
	printf("%d minus %d is %d\n", ten, 2, ten - two);
	printf("Doit it wrong: ");
	printf("%d minus %d is %d\n", ten);
	
	return 0;
}

int L3(void)
{
	int x = 100;
	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
	printf("dec = %d; octal = %#o; hex= %#x\n", x, x, x);

	return 0;
}

int L4(void)
{
	/*toobig.c-exceeds maximum int size on the system*/
	int i = 2147483647;
	unsigned int j = 4294967295;

	printf("%d %d %d\n", i, i + 1, i + 2);
	printf("%u %u %u\n", j, j + 1, j + 2);

	return 0;
}

int L5(void)
{
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;

	char h ='\x48';
	char g = 47;

	printf("un = %u and not %d\n", un, un);
	printf("end = %hd and %d\n", end, end);
	printf("big = %ld and not %hd\n", big, big);
	printf("verybig = %lld and not %ld\n", verybig, verybig);

	printf("h is %c, g is %c\n", h,65);

	return 0;

}

int L6(void)
{
	char ch;

	printf("Please enter a character.\n");
	scanf("%c", &ch);
	printf("The code for %c is %d.\n", ch, ch);

	return 0;
}

int L7(void)
{
	int32_t me32;
	
	me32 = 45933945;
	printf("First, assume int32_t is int: ");
	printf("me32 = %d\n", me32);
	printf("Next, let's not make any assumptions.\n");
	printf("Instead, use a \"macro\" from inttype.h: ");
	printf("me32 = %" PRId32"\n", me32);

	return 0;

}

int L8(void)
{
	float aboat = 32000.0;
	double abet = 2.14e19;
	long double dip = 5.32e-5;
	float toobig = 3.4E38*100.0f;


	printf("%f can be written %e\n", aboat, aboat);
	printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
	printf("%f can be written %e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip);
	printf("%f can be written %e\n", dip, dip);
	printf("%e\n", toobig);

	return 0;
}

int L9(void)
{
	float a, b;
	
	b = 2.0e20 + 1.0;
	a = b - 2.0e20;
	printf("%f \n", a);
	return 0;
}

int L10(void)
{
	printf("Type int has a size of %zd bytes.\n", sizeof(int));
	printf("Type char has a size of %zd bytes.\n", sizeof(char));
	printf("Type long has a size of %zd bytes.\n", sizeof(long));
	printf("Type long long has a size of %zd bytes.\n", 
		sizeof(long long));
	printf("Type double has a size of %zd byte.\n",
		sizeof(double));
	printf("type long double has a size of %zd bytes.\n",
		sizeof(long double));
	printf("type float has a size of %zd", sizeof(float));

	return 0;
}

int L11(void)
{
	float salary;

	printf("Enter your desired monthly salary:");
	printf("  $ _______\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year", salary, salary*12.0);
	printf("\rGee!\n");

	return 0;
}

int PE2(void)
{
	int num;
	printf("Please enter a ASCII code: ");
	scanf("%d", &num);
	printf("The ascii character is %c", num);
	return 0;
}

int PE3(void)
{
	printf("Startled by the sudden sound, Sally shouted,\n");
	printf("\"by the Gread Pumpkin, what was that!\"");
	return 0;
}

int PE4(void)
{
	double num;

	printf("Please enter a number: ");
	scanf("%lf", &num);
	printf("fixed-point notation: %.6lf\n", num);
	printf("exponential notation: %.6e\n", num);
	printf(" p notation: %.2a", num);
	return 0;

}

int PE5(void)
{
	float age;
	double seconds;

	printf("Please enter your age.");
	scanf("%f", &age);
	seconds = age * 3.156e7;
	printf("The number of seconds is %le", seconds);
	return 0;
}

int PE6(void)
{
	double water_q;
	double num_mol;

	printf("Please enter the amount of water(quarts as unit):");
	scanf("%lf", &water_q);
	num_mol = water_q * 950.0 / 3.0e-23;
	printf("the number of molecule is %le", num_mol);
	return 0;

}

int PE7(void)
{ 
	float pint, cup, ounce, tables, teas;

	printf("please enter the number of volumn in cups: ");
	scanf("%f", &cup);
	printf("Volumn in pint is %.2f\n", cup / 2);
	printf("Volumn in ounces is %.2f\n", cup * 8);
	printf("Volumn in tablespoon is %.2f\n", cup * 16);
	printf("Volumn in teaspoon is %.2f\n", cup * 48);

	return 0;
}
