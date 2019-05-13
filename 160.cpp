#include<iostream>
#include<cmath>
using namespace std;
int k=0;
int prime[50000],prime_num[50000];
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

    for(int i=2;i<50000;i++)
    {
        if(isprime(i))
        {
            prime[k++]=i;
        }
    }
}
void factor(int x)
{
    for(int i=0;i<k;i++)
    {
        while(x%prime[i]==0)
        {

            prime_num[i]++;
            x/=prime[i];
        }
    }
}
void makeintit()
{
    for(int i=0;i<k;i++)
        prime_num[i]=0;
}
int main()
{
    long num;
    maketable();

    while(cin>>num&&num)
    {

        makeintit();
        for (int i=num;i>0;i--)
        {
            factor(i);
        }
        if(num<10) cout<<"  ";
        else if(num<100)cout<<" ";
        cout<<num<<"! =";
        int count=1;
        for(int i=0;i<k;i++)
        {
            if(prime_num[i]&&count<16)
            {
                if(prime_num[i]<10)
                    cout<<"  ";
                else if(prime_num[i]<100)
                    cout<<" ";
                cout<<prime_num[i];
                count++;
            }
            else if(prime_num[i]&&count==16)
            {
                cout<<endl;
                cout<<"      ";
                if(prime_num[i]<10)
                    cout<<"  ";
                else if(prime_num[i]<100)
                    cout<<" ";
                cout<<prime_num[i];
                count=1;
            }

            else
                break;
        }
        cout<<endl;
    }
}
