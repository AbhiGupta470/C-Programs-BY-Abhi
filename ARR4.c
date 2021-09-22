/*4. WAP to input an array of N number of elements and count total number of positives, negatives
and zero elements in that array and display those counts.*/
#include<stdio.h>
void main()
{
int a[100],i,n,positive=0,negative=0,zero=0;
printf("Enter the number of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter an element at index %d",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>0)
positive++;
else if(a[i]<0)
negative++;
else
zero++;
}
printf("Positive elements are %d\n",positive);
printf("Negative elements are %d\n",negative);
printf("Zero elements are %d",zero);
}