/*2. WAP to input an array of N number of elements and display it in reverse order.*/
#include<stdio.h>
void main()
{
int n,a[100],i;
printf("Enter the number of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the value at index %d",i);
scanf("%d",&a[i]);
}
for(i=n-1;i>=0;i--)
{
printf("     %d    ",a[i]);
}
}