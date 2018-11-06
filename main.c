/* @JUDGE_ID:  841985  10323  C  "Factorial! You Must be Kidding!!!" */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    long long factorial;
    while(scanf("%d", &a) == 1)
    {
        if(a < 0)
        {
            if(a%2==0)
            {
                printf("Underflow!\n");
            }
            else
            {
                printf("Overflow!\n");
            }

        }
        else if(a>13)
        {
            printf("Overflow!\n");
        }
        else if(a == 0 || a<=7)
        {
            printf("Underflow!\n");
        }
        else
        {
            int i;
            factorial = 1;
            for(i=1; i<=a; i++)
            {
                factorial *= i;
            }
            printf("%llu\n", factorial);

        }
    }
    return 0;
}
