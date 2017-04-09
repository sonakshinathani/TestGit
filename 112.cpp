/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Wed Nov  5 16:20:06 IST 2014
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
vector<int> A;
int parent(int idx){
    if(idx==0) return -1;
    return ((idx-1)/2);
}
void heapifyUp(int n){
    int idx = parent(n);
    if(idx!=-1){
        if(A[parent(n)]>A[n]){
            A[n]=A[parent(n)]+A[n]-(A[parent(n)]=A[n]);
            heapifyUp(parent(n));
        }
    }
}
void insert(int val){
    cout << "here... " << endl;
    A.push_back(val);
    heapifyUp(A.size()-1);
}
int left(int n){
    int val = 2*n+1;
    if(val>=A.size()) return -1;
    return val;
}
int right(int n){
    int val = 2*n+2;
    if(val>=A.size()) return -1;
    return val;
}
void heapifyDown(int n){
    int l = left(n);
    int r = right(n);
    if(l>=0 && r>0 && A[l]>A[r]){
        l=r;    
    }
    if(l>0){
        A[l]=A[n]+A[l]-(A[n]=A[l]);
        heapifyDown(l);
    }
    
}
void deleteMin(){
    A[0]=A[A.size()-1];
    A.pop_back();
    heapifyDown(0);
}
int main(){
    int n;
    insert(5);
    insert(10);
    insert(4);
    insert(3);
    insert(1);
    insert(6);
    FOR(i,0,A.size()){
        cout << A[i] << " ";
    }
    cout << endl;
    deleteMin();    
    FOR(i,0,A.size()){
        cout << A[i] << " ";
    }
    cout << endl;
return 0;
}

