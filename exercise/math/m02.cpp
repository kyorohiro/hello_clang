// Sum of naturals divisible by either 3 or 5

#include<iostream>

int main(int argc, char** argv) {
    int num1 =0;
    int num2= 0;
    std::cout << "input number";
    std::cin >> num1;
    std::cout << "and input number";
    std::cin >> num2;
    if(num1 == num2) {
        std::cout << num1;
        return 0;
    }
    if(num1 > num2) {
        int tmp = num1;
        num1 = num2;
        num2 = tmp;
    }
    for(int i=num1;i>1;i--) {
        if(num1%i == 0 && num2%i == 0) {
            std::cout << i << std::endl;
            return 0;
        }
    }
    std::cout << std::endl <<"END="<< num1 << std::endl ;
}