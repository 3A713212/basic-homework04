#include<stdio.h>
#include<stdlib.h>
int main()
{ 
int s;
printf("��J���: ");
scanf("%d",&s);
int m=s%3600/60;
int h=s/3600;
int n=s%3600%60;

printf("%d��%d��%d��\n",h,m,n);


system("PAUSE");
return 0;
}






