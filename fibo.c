#include <stdio.h>
int main()
{
    int i,n,t1=0,t2=1,c;

     scanf("%d",&n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ",t1);
        c=t1+t2;
        t1=t2;
        t2=c;
    }
    return 0;
}
