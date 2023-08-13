#include<stdio.h>
int main()
{
    int sum=0,count=0;
    for(int i=15;i<=75;i++)
    {
        if(i%5==0&&i%8!=0)
        {
            sum=sum+i;
            count++;


        }
    }
    printf("total number=%d\n sum= %d",count,sum);

    return 0;

}
