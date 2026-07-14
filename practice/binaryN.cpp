#include<iostream>
using namespace std;
int decNum(int n){
    int ans=0,pow =1;
    while(n>0){
       int rem = n%2;
        n = n/2;
        ans +=(rem*pow);
        pow *= 10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the value to get Binary number "<<endl;
    cin>>n;
    cout<<decNum(n)<<endl;
    return 0;
}