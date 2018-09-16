#include<iostream>
#include <cctype>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int total=0,flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
                flag=1;
            else if(!isalpha(s[i])&&flag)
            {
                total++;
                flag=0;
            }

        }
        cout<<total<<endl;
    }
}
