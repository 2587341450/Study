#include <stdio.h>
int main()
{
	int n;
	float sum;
	for(sum=0,n=1;1.0/n>0.00984;n++)
	{
		sum+=1.0/n;
	}
	printf("�ۼ�ֵ=%f ѭ������=%d\n",sum,n); 
	
	n=1,sum=0;
	while(1.0/n>0.00984)			//������С��0.00984�����ѭ���� 
	{
		sum+=1.0/n;
		n++;
	}
		printf("�ۼ�ֵ=%f ѭ������=%d\n",sum,n); 
}
