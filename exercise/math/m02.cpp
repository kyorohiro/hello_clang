// 2. Greatest common divisor
//
// if x is gcd
// a = N*x and b = M*x 
// a = b*C + c
// N*x = M*x*C+ c
// (N-MC)*x = c
// c's contain x

#include<iostream>
#include "exmath.h"

int main(int argc, char** argv) {
    int num1 =0;
    int num2= 0;
    std::cout << "input number";
    std::cin >> num1;
    std::cout << "and input number";
    std::cin >> num2;
    std::cout << std::endl <<"END="<< gcd(num1,num2) << std::endl ;
}