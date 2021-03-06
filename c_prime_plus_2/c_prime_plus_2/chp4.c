#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <float.h>
#define DENSITY 62.4
#define PRAISE "You are an extraordinary being."
#define PI 3.141593
#define PAGES 336
#define BLURB "Authentic imitation!"
#define WORDS 65618


int L4_1(void)
{
	float weight, volume;
	int size, letters;
	char name[40];

	printf("Hi! What's your first name.\n");
	scanf("%s", name);
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet\n", name, volume);
	printf("Also, your first name has %d letters,\n",
		letters);
	printf("and we have %d bytes to store it.", size);

	return 0;

}

int L4_2(void)
{
	char name[40];

	printf("What's your name? ");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name of %zd letters occupies %zd memeory cells.\n",
		strlen(name), sizeof(name));
	printf("The phrase of praise has %zd letters",
		strlen(PRAISE));
	printf(" and occupies %zd memory cells.\n", sizeof PRAISE);

	return 0;
}

int L4_3(void)
{
	float area, circum, radius;

	printf("What is the radius of your pizza?\n");
	scanf("%f", &radius);
	circum = PI * radius * 2.0;
	area = PI * radius *radius;
	printf("Your basic pizza parameters are as follow:\n");
	printf("circumference = %1.2f, area = %1.2f\n", circum, area);

	printf("Maximum int value on this system = %d\n", INT_MAX);

	return 0;
	
}

int L4_5(void)
{
	printf("Some number limits for this system:\n");
	printf("Biggest int: %d\n", INT_MAX);
	printf("Smallest long long: %lld\n", LLONG_MIN);
	printf("One byte = %d bits on this system.\n", CHAR_BIT);
	printf("Largest double: %e\n", DBL_MAX);
	printf("Smallest normal float:%e\n", FLT_MIN);
	printf("float precision = %d digits\n", FLT_DIG);
	printf("float epsilon = %e\n", FLT_EPSILON);

	return 0;
}

int L4_6(void)
{
	int number = 7;
	float pies = 12.75;
	int cost = 7800;

	printf("The %d contestants ate %f berry pies.\n", number, pies);
	printf("The value of pi is %f.\n", PI);
	printf("Farewell! thou art too dear for my possessing,\n");
	printf("%c%d\n", '$', 2 * cost);

	return 0;

}

int L4_7(void)
{
	printf("*%+d*\n", PAGES);
	printf("*%02d*\n", PAGES);
	printf("*%10d*\n", PAGES);
	printf("*%-10d*\n", PAGES);

	return 0;
}

int L4_8(void)
{
	const double RENT = 3852.99;

	printf("*%f*\n", RENT);
	printf("*%e\n", RENT);
	printf("*%4.2f*\n", RENT);
	printf("*%3.1f*\n", RENT);
	printf("*%10.3f*\n", RENT);
	printf("*%10.3E*\n", RENT);
	printf("*%+4.2f*\n", RENT);
	printf("*%010.2f*\n", RENT);

	return 0;
}

int L4_10(void)
{

	printf("**%5d**%5.3d**%05d**%05.3d**\n", 1105, 11, 1105, 11);
	printf("[%2s]\n", BLURB);
	printf("[%24s]\n", BLURB);
	printf("[%24.5s]\n", BLURB);
	printf("[%-24.5s]\n", BLURB);

	return 0;
}

int L4_11(void)
{
	short num = PAGES;  //336
	short mnum = -PAGES;  //65618

	printf("num as short, and unsigned short: %hd  %hu\n", num, num);
	printf("-num as short and unsigned short: %hd  %hu\n", mnum, mnum);
	printf("num as int and char: %d  %c\n", num, num);
	printf("WORDS as int, short, and char: %d, %hd, %c\n", WORDS, WORDS);

	return 0;

	
}

int L4_12(void)
{
	float n1 = 3.0;
	double n2 = 3.0;
	long n3 = 2000000000;
	long n4 = 1234567890;

	printf("%.le  %.le  %.le  %.le\n", n1, n2, n3, n4);
	printf("%ld  %ld\n", n3, n4);
	printf("%ld  %ld  %ld  %ld\n", n1, n2, n3, n4);
	return 0;
}

int L4_13(void)
{
	int bph2o = 212;
	int rv;

	rv = printf("%d F is water's boiling point.\n", bph2o);
	printf("The printf() function printed %d characters.\n",
		rv);

	return 0;
}

int L4_15(void)
{
	int age;
	float asset;
	char pet[30];

	printf("Please enter your age, asset and favoriate pet.\n");
	scanf("%d %f", &age, &asset);
	scanf("%s", pet);
	printf("%d $%.2f %s\n", age, asset, pet);
	return 0;

}

int L4_try(void)
{
	char a;

	printf("please:");
	scanf("%c", &a);
	//scanf(" %c", &a);
	printf("%c", a);
	return 0;
}

int L4_16(void)
{
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;

	printf("Enter a field width:\n");
	scanf("%d", &width);
	printf("The number is: %*d\n", width, number);
	printf("Now enter a width and a precision: \n");
	scanf("%d %d", &width, &precision);
	printf("Weight = %*.*f\n", width, precision, weight);
	printf("Done");
	return 0;

}

int L4_17(void)
{
	int n;
	printf("Please enter three ingegers: \n");
	scanf("%*d %*d %d", &n);
	printf("The last integer was %d\n", n);

	return 0;

}

int Ex4_1(void) {
	char last[20], first[20];

	printf("please enter your first name:\n");
	scanf("%s", first);
	printf("please enter your last name:\n");
	scanf("%s", last);
	printf("Hi, your last name is %s, and your first name is %s\n", last, first);

	return 0;
}

int Ex4_2(void) {

	char first[20];

	printf("Please enter your first name:\n");
	scanf("%s", first);
	printf("your name is \"%s\" \n", first);
	printf("name is \"%20s\" \n", first);
	printf("name is \"%-20s\" \n", first);
	printf("name is %*s", strlen(first) + 3, first);

	return 0;
	
}

int Ex4_3(void) {

	float num;

	printf("Please enter a float number:\n");
	scanf("%f", &num);
	printf("the num is %.1f\n", num);
	printf("the num is %.1e\n", num);
	printf("the num is %+.3f\n", num);
	printf("the num is %.3E\n", num);

	return 0;
}

int Ex4_4(void) {

	char name[40];
	float height;

	printf("Please enter your name and height in inches:\n");
	scanf("%s %f", name, &height);
	printf("%s, you are %.3f feet tall", name, height / 12.0);

	return 0;
}

int Ex4_5(void) {

	float file_size, speed, time;

	printf("Please enter the network speed(Mbs): \n");
	scanf("%f", &speed);
	printf("The size of your file:\n");
	scanf("%f", &file_size);
	printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, file_size);
	printf("downloads in %.2f seconds", file_size*8.0 / speed);

	return 0;
}

int Ex4_6(void) {

	char first[40], last[40];

	printf("Please enter your first name:\n");
	scanf("%s", first);
	printf("Please enter your last name:\n");
	scanf("%s", last);
	printf("%s %s\n", first, last);
	printf("%*d %*d\n", 
		strlen(first), strlen(first), strlen(last), strlen(last));
	printf("%s %s\n", first, last);
	printf("%-*d %-*d\n", 
		strlen(first), strlen(first), strlen(last), strlen(last));
	return 0;

}

int Ex4_7(void) {

	double n1 = 1.0 / 3.0;
	float n2 = 1.0 / 3.0;

	printf("%.4f %.12f %.16f \n", n1, n1, n1);
	printf("%.4f %.12f %.16f \n", n2, n2, n2);
	printf("FLT_DIG: %d\n", FLT_DIG);
	printf("DBL_DIG: %d\n", DBL_DIG);
	return 0;


}

int Ex4_8(void) {

	float mile, gallons;
	const float liters = 3.785;
	const float kilometers = 1.609;

	printf("Please enter your miles and gallons of gasoline consumred:\n");
	scanf("%f %f", &mile, &gallons);

	printf("miles per gallon value is %.1f\n", mile / gallons);
	printf("liters per 100 km value is %.1f", gallons*3.785 / (mile*1.609));

}