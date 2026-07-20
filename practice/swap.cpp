#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of element: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
  int large = 0;
  int MIN = arr[0];
  for (int i=0;i<n;i++){
      if(arr[i]>large){
           large = arr[i];
        }
      if(arr[i]<MIN){
          MIN = arr[i];
      }
  }
      cout<<"smallest element: "<<MIN<<endl;
      cout<<"largest number is: "<<large<<endl;
      int c;
    c = large;
    large = MIN;
    MIN = c;
      cout<<"smallest element: "<<MIN<<endl;
      cout<<"largest number is: "<<large<<endl;
      
      return 0;
  
}