#include <iostream>
using namespace std;
int main(){
    int arr[] ={1,3,5,7,2,8,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }

}
cout<<"largest Element:"<<largest;
return 0;
}