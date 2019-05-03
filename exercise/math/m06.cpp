// Abundant numbers
//
// 8
// 1 ,2 

#include<iostream>
#include<cmath>

using namespace std;

int sum_at_divisor(int num){
    int sum = 1;
    int limit_sqrt = (int)sqrt(num);
   // cout << "ls="<< limit_sqrt << endl;
    for(int i=2;i<=limit_sqrt;i++) {
        if((num % i)==0) {
            sum = sum + i;
           // cout << i << ",";
            if(i!=(num/i)) {
             //   cout <<"("<< num/i << "),";
                sum += num/i;
            }
        }
    }
    return sum;
}

int main(int argc, char** argv) {
    int num = 0;
    int sum = 1;
    cin >> num;
    for(int i=10;i<=num;i++) {
        sum = sum_at_divisor(i);
        if(i < sum) {
            cout << "sum="<<i << endl;
        }
    }
    return 0;
}