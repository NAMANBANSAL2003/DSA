// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter two numbers: ";    
//     cin>>a>>b;
//     if(a%b==0 || b%a==0){
//         cout<<"Yes, one number is divisible by the other"<<endl;
//     }
//     else{
//         cout<<"No, neither number is divisible by the other"<<endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {    
//     int hr;
//     cout << "Enter hours : ";
//     cin >> hr;
//     if(hr >= 0 && hr <= 12) {
//         cout << "Good Morning" << endl;
//     } else if(hr > 12 && hr <= 16) {
//         cout << "Good Afternoon" << endl;
//     } else if(hr > 16 && hr <= 20) {
//         cout << "Good Evening" << endl;
//     } else if(hr > 20 && hr <= 24) {
//         cout << "Good Night" << endl;
//     } else {
//         cout << "Invalid hour input" << endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter one characters: ";
    cin >>ch;
    if (ch >= 'a' && ch <= 'm') {
        cout << "The alphabet lies between a and m.";
    }
    else if (ch >= 'n' && ch <= 'z') {
        cout << "The alphabet lies between n and z.";
    }
    else {
        cout << "Invalid input or uppercase letter.";
    }

    return 0;
} 