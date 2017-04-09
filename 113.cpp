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
int main(){
    cin >> n;
    TreeNode* root=NULL;
    FOR(i,0,n){
        int a;
        cin >> a;
        root = insert(root,a);
    }
    traverse(root);
    cout << endl;
return 0;
}

