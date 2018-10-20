#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double s,a;
    string angle;
    while(cin>>s>>a>>angle)
    {
        s=6440+s;
        if(a>180) a=360-a;
        if(angle=="min") a/=60;
        cout<<fixed<<setprecision(6)<<2*s*(a/360)*M_PI<<" "<<sqrt(2*pow(s,2)*(1-cos(a/180*M_PI)))<<endl;
    }
}
