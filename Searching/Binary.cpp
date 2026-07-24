#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of element : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        for(int i=0;i<n;i++){
            cout<<arr[i];
}
int l,h,key;
cout<<"enter the key to be searched : ";
cin>>key;
l=0;
h=n-1;
while(l<=h){
    int mid=(l+h)/2;
    if(arr[mid]==key){
        cout<<"key found at index : "<<mid;
        break;
    }
    else if(arr[mid]<key){
        l=mid+1;
    }
    else{
        h=mid-1;
    }
}
if(l>h){
    cout<<"key not found";
}
return 0;
}   