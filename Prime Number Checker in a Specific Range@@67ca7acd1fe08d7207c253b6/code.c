int printPrimesInRange(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        int f=1;
        int c=0;
        if(i==1)
        {
            f==0;
        }
        for(int j=2;j<i;j++)
        {
            if(i%j==0 )
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
        if(c==0)
        {
            printf("No prime numbers");
        }
    }
}