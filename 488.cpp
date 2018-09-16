#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,f;
        cin>>f>>a;
        for(int i=0;i<a;i++)
        {
            for(int j=1;j<=f;j++)
            {
                int t=j;
                while(t--) cout<<j;
                cout<<endl;
            }
            for(int j=f-1;j>=1;j--)
            {
                int t=j;
                while(t--) cout<<j;
                cout<<endl;
            }
            if(i<a-1)cout<<endl;
        }
    if(n>0) cout<<endl;
    }
    return 0;
}
