/*3. WAP to input an array of N number of elements and find the sum and average of all the
elements of that array.*/
#include<stdio.h>
void main()
{
int n,a[100],i;
float  sum=0,avg;
printf("Enter the number of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the value at index %d\t",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
sum=sum+a[i];
avg=sum/n;
printf("Sum is %f\n",sum);
printf("Average is %f",avg);
}
