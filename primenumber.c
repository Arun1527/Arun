#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,num,count=0,flag=0;
	scanf("%d",&num);
	count=0;
	for (n=2;count<num;n++)
	{
		flag=0;
		for( int i=2;i<=sqrt(n);i++)
		{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(n==1)
	{
		printf("1 is neither prime r composite num");
	}
	else
	{
		if(flag==0)
		{
//		printf("%d is a prime\n",n);
		count++;
	}
//		else
//		printf("%d is not a prime\n",n);
	}
	
}
printf("%d is the prime no.",n-1);
	return 0;
}
