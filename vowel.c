#include<stdio.h>
main()
{
char ch;
printf("enter alphabet:");
scanf("%c",&ch);
switch (tolower(ch))
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("alphabet is an vowel:");
break;
default:printf("alphabet is an consonant:");
}
return 0;
}

