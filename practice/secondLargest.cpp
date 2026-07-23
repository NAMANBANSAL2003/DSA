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
    int largest = arr[0];
    int secondLargest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>secondLargest && arr[i]!=largest){
            secondLargest = arr[i];
        }
    }
    cout<<"second largest element is: "<<secondLargest<<endl;
    return 0;
}