/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sun Aug 10 02:35:34 IST 2014
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
struct ListNode {
    int val;
    ListNode *next;
};
ListNode* insert(ListNode *head,int val){
    ListNode* tmp = (ListNode *)malloc(sizeof(ListNode));
    tmp->val = val;
    tmp->next = NULL;
    if(head==NULL)head=tmp;
    else{
        tmp->next=head;
        head = tmp;
    }
    return head;
}
void traverse(ListNode* head){
    if(head==NULL)
        return;
    cout << head->val << " ";
    traverse(head->next);
}
void frontBackSplit(ListNode* head,ListNode** a,ListNode** b){
    ListNode* slowptr, *fastptr;
    slowptr = fastptr = head;
    int i=0;
    while(slowptr && fastptr && fastptr->next){
        if(i==0){ 
            fastptr = fastptr->next;
            i=1;
        }
        else if(i==1){
            fastptr = fastptr->next;
            slowptr = slowptr->next;
            i=0;
        }
    }
    *a = head;
    *b = slowptr->next;
    slowptr->next = NULL;
}
ListNode* sortMerge(ListNode* a, ListNode* b){
    ListNode* res = NULL;
    if(a==NULL) return b;
    if(b==NULL) return a;
    if(a->val < b->val){
        res = a;
        res->next = sortMerge(a->next,b);
    }
    else if(a->val >= b->val){
        res = b;
        res->next = sortMerge(a,b->next);
    }
    return res;
}
void mergeSort(ListNode** head){
   ListNode* a,*b;
   if(*head==NULL || (*head)->next==NULL) return;
   frontBackSplit(*head,&a,&b);
   mergeSort(&a);
   mergeSort(&b);   
   *head = sortMerge(a,b);
   return;
}
int main(){
    int n;
    cin >> n;
    ListNode* head = NULL;
    FOR(i,0,n){
        int a;
        cin >> a;
        head = insert(head,a);
    }
    traverse(head);
    cout << endl;
    mergeSort(&head);
    traverse(head);
return 0;
}

