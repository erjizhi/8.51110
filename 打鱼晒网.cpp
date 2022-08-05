#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;

	scanf("%d", &a);
	int b = a % 5;
	if (b <= 3)
		printf("Fashing in day %d", a);
	else
		printf("Drying in day %d", a);

	return 0;
}