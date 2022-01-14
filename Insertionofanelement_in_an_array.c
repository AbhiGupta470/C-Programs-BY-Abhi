#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ele;
    scanf("%d",&ele);
    int pos;
    scanf("%d",&pos);
    for(int i=size;i>pos-1;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = ele;
    for(int i=0;i<size+1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
