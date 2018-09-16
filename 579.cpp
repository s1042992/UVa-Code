#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double H;
    char c,m1,m2;
    double angle;
    while(cin>>H>>c>>m1>>m2)
    {
        if(H==0&&m1=='0'&&m2=='0')
            break;
        double M=(m1-'0')*10+(m2-'0');
        double angle;
        if(H==12.0)
            H=0.0;
        else H*=5.0;
        H=H+M*1/12;
        angle=abs(H-M)*6.0;
        if(angle>180.0)
            angle=360.0-angle;
        cout<<fixed<<setprecision(3)<<angle<<endl;
    }
}
