#include<stdio.h>
#define N 5
void main()
{
int marks[N],i;
float sum=0,average;
for(i=0;i<N;i++)
{
printf("Enter the elements at index %d",i);
scanf(%d",&marks[i]);
}
for(i=0;i<N;i++)
sum +=marks[i];
}
average=sum/N;
printf("Sum:- %f ,  Average:-  %f",sum,average);
}