#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;



int main()
{

   int count[26]={0};



   string str;
   getline(cin,str);
    int len,flag=0,i;
    len=str.size();
    char c;
    i=0;

    while(str[i]){
    c=str[i];
    str[i]=tolower(c);
    i++;

    }

        for(i=0;i<len;i++)
            {
                if(str[i])
                {
                    count[int(str[i])-'a']++;

                }
            }


        for(i=0;i<26;i++)
        {
            if(count[i] == 0)
                {flag=1;

                }
        }


       if(flag == 0) cout<<"pangram"<<endl;
       else cout<<"not pangram"<<endl;







return 0;}
