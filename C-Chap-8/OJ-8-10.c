//
// Created by Dongliu_Wen on 2022/12/1.
//
/*
 * �ϲ��ַ���
������������
��дһ������void  str_bin(char str1[ ], char str2[ ])�� str1��str2�����������ַ����������ַ���ASCII���С�������򣩣���str2�ϲ����ַ���str1�У�Ҫ��ϲ�����ַ�����������ģ������ַ��ظ�����main�����в��Ըú������Ӽ����������������ַ�����Ȼ����øú������������ϲ���Ľ����
��������ʽ��
���дӼ����������������ַ�����������100���ַ���
�������ʽ��
����ϲ���������ַ���
������������

aceg
bdfh
�����������

abcdefgh
������˵����
�������������ַ���aceg��bdfh������ϲ���������ַ���abcdefgh
 */

#include <stdio.h>

void  str_bin(char str1[], char str2[]);
int main(void)
{
    char str1[101] = {'\0'};
    char str2[101] = {'\0'};
    scanf("%s%s",str1,str2);
    str_bin(str1,str2);

    return 0;
}

void  str_bin(char str1[], char str2[])
{
    int str1Size;
    int j = 0;
    str1Size = 0;
    while(str1[str1Size] != '\0')
    {
        str1Size++;
    }
    while(str2[j] != '\0')
    {
        str1[str1Size] = str2[j];
        str1Size++;
        j++;
    }

    for (int i = 0; i < str1Size; ++i)
    {
        char temp;
        for (int k = i + 1; k < str1Size; ++k)
        {
            if(str1[i] > str1[k])
            {
                temp = str1[k];
                str1[k] = str1[i];
                str1[i] = temp;
            }
        }
    }

    puts(str1);
}
