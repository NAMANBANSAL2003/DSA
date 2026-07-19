#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements: ";         
    cin>>n;
    int arr[n];
    cout<<"enter elements of array: "<<endl;
    for(int i=0;i<n;i++){       
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++){           
        sum += arr[i];
    }   
    int avg = sum/n;
   
    cout<<"sum of elements in array is: "<<sum<<endl;
    cout<<"average of elements in array is: "<<avg<<endl;
    return 0;
}   
