#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main()
{char a[100],b;
int i,s=0;
clrscr();
printf("Enter a string: ");
gets(a);
printf("\n Input: ");
scanf("%c",&b);

for(i=0;i<strlen(a);i++)
{if(a[i]==b)
   {s++;}
 if(i==0 || a[i-1]==' ')
   {a[i]=toupper(a[i]);
   }
}
printf("Frequency of %c= %d\n",b,s);
printf("Final string= %s ',a);
printf("%s",rand());
getch();
}
