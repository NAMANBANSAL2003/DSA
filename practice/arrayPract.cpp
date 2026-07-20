#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of element in array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =n-1;i>=0;i--){
        cout<<arr[i]<<" "<<endl;
    }
    int sum =0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int avg = sum/n;
    cout<<"print sum "<<sum<<endl;
    cout<<"print avg "<<avg<<endl;
}