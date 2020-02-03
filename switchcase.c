main()
{
int opt,num,temp,rem=0,count=0,rev=0,binary=0,base=0;
printf("select the option");
printf("1.reverse number\n2.count no.of digits\n3.binary to decimal\n4.polyndrome\n");
scanf("%d",&opt);
printf("enter the number");
scanf("%d",&num);
temp=num;
switch(opt)
{
temp=num,rem=0,rev=0;
case 1:while(temp>0)
{
rem=temp%10;
rev=rev*10+rem;
temp=temp/10;
}
printf("%d",rev);
break;
case 2:temp=num,count=0;
printf("count number of digits");
if(temp==0)
count++;
else
{
while(temp>0)
{
temp=temp/10;
count++;
}
}
printf("%d",count);
break;
case 3:temp=num,rem=0,binary=0,base=1;
printf("binary to decimal");
while(temp>0)
{
rem=temp%2;
binary=binary+rem*base;
temp=temp%2;
base=base*10;
}
printf("%d,%d",num,binary);
break;
case 4:temp=num,rem=0,rev=0;
printf("polyndrome");
while(temp>0)
{
rem=temp%10;
rev=rev*10+rem;
temp=temp/10;
}
if(rev==num)
printf("it is polyndrome");
else
printf("it is not a polyndrome");
break;
defaultcase:printf("invalid option\nrerun the application with valid option(1,2,3,4)");
}
}
