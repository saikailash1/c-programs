int main()
{
    int a,prime=0;
    printf("\nEnter the number");
    scanf("%d",&a);
    while(a!=-1)
    {
        if(a%2!=0&&a%a==0)
        {
            prime=prime+1;
        }
        scanf("%d",&a);
    }
    printf("\nNumber of primes..%d",prime);
    
    return 0;
}
