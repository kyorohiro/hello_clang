// Sexy prime pairs
#include<iostream>
#include "exmath.h"

using namespace std;

int main(int argc, char** argv) {
    cout << "Hi!!";
    int limit;
    cin >> limit;
    for(int i=0;i<limit;i++) {
        if(is_prime(i) && is_prime(i+6)){
            cout<<i<<"-"<<i+6<<",";
        }
    }
    return 0;
}