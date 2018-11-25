#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    unsigned long long int N[1501]={0};
    N[1]=1;
    int p2=1,p3=1,p5=1;
    for(int i=2;i<=1500;i++)
    {
        while(N[p2]*2<=N[i-1])p2++;
        while(N[p3]*3<=N[i-1])p3++;
        while(N[p5]*5<=N[i-1])p5++;
        N[i]=min(N[p2]*2,min(N[p3]*3,N[p5]*5));
    }
    cout<<"The 1500'th ugly number is ";
    cout<<N[1500]<<"."<<endl;

}
