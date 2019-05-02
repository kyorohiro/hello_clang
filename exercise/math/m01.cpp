// Sum of naturals divisible by either 3 or 5

#include<iostream>

int main(int argc, char** argv) {
    int limit =0;
    int sum = 0;
    std::cin >> limit;
    for(int i=5;i<limit;i++) {
        if(i%5 == 0 || i%3 == 0) {
            std::cout << i << ",";
            sum +=i;
        }
    }
    std::cout << std::endl <<"END="<< sum << std::endl ;
}