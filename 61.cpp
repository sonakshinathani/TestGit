/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sat Sep 13 03:26:55 IST 2014
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
int smallMiss(int a[],int n){
    int high=n-1;
    int low=0;
    int min_res=INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]>mid){
            cout << mid << endl;
            high=mid-1;
            if(min_res>mid) min_res=mid;
        }
        else if(a[mid]==mid)low=mid+1;
    }
    return min_res;
}
int main(){
    int n,m;
    cin >> n >> m;
    int a[n];
    FOR(i,0,n){
        cin >> a[i];
    }
    cout << smallMiss(a,n) << endl;
return 0;
}

