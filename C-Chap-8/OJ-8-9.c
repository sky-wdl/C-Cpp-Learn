//
// Created by Dongliu_Wen on 2022/12/1.
//
/*
 * ���ʵ����������С������
������������

���ʵ����������С�����֣�Ҫ���Զ���һ������ void splitfloat(float x, int *intpart, float *fracpart)������ x �Ǳ���ֵ�ʵ����*intpart ��*fracpart �ֱ��ǽ�ʵ �� x ��ֳ���������������С�����֡���д���������������е��ú��� splitfloat()���� ��д��Ӧ���򡣣�����2λС����

��������ʽ��
�������ʽ��
���������롿

3.65
�����������

3 0.65
 */

#include <stdio.h>
#include <math.h>

void splitfloat(float x, int *intpart, float *fracpart);
int main(void)
{
    int intpart = 0;    //������������
    int i;          //ѭ������
    float a;            //�û����������
    float fracpart = 0; //����С������
    char num[8];        //���յ����ַ�����ʽ�����û����������


    /*
     * �����û������룬���浽�ַ�������
     */
    scanf("%s",num);

    /*
     * ���û�������������ϣ����浽��Ӧ�ı�����
     */
    i = 0;
    while(num[i] != 46)
    {
        intpart *= 10;
        intpart += (num[i] - '0');
        ++i;
    }

    ++i;
    float j = 1;
    while(num[i] != '\0')
    {
        fracpart += ((float)(num[i] - '0') * powf(10,-j));
        ++i;
        ++j;
    }

    /*
     * ���û�������ַ���ת���ϳ�Ϊ������ʵ��
     * ���û������Լ�������С�����ֱ������ݸ�����
     */
    a = (float)intpart + fracpart;
    splitfloat(a, &intpart, &fracpart);

    return 0;
}

void splitfloat(float x, int *intpart, float *fracpart)
{
    printf("%d %.2f",*intpart, *fracpart);
}