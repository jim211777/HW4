#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int funtion(intx, inty);

int main()
{
    int n1, n2, z;

    printf("¿é¤J¨â¼Æ­È\n");
    scanf("%d %d", &n1, &n2);


    printf("LCM of n1 amd n2 is %d", funtion(n1, n2));


}
int funtion(int x, int y)
{

    int i = 2;
    int ans = 1;
    if (x == 1 || y == 1)
    {
        return x * y;
    }
    else if (x >= i && y >= i)
    {

        while (x >= i && y >= i)
        {

            while (x % i == 0 && y % i == 0)
            {
                ans = ans * i;
                x /= i;
                y /= i;
            }
            i++;
        }
        return ans * x * y;
    }
}