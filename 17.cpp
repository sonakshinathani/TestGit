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
ListNode* insertInSortedWay(ListNode* head,int val){
    if(head==NULL){
        head = (ListNode*)malloc(sizeof(ListNode));
        head->val = val;
        head->next = NULL;
        return head;
    }
    ListNode* curr=head,*tmp,*node;
    node = (ListNode*)malloc(sizeof(ListNode));
    node->val = val;
    node->next = NULL;
    while(curr->next!=NULL){
        if(curr->val<=val && val<=curr->next->val){
            tmp = curr->next;
            curr->next = node;
            node->next = tmp;
            return head;
        }
        curr=curr->next;
    }
    if(val > curr->val) curr->next=node;
    return head;

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
    ListNode* res = insertInSortedWay(head,4);
    traverse(res);
return 0;
}

