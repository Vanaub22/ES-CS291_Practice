#include <stdio.h>
int main ()
{
int num,r,sum,temp;
int stno,enno;

printf("Starting Number of Range: ");
scanf("%d", &stno);
printf("Ending Number of Range: ");
scanf("%d", &enno);

printf("Armstrong Numbers in given range are: ");
for (num=stno; num<=enno;num++)
{
temp=num;
sum=0;
while (temp!=0)
{
r=temp%10;
temp=temp/10;
sum=sum+(r*r*r);
}
if (sum==num)
{
printf("%d\n",sum);
}
}
printf ("\n");
return 0;
}
