#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double x1,y1,x2,y2,x3,y3;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
    {
        double a_side=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        double b_side=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
        double c_side=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
        double s=(a_side+b_side+c_side)/2.0;
        double r=(a_side*b_side*c_side)/(4*sqrt(s*(s-a_side)*(s-b_side)*(s-c_side))); //((a*b*c)/4R)=sqrt(s*(s-a)*(s-b)*(s-c)) 面積公式:正弦&海龍

        //(y3-y2) / (x3-x2) = (Y-y2) / (X-x2) 直線公式 再求中垂線解聯立 求得(X,Y)為圓心座標
        double rx=((y2-y1)*(x3*x3-x1*x1+y3*y3-y1*y1)-(y3-y1)*(x2*x2-x1*x1+y2*y2-y1*y1))/((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1))/-2.0;
        double ry=((x3-x1)*(x2*x2-x1*x1+y2*y2-y1*y1)-(x2-x1)*(x3*x3-x1*x1+y3*y3-y1*y1))/((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1))/-2.0;
        double p=-1*x2*x2-y2*y2-x2*rx*-2.0-y2*ry*-2.0;
        if(rx<0)
            cout<<fixed<<setprecision(3)<<"(x + "<<-1*rx<<")^2 + ";
        else
            cout<<fixed<<setprecision(3)<<"(x - "<<rx<<")^2 + ";
        if(ry<0)
            cout<<fixed<<setprecision(3)<<"(y + "<<-1*ry<<")^2 = ";
        else
            cout<<fixed<<setprecision(3)<<"(y - "<<ry<<")^2 = ";
        cout<<fixed<<setprecision(3)<<r<<"^2"<<endl;

        cout<<"x^2 + y^2";
        if(rx<0)
            cout<<fixed<<setprecision(3)<<" + "<<rx*-2<<"x";
        else
            cout<<fixed<<setprecision(3)<<" - "<<rx*2<<"x";
        if(ry<0)
            cout<<fixed<<setprecision(3)<<" + "<<ry*-2<<"y ";
        else
            cout<<fixed<<setprecision(3)<<" - "<<ry*2<<"y ";

        if(p<0)
            cout<<fixed<<setprecision(3)<<"- "<<p*-1<<" = 0"<<endl;
        else
            cout<<fixed<<setprecision(3)<<"+ "<<p<<" = 0"<<endl;

        cout<<endl;


    }
}
