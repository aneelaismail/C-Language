#include<stdio.h>
int main(){
int d=0;
int a[5]={1,2,3,4,5};
int b[5]={1,2,3,4,5};
int c[10];
for (int i=0;i<5;i++)
{
	c[i]=a[i];

}
for (int j=5;j<=9;j++)
{
	c[j]=b[d];
	
	d++;

}
for (int k=0;k<=9;k++)
printf("%d\n",c[k]);
}
