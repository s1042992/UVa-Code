#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int first[3],second[3],third[3],color[6],total;
    //color[0]='BGC',color[1]='BCG',color[2]='GCB',color[3]='GBC',color[4]='CBG',color[5]='CGB'
    while(cin>>first[0]>>first[1]>>first[2]>>second[0]>>second[1]>>second[2]>>third[0]>>third[1]>>third[2])
    {
        total=first[0]+first[1]+first[2]+second[0]+second[1]+second[2]+third[0]+third[1]+third[2];
        int min_step=total,col;
        //總步數-Brown,Green,Clear各不動的數量

        //color[0]='BCG'
        color[0]=total-first[0]-second[2]-third[1];
        //color[1]='BGC'
        color[1]=total-first[0]-second[1]-third[2];
        //color[2]='CBG'
        color[2]=total-first[2]-second[0]-third[1];
        //color[2]='CGB'
        color[3]=total-first[2]-second[1]-third[0];
        //color[4]='GBC'
        color[4]=total-first[1]-second[0]-third[2];
        //color[5]='GCB'
        color[5]=total-first[1]-second[2]-third[0];


        for(int i=0;i<6;i++)
        {
            if(color[i]<min_step)
            {
                min_step=color[i];
                col=i;
            }
        }
        if(col==0)
            cout<<"BCG "<<min_step<<endl;
        else if(col==1)
            cout<<"BGC "<<min_step<<endl;
        else if(col==2)
            cout<<"CBG "<<min_step<<endl;
        else if(col==3)
            cout<<"CGB "<<min_step<<endl;
        else if(col==4)
            cout<<"GBC "<<min_step<<endl;
        else if(col==5)
            cout<<"GCB "<<min_step<<endl;


    }
}
