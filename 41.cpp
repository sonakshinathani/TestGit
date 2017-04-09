/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Mon Aug 25 17:24:07 IST 2014
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
#include<queue>
using namespace std;
#define FOR(a,b,c) for(int a=b;a<c;a++)
#define sii(a,b) scanf("%d %d",&a,&b)
#define si(a) scanf("%d",&a)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,1,sizeof(a))
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
TreeNode* createNode(int x){
    TreeNode* tmp = (TreeNode*)malloc(sizeof(TreeNode));
    tmp->val = x;
    tmp->right = tmp->left = NULL;
    return tmp;
}
void preorder(TreeNode* root){
    if(root==NULL) return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
    return ;
}
void postorder(TreeNode* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
    return;
}
void inorder(TreeNode* root){
    if(root==NULL) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
    return;
}
void levelorder(TreeNode* root){
    if(root==NULL) return;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* tmp = q.front();
        q.pop();
        cout << tmp->val << " ";
        if(tmp->left!=NULL)
        q.push(tmp->left);
        if(tmp->right!=NULL)
        q.push(tmp->right);
    }
    return;
}
int preidx=0;
int searchInorder(vector<int>in,int start,int end,int val){
    FOR(i,start,end+1){
        if(in[i]==val) return i;
    }
}
TreeNode* constructTree(vector<int> pre,vector<int> in,int start,int end){
    //cout << start << " " << end << endl;
    if(start>end) return NULL;
    TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
    root->val = pre[preidx++];
    root->left = NULL;
    root->right=NULL;
    if(start==end) return root;
   // cout << root->val << endl;
    int idx = searchInorder(in,start,end,root->val);
   // cout << idx  << "     " << in[idx]<< endl;
    root->left = constructTree(pre,in,start,idx-1);
    root->right = constructTree(pre,in,idx+1,end);
    return root;
}
int main(){
    TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    levelorder(root);
    cout << endl;
    vector<int> pre,in;
    int n;
    cin >> n;
    FOR(i,0,n){
        int a;
        cin >> a;
        pre.push_back(a);
    }
    FOR(i,0,n){
        int a;
        cin >> a;
        in.push_back(a);
    }
    int val = in.size();
    cout << val << endl;
    TreeNode* r1 = constructTree(pre,in,0,val-1);
    levelorder(r1);
    cout << endl;
return 0;
}

