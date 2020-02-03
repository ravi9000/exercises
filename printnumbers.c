#include<stdio.h>
main()
{
int x=1;
print:printf("%d",x)
if(x<=10)
x++;
goto print;
}
