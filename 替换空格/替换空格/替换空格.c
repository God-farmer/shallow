#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void replaceBlank(char str[], int len)
{
	printf("������ַ���Ϊ��%s\n", str);

	int blankNum = 0;
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			blankNum++;
		}
		i++;
	}
	

	printf("����֮����ַ���Ϊ��%s\n", str);

	int newLen = len + blankNum * 2;

	int newIndex = newLen;
	int oldIndex = len;

	while (oldIndex>=0)
	{
		if (str[oldIndex] != ' ')
		{
			str[newIndex] = str[oldIndex];
			newIndex--;
		}
		else
		{
			str[newIndex--] = '0';
			str[newIndex--] = '2';
			str[newIndex--] = '%';
		}
		oldIndex--;
		if (oldIndex == newIndex)
		{
			break;
		}
	}

	printf("���յõ����ַ���Ϊ��%s\n", str);

}


int main(void)
{
	char str[] = "we are happy!";
	int len = sizeof(str) / sizeof(char);
	replaceBlank(str, len);


	printf("\n");
	system("pause");
	return 0;
}
