#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int m,total=0;
        cin>>m;
        while(m--)
        {
            double place, num, level;
            cin>>place>>num>>level;
            total+=(place/num)*num*level;
        }
        cout<<total<<endl;
    }
}
