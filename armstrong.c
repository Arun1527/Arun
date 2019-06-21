#include<stdio.h>
#include<math.h>
int main()
{

int num,digit,result,power,nod,sum,ctr;
int safe;
scanf("%d",&num);
for(power=1,nod=0;num/power;nod ++,power*=10)
safe=num;
sum=0;
while(num)
{
	digit=num%10;
	for(ctr=0,result=1;ctr<nod;ctr++)
	result=result*digit;
	sum=sum+result;
	num=num/10;
}
if (sum==safe)
printf("armstrong");
else
printf("not armstrong");
return 0;
}
