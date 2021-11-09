
#include<stdio.h>
int main()
{
int count=0;	
int arry [5];
for (int i=0;i<=4;i++)
{
printf("Enter the value ");
scanf("%d",&arry[i]);
if(arry[i]%2!=0)
{
count++;
}
}
printf("The even is %d ",count);
}
