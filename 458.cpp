#include<iostream>
using namespace std;
int main()
{
    char c;
    while(cin.get(c))
    {
       if(c=='\n')
       {
           cout<<endl;
           continue;
       }

       cout<<char((int)c-7);
    }
}
