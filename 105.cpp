/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sat Oct 18 22:58:35 IST 2014
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
void sieve(int n){
    int a[n+1];
    CLR(a);
    FOR(i,2,n+1){
        if(a[i]==0)cout << i << endl;
        for(int j=2;(i*j)<=n;j++){
            a[j*i]=1;
        }
    }
}
int main(){
    int n;
    cin >> n;
    sieve(n);
return 0;
}

