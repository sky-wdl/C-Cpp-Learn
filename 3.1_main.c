#include <stdio.h>
//实现华氏度转为摄氏度小练习
int main() {
    float f, c;
    printf("Please enter a Fahrenheit value: ");
    scanf("%f", &f);
    c = (f - 32.0) * 5.0 / 9.0;
    printf("The corresponding degree Celsius is: %f\n",c);
    return 0;
}
