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
ListNode* reverseK(ListNode *head,int k){
  //  if(HasKnodes(head)==0) return head;
    ListNode* curr = head;
    ListNode* prev = NULL;
    ListNode* tmp = NULL;
    int i=0;
    while(curr!=NULL && i<k){
        tmp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = tmp;
        i++;
    }
    if(tmp!=NULL) head->next = reverseK(tmp,k);
    return prev;
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
    int k;
    cin >> k;
    ListNode* res = reverseK(head,k);
    traverse(res);
return 0;
}

