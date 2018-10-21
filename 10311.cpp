#include<iostream>
#include<cmath>
#include <algorithm>
#define MAXNUM 100000010
using namespace std;
int prime[MAXNUM];

void makeprime()
{

    for(int i=2;i*i<MAXNUM;i++)
    {
        if(prime[i]==0)
        {
            for(int j=2;i*j<MAXNUM;j++)
                prime[i*j]=1;
        }
    }
}
int main()
{
    makeprime();
    int number;
    while(cin>>number)
    {
        int ans=0;
        if(number<5)
            cout<<number<<" is not the sum of two primes!"<<endl;
        else if(number%2==1&&prime[number-2]==0)
            cout<<number<<" is the sum of "<<2<<" and "<<number-2<<"."<<endl;
        else if(number%2==0)
        {
            ans=0;
            for(int i=(number/2)-1;i>=2;i--)
            {
                if(prime[i]==0&&prime[number-i]==0)
                {
                    cout<<number<<" is the sum of "<<i<<" and "<<number-i<<"."<<endl;
                    ans=1;
                    break;
                }
            }
            if(ans==0)
                cout<<number<<" is not the sum of two primes!"<<endl;
        }
        else
            cout<<number<<" is not the sum of two primes!"<<endl;
    }

}
