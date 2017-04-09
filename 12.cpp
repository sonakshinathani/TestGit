/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sun Jun 29 22:05:21 IST 2014
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
int main(){
    int n;
    cin >> n;
    int a[n],val=0,res=0;
    FOR(i,0,n){
        cin >> a[i];
        res=res^(i+1);
        val=val^a[i];
    }
    res^=(n+1);
    cout << (res^val) << endl;

return 0;
}

