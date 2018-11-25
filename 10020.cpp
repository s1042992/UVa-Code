#include<iostream>
#include<algorithm>
using namespace std;
struct coordinate
{
    int left;
    int right;
};
bool compare(coordinate a,coordinate b)
{
    return a.left<b.left;
}
int main()
{
    int test;
    bool flag=false;
    cin>>test;
    while(test--)
    {
        string garbage;
        getline(cin,garbage);
        int seg,p=0;
        coordinate point[99999];

        cin>>seg;
        while(1)
        {
            cin>>point[p].left>>point[p].right;
            if(point[p].left==0&&point[p].right==0)
                break;
            else
                p++;
        }
        sort(point,point+p,compare);

        int now=0,ans=0,max,idx,ans_idx[10000];
        for(int i=0;i<p;ans++)
        {
            if(now>=seg)
                break;
            if(point[i].left>now)
            {
                ans=0;
                break;
            }
            else
            {
                max=point[i].right;
                idx=i;
                while(i<p&&point[i].left<=now)
                {
                    if(max<point[i].right)
                    {
                        max=point[i].right;
                        idx=i;
                    }
                    i++;
                }
                if(max<=now)
                    break;
                now=point[idx].right;
                ans_idx[ans]=idx;
            }
        }
        if(flag)
        {
            cout<<endl;

        }

        if(now>=seg)
        {
            cout<<ans<<endl;
            for(int j=0;j<ans;j++)
                cout<<point[ans_idx[j]].left<<" "<<point[ans_idx[j]].right<<endl;
        }
        else
            cout<<"0"<<endl;
        flag=true;

    }
}
