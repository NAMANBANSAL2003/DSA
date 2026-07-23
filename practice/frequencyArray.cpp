#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of element: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    int count[100]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=0;i<100;i++){
        if(count[i]>0){
            cout<<i<<" occurs "<<count[i]<<" times"<<endl;
        } 
    
}
return 0;
}