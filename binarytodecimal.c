#include<stdio.h>
main()
{
int num,temp,rem,base=1,binary=0;
printf("enter the input");
scanf("%d",&num);
temp=num;
while(temp>0)
{
rem=temp%2;
binary=binary+rem*base;
temp=temp/2;
base=base*10;
}
printf("%d,%d",num,binary);
}
