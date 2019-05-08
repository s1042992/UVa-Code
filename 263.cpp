#include<iostream>
#include<algorithm>
#include<string>
#include <sstream>
#include<cstring>
using namespace std;
int str_wash(string &str, const string src)
{
    int counter = 0;
    string::size_type pos = 0;
    while ((pos = str.find_first_of(src, pos)) != string::npos) {
        str.erase(pos, 1);
        ++counter;
    }
    return counter;
}
int main()
{
    string num;
    while(cin>>num&&num!="0")
    {
        int p=0;
        bool flag=true;
        string first,second;
        int ans,first_num,second_num,temp_num,store[5000];
        stringstream s1,s2,temp;
        cout<<"Original number was "<<num<<endl;
        while(flag)
        {
            sort(num.begin(),num.end());

            second=num;
            s2<<second;
            s2>>second_num;
            reverse(num.begin(),num.end());

            first=num;
            s1<<first;
            s1>>first_num;
            temp_num=first_num-second_num;
            store[p]=temp_num;
            if (second[0]=='0'&&second.size()>1)//要是開頭為0就捨棄0(但寫得不好)
            {
                str_wash(second,"0");
            }
            cout<<first<<" - "<<second<<" = "<<temp_num<<endl;
            for(int i=0;i<p;i++)
            {
                if(store[i]==temp_num)
                {
                    flag=false;
                    break;
                }
            }
            temp<<temp_num;
            temp>>num;
            s1.str("");
            s1.clear();
            s2.str("");
            s2.clear();
            temp.str("");
            temp.clear();
            p++;
        }
        cout<<"Chain length "<<p<<endl;
        cout<<endl;
    }
}
