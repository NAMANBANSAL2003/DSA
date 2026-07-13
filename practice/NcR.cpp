#include<iostream>
using namespace std;
int factN(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}
int main(){
    cout<<" NcR = "<<factN(8)/(factN(2)*(factN(8-2)))<<endl;
    cout<<factN(5)<<endl;
    return 0;
}
