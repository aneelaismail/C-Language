#include<stdio.h>
int main(){
int d=0;
int a[5]={1,2,3,4,5};
int b[5]={1,2,3,4,5};
int c[10];
for (int i=0;i<5;i++)
{
	c[i]=a[i];
	printf("%d\n",c[i]);
}
for (int j=5;j<=9;j++)
{
	c[j]=b[d];
	
	d++;
	printf("%d\n",c[j]);
}
}
