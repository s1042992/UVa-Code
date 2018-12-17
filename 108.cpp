#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int sum,max_sum;
        int array[105][105]={0},sumarray[105][105]={0};
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                cin>>array[i][j];
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                sumarray[i][j]=sumarray[i-1][j]+array[i][j];
            }
        }
        max_sum=INT_MIN;
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j++)
            {
                sum=0;
                for(int k=1;k<=n;k++)
                {
                    sum+=sumarray[j][k]-sumarray[i-1][k];
                    if(sum>max_sum)
                        max_sum=sum;
                    if(sum<0)
                        sum=0;
                }
            }
        }
        cout<<max_sum<<endl;
    }
}
