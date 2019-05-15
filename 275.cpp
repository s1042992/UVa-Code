#include<iostream>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m&&n&&m)
    {
        int ans[1001],q,k=1,temp[1001]={};
        while(n)
        {
            temp[n]=k;
            n=n*10;
            q=n/m;
            ans[k++]=q;
            n=n%m;
            if(temp[n])
                break;
        }
        cout<<".";
        for(int i=1;i<k;i++)
        {
            if(i%50<1)
                cout<<endl;
            cout<<ans[i];
        }
        cout<<endl;
        if(!n)
            cout<<"This expansion terminates."<<endl;
        else
            cout<<"The last "<<k-temp[n] <<" digits repeat forever."<<endl;
        cout<<endl;

    }
}
