#include<iostream>
using namespace std;
int main()
{
    char c;
    bool count=0;
    while(cin.get(c))
    {
        if(c=='"'&&count==0)
        {
            cout<<"``";
            count=1;

        }
        else if(c=='"'&&count==1)
        {
            cout<<"''";
            count=0;
        }
        else
            cout<<c;
    }
}
