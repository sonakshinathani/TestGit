/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sat Jun 28 15:12:20 IST 2014
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
    int a[n];
    FOR(i,0,n){
        cin >> a[i];
    }
    sort(a,a+n);
    FOR(i,0,n){
        if((n-i)<a[i] && i!=0){
            cout << a[i-1] << endl;
            return 0;
        }
        else if((n-i)<a[i] && i==0){
            cout << "-1" << endl;
            return 0;
        }
    }
return 0;
}

