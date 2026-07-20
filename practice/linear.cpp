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
    int target;
    int index =0;
    cout<<"enter target number: ";
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"target found at index: "<<i<<endl;
            return 0;
        }
    }
    cout<<"target not found"<<endl; 
    return 0;
}