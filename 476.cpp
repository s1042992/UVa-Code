#include<iostream>
using namespace std;
int main()
{
    char r;
    int i=0,p=1;
    double x1[11],y1[11],x2[11],y2[11];
    while(cin>>r&&r!='*')
    {

        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
        i++;
    }
    double v1,v2;
    while(cin>>v1>>v2&&(v1!=9999.9&&v2!=9999.9))
    {
        bool flag=0;
        for(int j=0;j<i;j++)
        {
            if((v1>x1[j]&&v1<x2[j])&&(v2<y1[j]&&v2>y2[j]))
            {
                 cout<<"Point "<<p<<" is contained in figure "<<j+1<<endl;
                flag=1;
            }

        }
        if(flag==0)
            cout<<"Point "<<p<<" is not contained in any figure"<<endl;
        p++;
    }
}
