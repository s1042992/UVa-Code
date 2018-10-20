#include<iostream>
#include<algorithm>
using namespace std;
long array[999999]={0};
int main()
{
    long num;
    while(cin>>num)
    {
        if(num==0) break;
        for(long i=0;i<num;i++)
            cin>>array[i];
        sort(array,array+num);

        bool flag=0;
        int d;
        for( d=num-1;d>=0;d--)
        {
            long ans;
            for(int c=num-1;c>1;c--)
            {
                if(c!=d)
                    ans=array[d]-array[c];
                for(int a=0,b=c-1;a<b;)
                {
                    if(array[a]+array[b]==ans)
                    {
                        flag=true;
                        break;
                    }
                    else if(array[a]+array[b]<ans)
                        a++;
                    else
                        b--;
                }
                if(flag)
                    goto x;
            }

        }
        x:
        if(!flag)//¨S´ú¨ìsolution
            cout<<"no solution"<<endl;
        else
            cout<<array[d]<<endl;
    }
}
