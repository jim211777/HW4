#include<stdio.h>
#include<stdlib.h>
unsigned long fi();
int main(void)
{
	int i, j;
	printf("輸入的項次:");
	scanf_s("%d", &i);	
	printf("輸入的項值為: %d ", fi(i-1));
	system("pause");
	return 0;
}

unsigned long fi(int n)
{
	int s;
	if (n == 0)
		return 0;

	if (n == 1)
		return 1;
	s = fi(n - 1) + fi(n - 2);
	return  s;
}




		





