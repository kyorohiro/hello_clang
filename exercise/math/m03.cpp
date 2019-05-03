// 3. Least common multiple
// a*x, b*x, x
// a*b*x 
//  
#include<iostream>
#include "exmath.h"

using namespace std;

int main(int argc, char** argv) {
    int num1,num2 =0;
    cin >> num1;
    cin >> num2;
    cout << lcm(num1,num2);
    return 0;
}