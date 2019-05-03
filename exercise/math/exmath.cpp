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

int lcm(int num1, int num2) {
    int t = gcd(num1,num2);
    return (num1/t)*num2;
}


bool is_prime(int const num) {
    if(num <= 3) {
        return num > 1;
    }
    else if(num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    else {
        for(int i=5;i*i<num;i++) {
            if(num % i == 0 || num %(i+2) == 0) {
                return false;
            }
        }
    }
    return true;
}