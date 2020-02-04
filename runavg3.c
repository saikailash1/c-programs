#include <stdio.h>

int main()
{
    int a,b,c;
    float avg;
    printf("\nEnter Numbers: ");
    scanf("%d %d %d",&a &b &c);
    while(a!=-1&&b!=-1&&c=-1)
    {
        avg=(a+b+c)/3;
        a=b;
        b=c;
        c=scanf("%d",&c);
        printf("Average: %f",avg);
    }

    return 0;
}
