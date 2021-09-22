#include <stdio.h>

int main()
{
int a,b,c;
printf("ENTER the values of a,b,c");
scanf("%d %d %d",&a,&b,&c);
if(a==b && b==c && a==c)
printf("The triangle formed will be equilateral");
else
printf("The triangle formed will not be equilateral");
return 0;
}
