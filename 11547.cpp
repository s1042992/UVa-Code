#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int num;
        cin>>num;
        int result=(((((num*567)/9)+7492)*235)/47)-498;
        stringstream ss;
        ss<<result;
        string goal;
        ss>>goal;
        cout<<goal[goal.length()-2]-'0'<<endl;
    }
}
