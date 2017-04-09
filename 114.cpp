/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Fri Nov  7 22:03:17 IST 2014
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
struct TreeNode{
    int val;
    TreeNode* left,*right;
    TreeNode(int x) : val(x), left(NULL), right(NULL){} 
};
int n;
int A[100];
void traverse(TreeNode* root){
    if(root==NULL) return;
    traverse(root->left);
    cout << root->val << " ";
    traverse(root->right);
}
TreeNode* insert(TreeNode* root,int val){
    if(root==NULL) return new TreeNode(val);
    if(root->val < val){
        root->right=insert(root->right,val);
    }
    else if(root->val > val){
        root->left=insert(root->left,val);
    }
    return root;
}
int idx=0;
TreeNode* preorder(int start,int end){
    if(start>end || idx>n) return NULL;
    TreeNode* root = new TreeNode(A[idx]);
    idx++;
    if(start==end) return root;
    int l;
    FOR(i,start,end+1){
        if(A[i]>root->val){
            l=i-1;
            break;
        }
    }
    cout << A[idx] << " " << A[start] << endl;
        root->left = preorder(idx,l);
        root->right = preorder(l+1,end);
    return root;
}
int main(){
    cin >> n;
    TreeNode* root=NULL;
    FOR(i,0,n){
        cin >> A[i];
    }
    root = preorder(0,n-1);
    traverse(root);
    return 0;
}

