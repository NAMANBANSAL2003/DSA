#include<iostream>
using namespace std;
int main(){
    int a[5]= {1,2,3,4,5};
    cout<<"The elements of the array are: ";
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"The elements of the array in reverse order are: ";
    for(int i=4;i>=0;i--){
        cout<<a[i]<<" ";
    }
    cout<<endl; 
    return 0;
}