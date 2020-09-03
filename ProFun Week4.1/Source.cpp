#include<stdio.h>
int main()
{
	float a;
	scanf_s("%f",&a);
	if (a < 0) printf("Please insert the number that is greater or equal zero");
	else if (a >= 80) printf("A");
	else if (a >= 70)printf("B");
	else if (a >= 60)printf("C");
	else if (a >= 50) printf("D");
	else printf("F");
	return 0;
}