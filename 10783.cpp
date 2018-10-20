#include<iostream>
using namespace std;
bool isPrime(int num)
{
    if(num==1)
        return false;
    else if(num==2)
        return true;
    else
    {
        bool flag=1;
        for(int i=2;i<num;i++)
            if(num%i==0)
                flag=0;
        if(flag)
            return true;
        else
            return false;
    }
}
int main()
{
    int n,p=1;
    cin>>n;
    while(n--)
    {
        string s;
        int alpha[200][1]={{0}};
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            for(int j=48;j<=122;j++)
            {
                if((int)s[i]==j)
                {
                    alpha[j][0]++;
                    break;
                }
            }
        }
        cout<<"Case "<<p<<": ";
        bool flag=0;
        for(int j=48;j<=122;j++)
        {
            if(alpha[j][0]&&isPrime(alpha[j][0]))
            {
                cout<<(char)j;
                flag=1;
            }
        }
        if(!flag) cout<<"empty";
        cout<<endl;
        p++;
    }
}
