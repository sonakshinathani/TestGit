/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sat Sep  6 06:09:33 IST 2014
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
pair<int,int> unSortedSubarr(int a[],int n){
    int curr_max=0,idx_invalid=-1;
    FOR(i,0,n){
        if(curr_max<a[i]){ 
            curr_max = a[i];
            continue;
        
        }
        else {
            idx_invalid = i;
        }
    }
    int curr_min=INT_MAX,idx_invalid1=-1;
    for(int i=n-1;i>=0;i--){
        if(curr_min>a[i]){
            curr_min = a[i];
            continue;
        }
        else{
            idx_invalid1 = i;
        }
    }
    pair<int,int> res = make_pair(idx_invalid,idx_invalid1);
    cout << idx_invalid << endl;
    return res;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    FOR(i,0,n){
        cin >> a[i];
    }
    pair<int,int> res = unSortedSubarr(a,n);
    cout << res.first << " " << res.second << endl;
return 0;
}

