/*
Sonakshi Nathani
IIIT-HYD
information: see the break in the inner loop of calculating jump //imp it is 
#tags: 
date: Tue Sep 23 16:50:06 IST 2014
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
int a[100];
int n;
int minJumps(){
    int jump[n];
    jump[0]=0;
    cout << jump[0] << endl;
    FOR(i,1,n){
        jump[i]=INT_MAX;
        FOR(j,0,i){
            if((a[j]+j)>=i && jump[j]!=INT_MAX && jump[i]>(jump[j]+1)){
                jump[i] = jump[j]+1;
                break;
            }
        }
    }
    FOR(i,0,n) cout << jump[i] << " ";
    cout << endl;
    return jump[n-1];
}
int main(){
    cin >> n;
    FOR(i,0,n) cin >> a[i];
    cout << minJumps() << endl;
return 0;
}

