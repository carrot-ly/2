//��������һ���ַ���ͳ���ַ������д��ĸ��Сд��ĸ�����ֵĸ���
/*
˼·:
��������ַ����洢���ַ����У��ú�Ը����������Ԫ�ر�����ͨ���Ƚ�ÿ���ַ���ASCII��ֵ���ڵ����䣬���Դ�д��ĸ��Сд��ĸ�����ּ���
��д��ĸ[65,90]		['A','Z']
Сд��ĸ[97,122]	['a','z']
����	[48,57]		['0','9']
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i = 0;
	int A = 0, a = 0, n = 0;
	gets(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A'&&str[i] <= 'Z')A++;
		if (str[i] >= 'a'&&str[i] <= 'z')a++;
		if (str[i] >= '1'&&str[i] <= '9')n++;
		i++;
	}
	printf("��д��ĸ����:\t%d\n", A);
	printf("Сд��ĸ����:\t%d\n", a);
	printf("���ָ���:\t%d\n", n);
	while (1);
	return 0;
}