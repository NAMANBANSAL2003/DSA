#include<iostream>
using namespace std;
int sumOfDigit(int n){
    int sum = 0;
    while(n>0){     
        int lastDigit = n%10;
        n /= 10;
        sum += lastDigit;
    }
    return sum;
}
int main(){
    cout<<"Sum of digit = "<<sumOfDigit(12345)<<endl;
    cout<<sumOfDigit(987654321)<<endl;
    return 0;
}