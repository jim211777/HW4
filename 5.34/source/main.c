#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int a, b,c;	
	printf( "請輸入底數與指數:" );
	scanf_s("%d%d",&a,&b);
	c = pow(a, b);
	printf ("%d",c);
	system("pause");
	return 0;
}
