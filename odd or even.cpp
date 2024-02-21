#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a;
	int odd=0,even=0;
	a=(int*)malloc(5*sizeof(int));
	for(int i=0;i<5;i++)
	{
		scanf("%d",(a+i));
		if(*(a+i)%2==0)
			even++;
		else
		  odd++;
}
		printf("%d\n",even);
		printf("%d",odd);
}
