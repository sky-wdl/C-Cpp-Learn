//
// Created by Dongliu_Wen on 2023/1/6.
//
/*
 * 字符串加密
【问题描述】Julius Caesar（凯撒）加密方法。该方法在每次加密时都选定一个加密密钥，它是一个1到25之间的数字，用于指定加密字母时的移位个数。例如，如果密钥为3，则将A转换为D，将Z转换为C，依次类推。小写字母亦如此（参见下图），其它字符不变。用该方法对一批加密。提示： % 26。

【要求】在main 函数调用 void  encrpt(char* plaintext，char* ciphertext,int key) 完成编程。其中，plaintext表示明文，ciphertext表示密文。

M





E





e





t





m





e





a





t





















































P





H





h





w





p





h





d





W







【输入形式】

从标准输入中输入一个1到25之间的整数作为密钥key，然后从标准输入n行字符串，包含空格。每个字符串最长不超过80个字符。
【输出形式】

对输入内容按上述方法进行加密后输出。
【样例输入】

3 2

c 12.
WO AI BEIJING TIANANMEN.
【样例输出】加密

f 12.
ZR DL EHLMLQJ WLDQDQPHQ.
【样例说明】
根据输入密钥和转换公式对输入内容进行加密，并将结果输出。
 */

#include <stdio.h>
#include <string.h>

void encrpt(char* plaintext, char* ciphertext,int key);
int main(void)
{
    int key = 0;
    int n;
    char plaintext[81] = {'\0'};
    char ciphertext[81] = {'\0'};

    scanf("%d%d",&key, &n);
    getchar();

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; plaintext[j] != '\0'; ++j)
        {
            plaintext[j] = '\0';
        }

        for (int j = 0; (plaintext[j] = getchar()) != '\n'; ++j)
        {
            ;
        }
        encrpt(plaintext, ciphertext, key);
        puts(ciphertext);
    }

    return 0;
}

void encrpt(char* plaintext, char* ciphertext,int key)
{
    strcpy(ciphertext, plaintext);

    for (int i = 0; plaintext[i] != '\0'; ++i)
    {
        if(plaintext[i] >= 97 && plaintext[i] <= 122)
            ciphertext[i] = ('a' + ((ciphertext[i] - 'a' + key) % 26));
        else if(plaintext[i] >= 65 && plaintext[i] <= 90)
            ciphertext[i] = ('A' + ((ciphertext[i] - 'A' + key) % 26));
        else if(plaintext[i] == 10)
        {
            ciphertext[i] = '\0';
            break;
        }
    }
}

