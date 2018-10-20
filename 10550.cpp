#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        if(a==0&&b==0&&c==0&&d==0)
            break;
        int total=0;
        if(a>b)
            total+=a-b;
        else if(b>=a)
            total+=40-(b-a);
        if(c<b)
            total+=c+40-b;
        else if(c>=b)
            total+=c-b;
        if(c>d)
            total+=c-d;
        else if(d>=c)
            total+=40-(d-c);
        total+=120;
        cout<<total*9<<endl;
    }
}
