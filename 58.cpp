/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sat Sep  6 05:57:57 IST 2014
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
vector<int> duplicates(int a[],int n){
    vector<int> res;
    FOR(i,0,n){
        if(a[abs(a[i])]>0){
            a[abs(a[i])]=-a[abs(a[i])];
        }
        else{
            res.push_back(abs(a[i]));
        }
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    FOR(i,0,n){
        cin >> a[i];
    }
    vector<int> res = duplicates(a,n);
    FOR(i,0,res.size()){
        cout << res[i] << endl;
    }
return 0;
}

