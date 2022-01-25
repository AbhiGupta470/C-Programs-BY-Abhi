#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int k=0;k<size;k++)
    {
        scanf("%d",&arr[k]);
    }
    int sum;
    scanf("%d",&sum);
    int flag = 0,i,j = 0;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("%d %d",i,j);
                flag = 0;
                break;
            }
            else 
                flag = 1;
        }
        if(flag==0)
        break;
    }
    if(flag==1)
        printf("no pair found");
}
