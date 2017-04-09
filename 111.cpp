/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Tue Nov  4 18:55:22 IST 2014
*/
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
#define FOR(a,b,c) for(int a=b;a<c;a++)
#define sii(a,b) scanf("%d %d",&a,&b)
#define si(a) scanf("%d",&a)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,1,sizeof(a))
struct node{
    int val;
    node* next,*prev;
};
node* insert(node* head,int val){
    node* tmp = (node*)malloc(sizeof(node));
    tmp->val= val;
    tmp->next=NULL;
    tmp->prev=NULL;
    if(head==NULL){
        head=tmp;
        return head;
    }
    tmp->next=head;
    head->prev=tmp;
    head=tmp;
    return head;
}
void traverse(node* head){
    node* curr =head;
    node* prv=NULL;
    while(curr!=NULL){
        cout << curr->val << " ";
        prv=curr;
        curr=curr->next;
    }
    cout << endl;
    while(prv!=NULL){
        cout << prv->val << " ";
        prv=prv->prev;
    }
    cout << endl;
}
node* reverse(node* head){
    node* curr=head;
    node* prv = NULL;
    while(curr!=NULL){
        node* tmp = curr->next;
        curr->next = prv;
        curr->prev = tmp;
        prv = curr;
        curr = tmp;
    }
    return prv;

}
int main(){
    node* head=NULL;
    int n;
    cin >> n;
    FOR(i,0,n){
        int a;
        cin >> a;
        head = insert(head,a);
    }
    traverse(head);
    node* res = reverse(head);
    traverse(res);
return 0;
}

