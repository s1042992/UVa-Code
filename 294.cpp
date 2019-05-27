#include<iostream>
#include<cmath>
using namespace std;
int prime[34000],p=2;
bool isprime(int x)
{
    for(int i=2;i<sqrt(x)+0.01;i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

void maketable()
{
    prime[0]=2,prime[1]=3;
    for(int i=5;i<34000;i+=2)
    {
        if(isprime(i))
        {
            prime[p++]=i;
        }
    }
}
int div(int x)
{
    int total=1;
    for(int i=0;i<p&&x>1;i++)
    {
        if(x%prime[i]==0)
        {
            int count=1;
            while(x%prime[i]==0)
            {
                count++;
                x/=prime[i];
            }
            total*=count;
        }

    }
    //cout<<total<<endl;
    return total;

}
int main()
{
    maketable();
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,temp=0,ans;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
            if(div(i)>temp)
            {
                temp=div(i);
                ans=i;
            }

        }
        cout<<"Between "<<a<<" and "<<b<<", "<<ans<<" has a maximum of "<<temp<<" divisors."<<endl;
    }
}
