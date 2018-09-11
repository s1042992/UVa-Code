#include<iostream>
using namespace std;
int main()
{
    int n,m;

    while(cin>>n>>m)
    {
        bool flag=1;
        if(m<n)
        {
           swap(n,m);
           flag=0;
        }
        int max=0;
        for(int i=n;i<=m;i++)
        {
            int temp=i,count=0;
            while(temp!=1)
            {
                if(temp%2==1)
                    temp=temp*3+1;
                else
                    temp/=2;
                count++;
            }
            count++;
            if(count>max)
                max=count;
        }

        if(flag==1) cout<<n<<" "<<m<<" ";
        if(flag==0) cout<<m<<" "<<n<<" ";
        cout<<max<<endl;
    }
}
