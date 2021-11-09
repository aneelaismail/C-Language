#include<stdio.h>
int main()
{
int sum=0;	

int arry [5];
for (int i=0;i<=4;i++)
{

printf("Enter the value ");
scanf("%d",&arry[i]);
sum=sum+arry[i];
}
printf("The sum is %d ",sum);



}
