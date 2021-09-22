/*1. WAP to input an array of N number of elements and display it.*/
#include<stdio.h>
void main()
{
int i,n,a[100];
printf("Enter a number of elements");
scanf("%d",&n);
for(i=0; i<n; i++)
{
printf("Enter the value at index %d",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("   %d  ",a[i]);
}
}