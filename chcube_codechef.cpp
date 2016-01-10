#include<bits/stdc++.h>
using namespace std;

int chcube(string str[])
{
    int i,j,coun=0;
    for(i=0;i<2;i++)
        {coun=0;
        for(j=2;j<6;j++)
            {

            if(str[i].compare(str[j])== 0 && j==2)
                {coun++; j=4; }

            if(str[i].compare(str[j])== 0 && j==3)
                coun++;

            if(str[i].compare(str[j])== 0 && j==4)
                {coun++; break;}

            if(str[i].compare(str[j])== 0 && j==5)
                coun++;
            }

            if(coun == 2)
                {cout<<"YES"<<endl;
                 return 0;
                }



        }

    cout<<"NO"<<endl;

return 0;}


int main()
{
    int t,i;
    cin>>t;
    string str[6];
    while(t)
        {
           for(i=0;i<6;i++)
                {
                    cin>>str[i];

                }

                chcube(str);

        t--;}
return 0;
}

