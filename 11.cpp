/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sun Jun 29 11:12:21 IST 2014
*/
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<string.h>
#include<math.h>
#include<limits.h>
using namespace std;
#define FOR(a,b,c) for(int a=b;a<c;a++)
#define sii(a,b) scanf("%d %d",&a,&b)
#define si(a) scanf("%d",&a)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,1,sizeof(a))
int solve(int n,int* a){
    int major=0,count=1;
    FOR(i,1,n){
        if(a[major]==a[i])
            count++;
        else
            count--;
        if(count==0){
            major=i;
            count=1;
        }
    }
    int cnt=0;
    FOR(i,0,n){
        if(a[major]==a[i]) cnt++;
    }
    if(cnt>(n/2))
        return a[major];
    else
        return -1;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    FOR(i,0,n) cin >> a[i];
    cout << solve(n,a) << endl;
return 0;
}

