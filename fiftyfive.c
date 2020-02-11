#include <stdio.h>
int func2(int n);
int main()
{
    int k=func2(5);
    printf("%d",k);
    return 0;
}

int func1(int n)
{
    static int i=0;
    if(n>0)
    {
        i++;
        func1(n-1);
    }
    return i;
}

int func2(int n)
{
    static int i=0;
    if(n>0)
    {
        i=i+func1(n);
        func2(n-1);
    }
    return i;
}
