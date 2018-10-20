#include<iostream>
using namespace std;
int main()
{
    string s;
    string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    //陣列的想法是從別人那裏拿的 不然我本來是要用case寫...真的太蠢了
    while(getline(cin,s))
    {
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<keyboard.size();j++)
            {
                if(s[i]==keyboard[j])
                {
                     cout<<keyboard[j-2];
                     break;
                }

                else if(s[i]==' ')
                {
                    cout<<" ";
                    break;
                }
            }
        }
        cout<<endl;
    }
}
