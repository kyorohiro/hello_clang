#include "exmath.h"

void sortLS(int& num1, int& num2) {
    if(num1> num2) {
        return;
    }
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}

int gcd(int num1, int num2) {
    sortLS(num1,num2);
    int tmp = 0;
    tmp = num1%num2;
    while((tmp = num1%num2) != 0) {
        num1 = num2;
        num2 = tmp;
    }
    return num2;
}
