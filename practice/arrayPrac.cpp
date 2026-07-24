#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of element :";
    cin>>n;
    int arr[n];
    cout<<"array element : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        //left rotation of array by 1
       int temp = arr[0];
            for(int i=0;i<n-1;i++){
                arr[i]=arr[i+1];
            }
            arr[n - 1] = temp;
            cout<<"array element after rotation: ";
             for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    //right rotation of array by 1
    cout<<endl;
    int temp1 = arr[n - 1];
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp1;
    cout<<"array element after right rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}