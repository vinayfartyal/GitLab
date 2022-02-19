#include<stdio.h>
int main()
{
    int heights[] = {5,1,2,3,4};
    int length=sizeof(heights)/sizeof(int);
    int expected[length],count=0;
    for(int i=0;i<length;i++)
    {
            expected[i]=heights[i];
    }
    int min=0,temp=0,c=0;
    for(int i=0;i<length;i++)
    {
        min= expected[i];
        for(int j=i+1;j<length;j++)
        {
             if(min> expected[j])
             {
                temp= expected[j];
                expected[j]=min;
                min=temp;
            }
        }
         expected[i]=min;
    }
    for(int i=0;i<length;i++)
    {
        if(heights[i]!=expected[i])
        {
            count++;
        }
    }
    printf("Count=%d",count);
    return 0;
}
