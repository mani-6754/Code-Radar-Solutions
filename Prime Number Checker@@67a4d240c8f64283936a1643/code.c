int isPrime(int n)
{
    int p=1;
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
            p=0;
            break;
        }
    }
    if(p==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    }
}