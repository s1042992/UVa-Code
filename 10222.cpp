#include<iostream>
using namespace std;
int main()
{
    string s;
    string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    //�}�C���Q�k�O�q�O�H���خ��� ���M�ڥ��ӬO�n��case�g...�u�������F
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
