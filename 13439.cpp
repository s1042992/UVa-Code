#include<iostream>
using namespace std;
int main()
{
    int num,p=1;
    cin>>num;
    for(int p=1;p<=num;p++)
    {
        string month1,month2,garbage;
        int day1,day2,year1,year2,ans=0;
        cin>>month1>>day1>>garbage>>year1;
        cin>>month2>>day2>>garbage>>year2;
        if(month1=="January"||month1=="February")year1--;
        if(month2=="January"||month2=="February") year2--;
        if(month2=="February"&&day2==29)year2++;
        ans= year2/4 - year2/100 + year2/400- (year1/4 - year1/100 + year1/400);
        cout<<"Case "<<p<<": "<<ans<<endl;
    }
}
