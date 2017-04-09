/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sat Mar 29 03:26:53 IST 2014
*/
#include<bits/stdc++.h>
using namespace std;
#define FOR(a,b,c) for(int a=b;a<c;a++)
#define sii(a,b) scanf("%d %d",&a,&b)
#define si(a) scanf("%d",&a)
#define pii(a,b) printf("%d %d\n",a,b)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,1,sizeof(a))
struct data{
    int value;
    data* left;
    data* right;
};
int depth(data *root){
    if(root==NULL)
        return 0;
    return max(depth(root->left),depth(root->right))+1;
}
data* insert(data *root,int val){
    if(root==NULL){
        root = (data *)malloc(sizeof(data));
        root->value = val;
        root->left = NULL;
        root->right= NULL;
        return root;
    }
    if(root->value > val)
        root->left = insert(root->left,val);
    else if(root->value < val)
        root->right = insert(root->right,val);
    return root;
}
void printInorder(data *root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout << root->value << endl;
    printInorder(root->right);
}
void levelord(data *root,int i){
    if(root==NULL)
        return;
    if(i==1){
        cout << root->value << " ";
        return;
    }
    levelord(root->left,i-1);
    levelord(root->right,i-1);
    return;
}
void printLevelorder(data *root){
    int sz = depth(root);
    cout << sz << endl;
    FOR(i,1,sz+1){
        levelord(root,i);
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    data *root=NULL;
    FOR(i,0,n){
        int val;
        cin >> val;
        root = insert(root,val);
    }
    printInorder(root);
    printLevelorder(root);
return 0;
}

