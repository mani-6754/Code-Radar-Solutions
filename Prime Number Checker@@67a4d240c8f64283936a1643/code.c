int isPrime(int n)
{
    // int i,a[i],b,f;
    // scanf("%d",&n);
    // for(i=1;i<=n;i++)
    // {
    //     f=1;
    //     scanf("%d",&a);
    //     a[i]=b;
    //     for(int j=1;j<i;j++)
    //     {
    //         if(a[i]%j==0)
    //         {
    //             f=0;
    //             break;
    //         }
    //     }
    //     if(f==1)
    //     {
    //         printf("%d",a[i]);
    //     }
    // }
    if(n==1||n==0)
    {
        return 0;
    } 
    else if(n==2)
    {
        return 1;
    }
    else{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    }
}