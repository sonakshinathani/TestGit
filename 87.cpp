/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Mon Sep 22 16:44:49 IST 2014
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
int maxcross(int a[],int low,int mid,int high){
    int sum=0,l_sum=INT_MIN;
    for(int i=mid;i>=low;i--){
        sum+=a[i];
        if(sum>l_sum) l_sum = sum;
    }
    sum=0;
    int r_sum = INT_MIN;
    FOR(i,mid+1,high+1){
        sum+=a[i];
        if(sum>r_sum) r_sum = sum;
    }
    return l_sum + r_sum;
}
int maxi(int l,int x,int y,int z){
    return max(l,max(max(x,y),z));
}
int maxsubarr(int a[],int low,int high){
    if(low==high) return a[low];
    int mid = (low+high)/2;
    int tmp = maxi(0,maxsubarr(a,low,mid),maxsubarr(a,mid+1,high),maxcross(a,low,mid,high));
    cout  << tmp << endl;

}
int main(){
    int n;
    cin >> n;
    int a[n];
    FOR(i,0,n) cin >> a[i];
    cout << maxsubarr(a,0,n-1) << endl;
return 0;
}

