#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long n,array[99999],i=1,temp,ans;
    while(cin>>n)
    {
        array[i]=n;
        sort(array+1,array+i+1);
        if(i==1)
            cout<<n<<endl;
        else if(i==2)
            cout<<(array[1]+array[2])/2<<endl;
        else if(i==3)
            cout<<array[2]<<endl;
        else
        {
            if(i%2==1)
            {
                ans=array[i/2+1];
                cout<<ans<<endl;
            }

            else if(i%2==0)
            {
                temp=i/2;
                ans=(array[temp]+array[temp+1])/2;
                cout<<ans<<endl;
            }
        }
        i++;
    }
}
