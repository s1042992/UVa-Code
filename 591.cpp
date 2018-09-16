#include<iostream>
using namespace std;
int main()
{
    int n,j=1;
    int bricks[101]={0};
    while(cin>>n&&n!=0)
    {
        int total=0,step=0;
        for(int i=0;i<n;i++)
        {
            cin>>bricks[i];
            total+=bricks[i];
        }
        for(int i=0;i<n;i++)
        {
            if(bricks[i]>total/n)
                step+=bricks[i]-total/n;
        }
        cout<<"Set #"<<j<<endl;
        cout<<"The minimum number of moves is "<<step<<'.'<<endl;
        cout<<endl;
        j++;
    }
}
