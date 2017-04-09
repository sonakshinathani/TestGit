/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Fri Sep  5 21:17:22 IST 2014
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
int isMajority(int a[],int x,int n){
    int start=0;
    int end=n-1,res=-1;
    while(start<end){
        int mid = (start+end)/2;
        if((mid==0 || a[mid-1]<x) &&(a[mid]==x)){
            break;
            res = mid;
        }
        if(x > a[mid]){
            start=mid+1;
            continue;
        }
        else{
            end = mid-1;
            continue;
        }
    }
    if(a[res+n/2]==x && (res+n/2)<=(n-1)) return 1;
    else return 0;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    FOR(i,0,n){
        cin >> a[i];
    }
    int x = (n%2==0)?a[(n/2)-1]:a[n/2];
    cout << isMajority(a,x,n) << endl;
return 0;
}

