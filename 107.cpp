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



const int MAX = 1e4;

struct node{
    int maxi;
    void merge(node &n1, node& n2){
        maxi = max(n1.maxi, n2.maxi);
    }
    void split(node &n){

    }
    node(){}
};
node tree[MAX];

int A[MAX];

void init(int root, int l, int r){
    if(l == r){
        tree[root].maxi = A[l];
        return;
    }
    int mid = (l + r)/2;
    init(root*2, l, mid);
    init(root*2 + 1, mid+1, r);
    tree[root].merge(tree[root*2], tree[root*2 +1]);
}

inline node range_query(int root, int l, int r, int u, int v){
    if(u<=l && v >=r){
        return tree[root];
    }
    int mid = (l+r)/2;
    if(v <= mid) return range_query(root*2, l, mid, u, v);
    if(u > mid) return range_query(root*2+1, mid+1, r, u, v);
    node n1 = range_query(root*2, l, mid, u, v);
    node n2 = range_query(root*2+1, mid+1, r, u, v);
    node n;
    n.merge(n1, n2);
    return n;
}

inline void range_update(int root, int l, int r, int u, int v,int val){
    if(l==r){
        tree[root].maxi = val;
        return;
    }
    int mid = (r + l)/2;
    if(u <= mid) range_update(root*2, l, mid, u, v,val);
    if(v > mid) range_update(root*2+1, mid+1, r, u, v,val);
    tree[root].merge(tree[2*root], tree[2*root+1]);
}

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> A[i];
    }
    init(1,1,n);
    
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            printf("maximum between .. (%d %d) is %d\n", i,j, range_query(1,1,n,i,j).maxi);
        }
    }
    
    range_update(1,1,n,1,1,10);
    cout << (range_query(1,1,n,1,4).maxi) << endl;;
  for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            printf("maximum between .. (%d %d) is %d\n", i,j, range_query(1,1,n,i,j).maxi);
        }
    }
    

    return 0;
}
