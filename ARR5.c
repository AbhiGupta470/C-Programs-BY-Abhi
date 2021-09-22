/*5. WAP to input an array of N number of elements and store all even numbers in 1 array and all
odd numbers in another array. Print both the even and odd array separately.*/
#include<stdio.h>
void main()
{
int n,i,j=0,k=0,a[100],E[100],O[100];
printf("Enter the number of elements to be stored in an array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the value at index %d",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
E[j]=a[i];
j++;
}
else
{
O[k]=a[i];
k++;
}
}
printf("Even elements are :");
for(i=0;i<j;i++)
{
printf("  %d ",E[i]);
}
printf("\nOdd elements are :");
for(i=0;i<k;i++)
{
printf(" %d",O[i]);
}
}