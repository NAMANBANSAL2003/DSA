#include<iostream>
using namespace std;
int main()
{
    int gain[] = {-5,1,5,0,-7};
    int n = sizeof(gain)/sizeof(gain[0]);
    int altitude = 0;
    int maxAltitude = 0;
    for(int i=0;i<n;i++){
        altitude += gain[i];
        if(altitude > maxAltitude){
            maxAltitude = altitude;
        }
    }
    cout<<"largest Altitude:"<<maxAltitude;
    return 0;
}