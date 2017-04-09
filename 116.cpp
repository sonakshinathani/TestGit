/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Thu Nov 13 18:34:51 IST 2014
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
struct TrieNode{
    int value;
    TrieNode* child[26];
    TrieNode(int y):value(y){
        FOR(i,0,26) child[i]=NULL;
    }
};
int n;
TrieNode* insert(TrieNode* root,string a){
    TrieNode* curr;
    if(root==NULL){
        root= new TrieNode(0);
    }
    curr=root;
    FOR(i,0,a.size()){
        curr=curr->child[a[i]-97];
        if(curr==NULL){
            curr = new TrieNode(0);
        }
    }
    curr->value=1;
    return root;
}
char p[100];
void traverse(TrieNode* root,int path){
    if(root==NULL){ 
        FOR(i,0,path){
            cout << p[i] << " ";
        }
        cout << endl;
        return;        
    }
    FOR(i,0,26){
        if(root->child[i]!=NULL)
        p[path]=97+i;
        traverse(root->child[i],path+1);
    }
}
int main(){
    cin >> n;
    TrieNode* root=NULL;
    FOR(i,0,n){
        string a;
        cin >> a;
        root=insert(root,a);
    }
    traverse(root,0);
return 0;
}
