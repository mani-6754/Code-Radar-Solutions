int printPrimesInRange(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        int f=1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0 ||i==1)
            {
                f=0;
                break;
            }
        }
        if(f==1)
        {
            printf("%d ",i);
        }
    }
}