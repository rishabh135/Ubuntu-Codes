#include <iostream>
#include<stdlib.h>
using namespace std;
struct node{
int key;
int identity;
node* next=NULL;
};
struct nod_arr2{
node* ptr;
int sizee;
};
node*arr1[10000];
nod_arr2 arr2[10000];
node arr[10000];
int func_size(int a){
int k;
k=arr1[a-1]->identity;
return arr2[k-1].sizee;
}

int func_set(int a){
return arr1[a-1]->identity;
}
node* head(int x){
    int k;
    k=arr1[x-1]->identity;
    return arr2[k-1].ptr;
}
node* tail(int x){
    node* p=arr1[x-1];
    while(p->next!=NULL){
        p=p->next;
    }
    return p;
}
void func_union(int a,int b){
                int k1=func_set(a);
                int k2=func_set(b);
        if (k1==k2) return;

        if(func_size(a)==func_size(b)) {

            if(k1>k2) {
            tail(a)->next=head(b);
            arr2[k1-1].sizee=arr2[k2-1].sizee+arr2[k1-1].sizee;
            node* r=arr2[k2-1].ptr;
            while(r!=NULL){
                                r->identity=k1;
                                r=r->next;
            }
            arr2[k2-1].sizee=0;
            arr2[k2-1].ptr=NULL;

            }
            else {
            tail(b)->next=head(a);
            arr2[k2-1].sizee=arr2[k1-1].sizee+arr2[k2-1].sizee;
            node* r=arr2[k1-1].ptr;
            while(r!=NULL){
                                r->identity=k2;
                                r=r->next;
            }
            arr2[k1-1].sizee=0;
            arr2[k1-1].ptr=NULL;
            }
    }
    else {
        if(func_size(a)>func_size(b)) {
           tail(a)->next=head(b);
            arr2[k1-1].sizee=arr2[k2-1].sizee+arr2[k1-1].sizee;
            node* r=arr2[k2-1].ptr;
            while(r!=NULL){
                                r->identity=k1;
                                r=r->next;
            }
            arr2[k2-1].sizee=0;
            arr2[k2-1].ptr=NULL;
        }
        else {
            tail(b)->next=head(a);
            arr2[k2-1].sizee=arr2[k1-1].sizee+arr2[k2-1].sizee;
            node* r=arr2[k1-1].ptr;
            while(r!=NULL){
                                r->identity=k2;
                                r=r->next;
            }
            arr2[k1-1].sizee=0;
            arr2[k1-1].ptr=NULL;
        }
    }
return;
}

int main(){
int n,m,i,a,b;
char oper;
cin>>n;

for(i=0;i<n;i++){
    arr[i].key=i+1;
    arr[i].identity=i+1;
    arr1[i]=&(arr[i]);
    arr2[i].ptr=&arr[i];
    arr2[i].sizee=1;
}
cin>>m;


for(i=1;i<=m;i++){
    cin>>oper;
    if(oper=='U') {
        cin>>a;
        cin>>b;
        func_union(a,b);
    }
    else if(oper=='Z'){
    cin>>a;
    cout<<func_size(a)<<"\n";
    }
    else {
            cin>>a;
            cout<<func_set(a)<<"\n";
    }
}
return 0;
}
