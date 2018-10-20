#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        double x,k,flag=0;
        cin>>x>>k;
        for(int i=0; ;i++)
        {
            for(int j=0;j*ceil(x/k)<=x ;j++)
            {
                if(i*floor(x/k)+j*ceil(x/k)==x)
                {
                    cout<<i<<" "<<j<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag)
                break;
        }
    }
}
