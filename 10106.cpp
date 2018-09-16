#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int num1,num2;
    char garbage,symbol;
    while(cin>>num1)
    {
        cin.get(garbage);
        cin.get(garbage);

        symbol=garbage;
        cin.get(garbage);
        cin>>num2;
        if(symbol=='/')
            cout<<num1/num2<<endl;
        else if(symbol=='%')
            cout<<num1%num2<<endl;
    }



}
