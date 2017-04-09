/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sat Sep  6 05:48:10 IST 2014
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
int equiIndex(int a[],int n){
    int sum=0;
    FOR(i,0,n) sum+=a[i];
    int left_sum=0;
    FOR(i,0,n){
        sum-=a[i];
        if(sum==left_sum) return i;
        left_sum+=a[i];
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    FOR(i,0,n){
        cin >> a[i];
    }
    cout << equiIndex(a,n) << endl;
return 0;
}

