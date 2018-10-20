#include<iostream>
using namespace std;
int main()
{
    int n,p,q=1,flag=0;
    while(cin>>n>>p)
    {
        cin.ignore();
        string item,name[99999];
        double price[99999];
        int r[99999],pos,max=0;
        if(n==0&&p==0)
            break;
        for(int i=0;i<n;i++)
            getline(cin,item);
        for(int i=0;i<p;i++)
        {
            getline(cin,name[i]);
            cin>>price[i]>>r[i];
            cin.ignore();
            if(r[i]>max)
            {
                max=r[i];
                pos=i;
            }
            else if(r[i]==max)
                if(price[i]<price[pos])
                    pos=i;
            while(r[i]--)
                getline(cin,item);
        }
        if(flag)
            cout<<endl;
        cout<<"RFP #"<<q<<endl;
        cout<<name[pos]<<endl;
        flag=1;
        q++;
    }
}
