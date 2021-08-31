#include <stdio.h>

void Rectangle(int a)
{
	for (int i = 0; i < a; i++)
	{
		printf("%s", "*");
	}
	printf("\n");
	for (int i = 0; i < a - 2; i++)
		printf("%s%*s\n", "*", a - 1, "*");
	for (int i = 0; i < a; i++)
		printf("%s", "*");
}


int main()
{
	int a;
	printf("side = ");
	scanf_s("%d", &a);
	Rectangle(a);
	return 0;

}