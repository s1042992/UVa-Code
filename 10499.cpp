#include<iostream>
using namespace std;
int main()
{
    long long  n,ans;
    while(cin>>n)
    {
        if(n<0)
            break;
        else if(n==1)
            cout<<"0%"<<endl;
        else
        {
            ans=n*0.5*50;
            cout<<ans<<"%"<<endl;
        }
    }
}
