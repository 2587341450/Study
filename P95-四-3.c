#include <stdio.h>
#include <math.h>
int main()
{
	double n,m,sum,x;
	for(n=1.0,m=0,sum=0;1.0/n>0.000001;n+=2,m++)
	{
		x=pow(-1,m);	
		sum+=x*1/n;
	}
	printf("sum=%.17lf\n",sum); 

}
