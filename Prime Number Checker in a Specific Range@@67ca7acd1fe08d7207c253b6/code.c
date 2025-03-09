int printPrimesInRange(int a,int b)
{
    if(a<=1)
    {
         int c=0;
    for(int i=1;i<=b;i++)
    {
        int f=1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0||i==1||i<=0)
            {
                f=0;
                break;
            }
        }
        if(f==1)
        {
            printf("%d ",i);
            c+=1;
        }
    }
     if(c==0)
        {
            printf("No prime numbers");
        }
    }
    else
    {
     int c=0;
    for(int i=a;i<=b;i++)
    {
        int f=1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0||i==1||i<=0)
            {
                f=0;
                break;
            }
        }
        if(f==1)
        {
            printf("%d ",i);
            c+=1;
        }
    }
     if(c==0)
        {
            printf("No prime numbers");
        }
    }
}