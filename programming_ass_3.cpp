
#include <iostream>
#include<set>
#include<cstdio>

using namespace std;


struct node
{
    int data;
    int identity;
    struct node* next = NULL;
};

struct nod2{
node* p;
int s;
};


node a[100000];
node* a1[100000];

nod2 a2[100000];



int size_of_set(int i)
{
    int tmp,tmp2=0;
    tmp=a1[i-1]->identity;



    tmp2=a2[tmp-1].s;

    return tmp2;
}

int identity_of_set(int i){

    int tmp=0;
    tmp=a1[i-1]->identity;
        return tmp;

}

node* head(int i)
{
    int tmp;

    tmp=a1[i-1]->identity;

    return a2[tmp-1].p;
}

node* tail(int i)
{
    node * tmp=a1[i-1];;

 while(tmp->next != NULL){
        tmp=tmp->next;
    }


    return tmp;
}



int union_of_sets(int x,int y){

    int id1,id2,size_1,size_2=0;

    id1=identity_of_set(x);
    id2=identity_of_set(y);

    if(id1==id2)
        return 0;

    else
    {

        size_1=size_of_set(x);
        size_2=size_of_set(y);

        if((size_1==size_2 && id1 > id2) || (size_1 > size_2) )
        {


            tail(x)->next= head(y);
            a2[id1-1].s+=a2[id2-1].s;

            node * tmp=a2[id2-1].p;

            while (tmp != NULL)
            {
                tmp->identity=id1;
                tmp=tmp->next;
            }

            a2[id2-1].s=0;
            a2[id2-1].p=NULL;
        }


    if((size_1==size_2 && id1 < id2) || (size_1 < size_2) )
        {



            tail(y)->next=head(x);
            a2[id2-1].s+=a2[id1-1].s;


            node * tmp=a2[id1-1].p;

            while (tmp != NULL)
            {
                tmp->identity=id2;
                tmp=tmp->next;
            }

            a2[id1-1].s=0;
            a2[id1-1].p=NULL;
        }


    }
return 0;
}




int main()
{
 int n,k,i;
cin>>n;
cin>>k;
char c;




for(i=0;i<n;i++)
{
    a[i].data=i+1;
    a[i].identity=i+1;

a2[i].p= &a[i];
a2[i].s=1;
a1[i]= &a[i];

}


while(k)
    {
        cin>>c;
        int x,y=0;
        if(c == 'U')
            {
                cin>>x>>y;
                union_of_sets(x,y);

            }
       if(c == 'Z')
            {
                cin>>x;
                cout<<size_of_set(x)<<endl;

            }

        if(c == 'S')
            {
                cin>>x;
                cout<<identity_of_set(x)<<endl;

            }

    k--;
    }

return 0;}
