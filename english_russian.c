//一个旅行社有 72 人，其中会英语的有 48 人，会俄语的有 36 人，两样都不会的有 8 人，两样都会的有
//_______个。
//编程：输入旅行社有72人
//     输入会英语48人
//     输入会俄语36人
//     输入两样都不会有8人
//     输出两样都会的有   人 
//     输出：输入数据错误，无法计算

#include<stdio.h>
int main()
{
	int english, russian, traveler, bothcannot, bothcan;
	printf("���������������\n");
	while((scanf("%d",&traveler))!=1||traveler < 0)
	{
		while(getchar()!='\n')
			continue;
		printf("����������������룡\n");
	}
	printf("�����Ӣ�������\n");
	while((scanf("%d",&english))!=1||english < 0)
	{
		while(getchar()!='\n')
			continue;
		printf("����������������룡\n");
	}
	printf("�������������\n");
	while((scanf("%d",&russian))!=1||russian < 0)
	{
		while(getchar()!='\n')
			continue;
		printf("����������������룡\n");
	}
	printf("�����������Զ����������\n");
	while((scanf("%d",&bothcannot))!=1||bothcannot < 0||bothcannot > traveler)
	{
		while(getchar()!='\n')
			continue;
		printf("����������������룡\n");
	}
	bothcan = (english + russian) - (traveler - bothcannot);
	if(bothcan < 0)
	{
		printf("�������ݴ����޷�����\n");
	}
	else
		printf("�������Զ��������%d��\n",bothcan); 
	return 0;
}
