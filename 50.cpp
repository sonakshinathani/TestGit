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
void printKDistDown(TreeNode* node,int k){
    if(node==NULL && k<0) return;
    if(k==0){
        cout << node->val << " ";
        return;
    }
    printKDistDown(node->left,k-1);
    printKDistDown(node->right,k-1);

}
int printKDist(TreeNode* root,TreeNode* node,int k){
    if(root==NULL) return -1;
    if(root==node){
        printKDistDown(node,k);
        return 0;
    }
    int lval = printKDist(root->left,node,k);
    if(lval!=-1){
        if(lval+1==k){
            cout << root->val << " ";
        }
        else{
            printKDistDown(root->right,k-lval-2);
        }
        return lval+1;
    }
    int rval = printKDist(root->right,node,k);
    if(rval!=-1){
        if(rval+1==k) cout << root->val << " ";
        else printKDistDown(root->left,k-rval-2);
        return rval+1;
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->left->left->left = createNode(9);
    root->left->left->right = createNode(10);

    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    levelorder(root);
    cout << endl;
    int k;
    cin >> k;
    printKDist(root,root->left,k);
return 0;
}

