#include<stdio.h>
float main()
{
	float a, b, c;
	scanf_s("%f %f %f", &a, &b, &c);
	if (a > b && a > c)
		printf("max=%f\n", a);
	else if (b > a && b > c)
		printf("max=%f\n", b);
	else (c > a && c > b);
		printf("max=%f\n", c);
		return 0;
}