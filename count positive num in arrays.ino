#include<stdio.h>
int main()
{
	int abc[5];
	int positive=0;
	for(int i =0; i<=5 ; i++)
	{	
	  	printf("Enter the value");
	  	scanf("%d",&abc[i]);
		if(abc[5]>0)
		{
		
		positive++;
	
	}
	}
		printf("The positive numbers are %d",positive);
}
