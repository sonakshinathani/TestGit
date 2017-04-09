/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Wed Nov 12 20:53:49 IST 2014
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
int n;
int A[100];
int B[100];
int median(){
    int s1,e1,s2,e2;
    s1=0;e1=n-1;s2=0;e2=n-1;
    while(e1-s1>1 || e2-s2>1){
    cout << A[s1] << " " << A[e1] << " " << B[s2] <<  " " << B[e2] << endl;
        int m1 = (s1+e1)/2;
        int m2 = (s2+e2)/2;
        if(A[m1]>B[m2]){
            if(e2-s2>1)s2=m2;
            if(e1-s1>1)e1=m1;
        }
        else if(A[m1]<=B[m2]){
            if(e1-s1>1)s1=m1;
            if(e2-s2>1)e2=m2;
        }
    }
    cout << A[s1] << " " << A[e1] << " " << B[s2] <<  " " << B[e2] << endl;
    //cout << max(A[s1],B[s2]) << endl;
    //cout << min(A[1],B[s2]) << endl;
    int val = (max(A[s1],B[s2])+min(A[e1],B[e2]))/2;
    return val;
}
int main(){
    cin >> n;
    FOR(i,0,n){
        cin >> A[i];
    }
    FOR(i,0,n){
        cin >> B[i];
    }
    cout << median() <<endl;
return 0;
}

