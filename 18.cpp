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
ListNode* intersectedList(ListNode* head,ListNode* head1){
    ListNode *res=NULL,*tail;
    while(head!=NULL && head1!=NULL){
        if(head->val == head1->val){
            ListNode* tmp = (ListNode*)malloc(sizeof(ListNode));
            tmp->val = head->val;
            tmp->next = NULL;
            if(res==NULL){
                res = tmp;
                tail = tmp;
            }
            else{
                tail->next = tmp;
                tail = tail->next;
            }
            head = head->next;
            head1 = head1->next;

        }
        else if(head->val > head1->val){
            head1 = head1->next;
        }
        else head = head->next;
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    ListNode* head = NULL;
    ListNode* head1 = NULL;
    FOR(i,0,n){
        int a;
        cin >> a;
        head = insert(head,a);
    }
    int m;
    cin >> m;
    FOR(i,0,m){
        int a;
        cin >> a;
        head1 = insert(head1,a);
    }
    traverse(head);
    cout << endl;
    traverse(head1);
    cout << endl;
    ListNode* res = intersectedList(head,head1);
    traverse(res);
return 0;
}

