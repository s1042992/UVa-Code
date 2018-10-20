#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int p,q,r,s,t,u;
double ans(double x)
{
    return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}

int main(){
    while(cin>>p>>q>>r>>s>>t>>u)
    {
        double upper =1.0,lower =0.0,k;

        int n = 35,flag=1;
        while(n--)
        {
            if(ans(lower)*ans(upper)>0)
            {
                cout<<"No solution"<<endl;
                flag=0;
                break;
            }

            else
            {
                k =(upper+lower)/2;
                if(ans(k)>0)
                    lower = k;
                else
                    upper = k;
            }

        }
        if(flag)
            cout<<fixed<<setprecision(4)<<k<<endl;

    }
}
