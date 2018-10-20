#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long s,d,flag=0;
        cin>>s>>d;
        if(d>s) goto x;
        for(int i=0;i<=s;i++)
        {
            for(int j=0;j<=s;j++)
            {
                if(abs(i-j)==d&&i+j==s)
                {
                    flag=1;
                    if(j>i)
                        swap(j,i);
                    cout<<i<<" "<<j<<endl;
                    break;
                }
            }
            if(flag)
                break;
        }
    x:
        if(!flag)
            cout<<"impossible"<<endl;
    }

}
