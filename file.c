#include<stdio.h>
int main() 
{
	int a,n,i,j;int array[100];array[0]=0;int Sn=0;//�����������������array[0]��ֵΪ0 
	scanf("%d,%d",&a,&n);//�Ӽ�������a��n��ֵ 
	if(n)//��n������0ʱִ��������� 
	for(i=1;i<=n;i++)//ʹ��forѭ��Ϊ������array[1]��ʼ�ĸ�Ԫ�ظ�ֵ  
	{
		array[i]=10*array[i-1]+a;
	}
	for(j=1;j<=n;j++)//ʹ��forѭ���ۼ�������Ԫ�ص�ֵ 
	Sn+=array[j];
	printf("%d",Sn);//���Sn��ֵ 
	getchar();
	getchar();
	return 0;
}
