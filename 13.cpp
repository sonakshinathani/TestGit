/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sun Jun 29 22:49:35 IST 2014
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
int n,a[100],key;
bool solve(){
    int left=0,right=n-1;
    while(left<=right){
        //cout << left << " " << right << endl;
        int mid = (right+left)/2;
        if(key==a[mid])
            return true;
        if(a[mid]<a[right]){
            if(key>a[mid] && key<=a[right])left=mid+1;
            else right=mid-1;
        }
        else if(a[mid]>a[right]){
            if(key<a[mid] && key<a[left]) left=mid+1;
            else right = mid-1;
        }
    }
    return false;
}
int main(){
    cin >> n;
    FOR(i,0,n) cin >> a[i];
    cin >> key;
    cout << solve() << endl;
 return 0;
}

