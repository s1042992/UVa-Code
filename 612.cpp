#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int num,flag=0;
    cin>>num;
    while(num--)
    {
        if(flag)
            cout<<endl;
        int n,m,times[101];
        cin>>n>>m;
        cin.ignore();
        string str,record[101];
        for(int i=0;i<m;i++)
        {
            int count=0;
            getline(cin,str);
            record[i]=str;
            for(int j=0;j<str.size();j++)
            {
                for(int k=0;k<str.size()-1;k++)
                {
                    if(str[k]>str[k+1])
                    {
                        swap(str[k],str[k+1]);
                        count++;
                    }

                }
            }
           // cout<<count<<endl;
            times[i]=count;
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m-1;j++)
            {
                if(times[j]>times[j+1])
                {
                    swap(times[j],times[j+1]);
                    swap(record[j],record[j+1]);
                }
            }
        }
        for(int i=0;i<m;i++)
            cout<<record[i]<<endl;
        flag=1;
    }
}
