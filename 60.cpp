/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Thu Sep 11 10:46:43 IST 2014
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
void sortarr(int a[],int n){
    int low=0,mid=0;
    int high = n-1;
    while(mid<=high){
        if(a[mid]==0){
            swap(a[low],a[mid]);
            low++;
            mid++;
        }
        else if(a[mid]==1) mid++;
        else if(a[mid]==2){
            swap(a[mid],a[high]);
            high--;
        }
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    FOR(i,0,n){
        cin >> a[i];
    }
    sortarr(a,n);
    FOR(i,0,n){
        cout << a[i] << " ";
    }
    cout << endl;
return 0;
}

