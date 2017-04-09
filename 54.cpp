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
TreeNode* searchBST(TreeNode* root,int val){
    if(root==NULL) return NULL;
    if(root->val == val) return root;
    if(val < root->val ) return searchBST(root->left,val);
    else if(val>root->val) return searchBST(root->right,val);
}
TreeNode* insertUtil(TreeNode* root,TreeNode* tmp){
    if(root==NULL) return tmp;
    if(tmp->val < root->val)
        root->left = insertUtil(root->left,tmp);
    else
        root->right = insertUtil(root->right,tmp);
    return root;
}
TreeNode* insertBST(TreeNode* root,int val){
    TreeNode* tmp = createNode(val);
    if(root==NULL) return tmp;
    return insertUtil(root,tmp);
}
TreeNode* delBST(TreeNode* root,int val){
    if(root==NULL) return NULL;
    if(val == root->val){
        if(root->right && root->left){
            TreeNode* tmp = root->left;
            TreeNode* prev = root;
            while(tmp->right!=NULL){
                prev=tmp;
                tmp=tmp->right;
            }
            cout << prev->val << endl;
            root->val = tmp->val;
           // free(tmp);
            cout << tmp->val << endl;
            tmp=NULL;
            return root;

        }
        else if(root->right){
          /*  root->val = root->right->val;
            free(root->right);
            root->right=NULL;*/
            return root->right;
        }
        else if(root->left){
         /*   root->val = root->left->val;
            free(root->left);
            root->left=NULL;*/
            return root->left;
        }
        return root;
    }
    else if(val<root->val){
        root->left = delBST(root->left,val);
    }
    else if(val > root->val){
        root->right = delBST(root->right,val);
    }
    return root;
}
TreeNode* minvalue(TreeNode* root){
    while(root!=NULL){
        root = root->left;
    }
    return root;
}
TreeNode* inOrderSucc(TreeNode* root,TreeNode* tmp){
    if(root==NULL) return NULL;
    TreeNode* succ=NULL;
    if(tmp->right!=NULL){
        succ = minvalue(tmp->right);
    }
    else{

        while(root!=NULL){
            if(tmp->val < root->val){
                succ = root;
                root = root->left;
            }
            else if(tmp->val > root->val){
                root = root->right;
            }
            else break;
        }
    }
    return succ;
}
int main(){
    int n;
    cin >> n;
    TreeNode* root = createNode(8);
    root->left = createNode(3);
    root->right = createNode(10);
    root->left->left = createNode(1);
    root->left->right = createNode(6);
    root->right->right = createNode(14);
    root->right->left = createNode(13);
    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    levelorder(root);
    cout << endl;
    TreeNode* res = inOrderSucc(root,root->left->right);
    cout << res->val << endl;
    return 0;
}

