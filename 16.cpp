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
ListNode* reverseLinkList(ListNode* head){
    ListNode *curr=head,*prev=NULL,*tmp;
    if(head==NULL || head->next==NULL) return head;
    while(curr!=NULL){
        tmp = curr->next;
        curr->next = prev;
        prev= curr;
        curr=tmp;
    }
    return prev;
}
int compareList(ListNode* res,ListNode* head){
    while(res!=NULL && head!=NULL){
        if(res->val!=head->val) return 0;
        res = res->next;
        head = head->next;
    }
    return 1;
}
bool isPalindrome(ListNode* head){
    ListNode* slowptr=head, *fastptr=head,*prev,*midNode;
    if(head==NULL || head->next==NULL) return true;
    while(slowptr!=NULL && fastptr!=NULL && fastptr->next!=NULL){
        fastptr = fastptr->next->next;
        prev = slowptr;
        slowptr = slowptr->next;
    }
    if(slowptr!=NULL){
        midNode = slowptr;
        slowptr=slowptr->next;
    }
    prev->next=NULL;
    ListNode* res = reverseLinkList(slowptr);
    int result = compareList(res,head);
   // reverse(head);
   // if(midNode!=NULL){
        
   // }
    return result;
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
    cout << isPalindrome(head) << endl;
return 0;
}

