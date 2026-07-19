// #include<iostream>
// using namespace std;
// int main(){
//     int a[5]= {1,2,3,4,5};
//     cout<<"The elements of the array are: ";
//     for(int i=0;i<5;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"The elements of the array in reverse order are: ";
//     for(int i=4;i>=0;i--){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl; 
//     return 0;
// }
// 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements od array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int small = 0;
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
            small = i;
        }
    }
    cout<<"small elemnet is: "<<min<<endl;
    cout<<"index of small element is: "<<small<<endl;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" is even"<<endl;
            count++;
        }
        else{
            cout<<arr[i]<<" is odd"<<endl;
            count++;
        }
    }
    cout<<"Number of even elements: "<<count<<endl;
    return 0;
}

