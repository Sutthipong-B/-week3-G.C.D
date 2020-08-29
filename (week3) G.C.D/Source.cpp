#include<stdio.h>
int main()
{
	int num1, num2,i=2,sum=1;
	scanf_s("%d %d", &num1, &num2);
	while (i <= num1 || i <= num2)
	{
		while (num1 % i == 0 && num2 % i == 0)
		{ 
			num1 = num1 / i;
			num2 = num2 / i;
			sum = sum * i;
		}
		i++;
	}
	printf("%d", sum);
	return 0;
}