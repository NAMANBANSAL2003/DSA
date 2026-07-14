// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c;

//     cout << "Enter values of a, b, c: ";
//     cin >> a >> b >> c;

//     if (a + b > c) {
//         if (b + c > a) {
//             if (c + a > b) {
//                 cout << "Valid Triangle";
//             } else {
//                 cout << "Invalid Triangle";
//             }
//         } else {
//             cout << "Invalid Triangle";
//         }
//     } else {
//         cout << "Invalid Triangle";
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
int main() {
    int a, b, c;

    cout << "Enter values of a, b, c: ";
    cin >> a >> b >> c;

    if (a + b > c && b + c > a && c + a > b) {
        cout << "Valid Triangle"<<endl;
    } else {
        cout << "Invalid Triangle"<<endl;
    }
if(a==b&&b==c){
    cout<<"Equilateral Triangle";
}
else if(a==b||b==c||c==a){
    cout<<"Isosceles Triangle";
}
else{
    cout<<"Scalene Triangle";
}
return 0;
}
