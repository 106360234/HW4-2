#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int left = 0;
	int SIZE = 10;
	int a[10] = { 2,6,4,8,10,12,89,68,45,37 };
	int pass;
	size_t i;
	int hold;
	int j = 0;
	int k = 0;
	printf("Data items in original order\n");
	
	for (i = 0; i < SIZE; i++)
		printf("%4d", a[i]);
	printf("\n");

	for (pass = 1; pass < SIZE-1; ++pass)
	{
		for (i = left; i < SIZE-1; ++i)
		{
			if (a[i] > a[i + 1])
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
				k++;
			}
			j++;
		}
		
		while (a[SIZE-2] < a[SIZE-1])
			SIZE--;
		while (a[left] < a[left + 1])
			left++;

		for (i = 0; i<10; ++i)
			printf("%4d", a[i]);
		printf("   判斷次數為 %2d\t",j);
		printf("   改變位址次數為 %2d\n", k);

	}
	printf("\nData items in ascending order\n");

	for (i = 0; i < 10; i++)
		printf("%4d", a[i]);
	printf("\n");
	system("pause");
	return 0;
}