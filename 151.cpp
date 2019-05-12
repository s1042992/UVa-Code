#include<iostream>
using namespace std;
int cir(int n,int m)
{
    int p=0;
    for(int i=1;i<n;i++)
    {
        p=(p+m)%i;
    }
    return p;
}
int main()
{
    int num;
    while(cin>>num&&num)
    {
        for(int i=1;i<num;i++)
        {
            if(cir(num, i)==11)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
