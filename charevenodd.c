#include <stdio.h>
static const char *strings[] = {"one","two","three","four","five","six","seven","eight","nine"};
int main() 
{
    int a,b,i;
    scanf("%d\n%d", &a, &b);
    for(i=a;i<b;i++)
    {
        if((i>=1&&i<=9)&&(b>=1&&b<=9))
        {
            printf("%s\n",strings[i-1]);
            printf("%s\n",strings[b-1]);
        }
        
        else {
          return 1;
        }
        (a%2==0)?printf("even\n"):printf("odd\n");
        (b%2==0)?printf("even\n"):printf("odd");
     return 0;   
    }
    return 0;
}
