#include<stdio.h>
#include<string.h>
int main()
{
	char name[10000];
	int i, A = 0, a = 0;
	scanf_s("%s", &name);
	for (i = 0; i < strlen(name); i++)
	{
		if (name[i] >= 65 && name[i] <= 90)
		{
			A = 1;
		}
		else if (name[i] >= 97 && name[i] <= 122)
		{
			a = 1;
		}
	}
	if (A == 1 && a == 1)
	{
		printf("Mix");
	}
	else if (A == 1)
	{
		printf("All Capital Letter");
	}
	else if (a == 1)
	{
		printf("All Small Letter");
	}
	return 0;
}