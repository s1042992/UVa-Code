#include<iostream>
#include<cstring>
#include<algorithm>

#define max(a,b) ((a)>(b)?(a):(b))
using namespace std;
int main()
{
    int t1,t2,num=1;;
    while(cin>>t1>>t2)
    {
        if(t1==0&&t2==0) break;
        int tower1[150],tower2[150],dp[150][150];
        for(int i=1;i<=t1;i++)
            cin>>tower1[i];
        for(int i=1;i<=t2;i++)
            cin>>tower2[i];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=t1;i++)
        {
            for(int j=1;j<=t2;j++)
            {
                if(tower1[i]==tower2[j])
                    dp[i][j]=dp[i-1][j-1]+1;
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);

            }
        }
        cout<<"Twin Towers #"<<num++<<endl;
        cout<<"Number of Tiles : "<<dp[t1][t2]<<endl;
        cout<<endl;

    }
}
