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
void levelorderSpiral(TreeNode* root){
    if(root==NULL) return;
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    int flag=0;
    while(!q.empty()){
        if(q.size()==1 && q.front()==NULL) q.pop();
        TreeNode* tmp = q.front();
        q.pop();
        if(tmp==NULL){
            flag^=1;
            q.push(NULL);
            continue;
        }
        cout << tmp->val << " ";
        if(flag==0){
         if(tmp->left!=NULL)
        q.push(tmp->left);
        if(tmp->right!=NULL)
        q.push(tmp->right);
        }
        else{
          //  cout << "hello..... " << endl;
          if(tmp->right!=NULL)
        q.push(tmp->right);
        if(tmp->left!=NULL)
        q.push(tmp->left);
 
        }
   //     flag^=1;
     //   cout << flag << endl;
    }
}
void pathPrint(TreeNode* root){
    stack<TreeNode*> s;
    s.push(root);
    root=root->left;
    while(!s.empty()){
        while(root!=NULL){ 
            s.push(root);
            cout << root->val << " ";
            root=root->left;
        }
        TreeNode* t = s.top();
        if(t->right!=NULL)root=t->right;
        else s.pop();
     //   if(t->right==NULL 
    }
}
int main(){
    int n;
    cin >> n;
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
    levelorderSpiral(root);
    cout << endl;
    pathPrint(root);
    cout << endl;
return 0;
}

