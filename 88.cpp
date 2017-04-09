/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Tue Sep 23 09:56:05 IST 2014
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
int mini(int a,int b,int c){
    return min(a,min(b,c));
}
int nthUglyNo(int n){
    int i2=0,i3=0,i5=0;
    int ugly[n];
    ugly[0]=1;
    int next_ugly_no = 1;
    FOR(i,1,n){
        next_ugly_no = mini(ugly[i2]*2,ugly[i3]*3,ugly[i5]*5);
        if(next_ugly_no == ugly[i2]*2)i2++;
        if(next_ugly_no == ugly[i3]*3)i3++;
        if(next_ugly_no == ugly[i5]*5)i5++;
        ugly[i]=next_ugly_no;
    }
    return next_ugly_no;
}
int main(){
    cout << nthUglyNo(5) << endl;
return 0;
}

