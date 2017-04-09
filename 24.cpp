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
    ListNode *child;
};
ListNode* insert(ListNode *head,int val){
    ListNode* tmp = (ListNode *)malloc(sizeof(ListNode));
    tmp->val = val;
    tmp->next = NULL;
    tmp->child = NULL;
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
void flattenList(ListNode* head){
    ListNode* tail = head;
    while(tail->next!=NULL) tail = tail->next;
    ListNode* curr= head;
    while(curr!=tail){
        if(curr->child!=NULL){
            tail->next = curr->child;
            ListNode* tmp = curr->child;
            curr->child =NULL;
            while(tmp->next) tmp = tmp->next;
            tail = tmp;
        }
        curr = curr->next;
    }
}
int main(){
    int n;
    cin >> n;
    ListNode* head = NULL,*head1= NULL,*head2 = NULL,*head3=NULL,*head4=NULL,*head6=NULL,*head7=NULL;
  /*  FOR(i,0,n){
        int a;
        cin >> a;
        head = insert(head,a);
    }*/
    head = insert(head,11);
    head = insert(head,7);
    head = insert(head,12);
    head = insert(head,5);
    head = insert(head,10);
    traverse(head);
    cout << endl;
    head1 = insert(head1,13);
    head1 = insert(head1,20);
    head1 = insert(head1,4);
    traverse(head1);
    cout << endl;
    head2 = insert(head2,2);
    traverse(head2);
    cout << endl;
    head3 = insert(head3,6);
    head3 = insert(head3,17);
    traverse(head3);
    cout << endl;
    head->child = head1;
    head1->next->child = head2;
    head->next->next->next->child = head3;
    flattenList(head);
    traverse(head);
return 0;
}

