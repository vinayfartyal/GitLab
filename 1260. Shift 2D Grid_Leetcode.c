#include<stdio.h>
int main()
{
    int grid[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, k = 1,shift=0,i=0,j=0,temp=0;
    /*for(shift=0;shift<k;shift++)
    {
    */
        for(i=2;i>=0;i--)
        {
            temp=grid[2][2];
            for(j=2;j>=0;j--)
            {
                if(i!=2 && j!=2)
                {
                    grid[i][j+1]=grid[i][j];
                }
                if(i==0 && j==0)
                {
                    grid[i][j]=temp;
                }
            }
        }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",grid[i][j]);
        }
        printf("\n");
    }
    return 0;
}
