//
// Created by Administrator on 2023/2/17.
//
#include <stdio.h>
#include <string.h>

int main(void){
    int cnt = 0;
    int isTrue = 1;
    char A[100];
    char B[100];
    gets(A);
    gets(B);

    for (int i = 0; i < strlen(A); ++i) {
        if(A[i] == B[0])
        {
            for (int j = 1; j < strlen(B); ++j) {
                if(A[i + j] != B[j])
                {
                    isTrue = 0;
                    break;
                }
            }
            if(isTrue)
                cnt++;
        }
    }

    printf("%d" ,cnt);

    return 0;
}