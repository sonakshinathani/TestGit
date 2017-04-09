/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sat Sep 13 05:07:09 IST 2014
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
int numofoccur(int a[],int n,int key){
    int low=0,high=n-1;
    int st,ed;
    while(low<=high){
        int mid = (low+high)/2;
        if(((mid==0) || key>a[mid-1])&& a[mid]==key){
            st=mid;
            break;
        }
        else if(a[mid]>=key)high=mid-1;
        else if(a[mid]<key)low=mid+1;
    }
    low=0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if((mid==n-1 || key<a[mid+1])&&a[mid]==key){
            ed=mid;
            break;
        }
        else if(a[mid]>key)high=mid-1;
        else if(a[mid]<=key)low=mid+1;
    }
    return (ed-st+1);
}
int main(){
    int n;
    cin >> n;
    int a[n];
    int key;
    FOR(i,0,n){
        cin >> a[i];
    }
    cin >> key;
    cout << numofoccur(a,n,key) << endl;
return 0;
}

