 #include<iostream>
 using namespace std;
 int main(){
    int a,b,c;
    cout<<"enter the two angles of triangle : ";
    cin>>a>>b;
    c=180-(a+b);
    cout<<"the third angle is : "<<c;

    int s;
    cin >> s;

    int i = 1;

    while (i * i < s) {
        i++;
    }

    if (i * i == s) {
        cout << s << " is the square of " << i;
    } else {
        cout << s << " is not a perfect square";
    }
char p;
    cout<<"enter the character : ";
    cin>>p;
    if(p>=INT_MIN && p<=INT_MAX){
        cout<<"the character is Number";
    }
    else if(p>='a' && p<='z'){
        cout<<"the character is Alphabet";
    }
    else if(p>='A' && p<='Z'){
        cout<<"the character is Alphabet";
    }
    else{
        cout<<"the character is Special Character";
    }
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    int u,v,z;
    cout<<"enter the three numbers : ";
    cin>>u>>v>>z;
    if(u*u+v*v==z*z || u*u+z*z==v*v || v*v+z*z==u*u){
        cout<<"the numbers form a Pythagorean triplet";
    }
    else{
        cout<<"the numbers do not form a Pythagorean triplet";
    }
    return 0;
}
