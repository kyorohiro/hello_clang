//
// is Prime
//
// 2 3 5 7 11 13 17 19 23 25 29 31
//
//
#include<iostream>
#include "exmath.h"
using namespace std;

int main(int argc, char** argv) {
    int num = 0;
    cin >> num;
    cout << "is_prime : " << is_prime(num) << " " << endl;
    return 0;
}