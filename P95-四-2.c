#include <stdio.h>
int main()
{
	int n;
	float sum;
	for(sum=0,n=1;1.0/n>0.00984;n++)
	{
		sum+=1.0/n;
	}
	printf("累加值=%f 循环次数=%d\n",sum,n); 
	
	n=1,sum=0;
	while(1.0/n>0.00984)			//不满足小于0.00984则结束循环； 
	{
		sum+=1.0/n;
		n++;
	}
		printf("累加值=%f 循环次数=%d\n",sum,n); 
}
