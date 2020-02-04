/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int a,b,c,d;
    scanf("%d""%d",&a,&b);
    scanf("%d""%d",&c,&d);
    add(a,b,c,d);
    sub(a,b,c,d);
    mul(a,b,c,d);
}

void add(int a,int b,int c,int d)
{
    int m,n;
    m=a+c;
    n=b+d;
    printf("\n%d %d",m,n);
}

void sub(int a,int b,int c,int d)
{
    int m,n;
    m=a-c;
    n=b-d;
    printf("\n%d %d",m,n);
}

void mul(int a,int b,int c,int d)
{
    int g,h;
    g=a*c-b*d;
    h=a*d+b*c;
    printf("\n%d %d",g,h);
}

void divi(int a,int b,int c,int d)
{
    int g,h;
    g=a*c-a*d
    h=b*c-b*d;
    i=c*c-c*d
    j=c*d+d*d;
    k=g/i;
    l=h/j;
    printf("\n%d %d",g,h);
}
