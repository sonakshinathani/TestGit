/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Wed Oct  1 18:30:03 IST 2014
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
#define SET(a) memset(a,-1,sizeof(a))
int L[100][100];
string s;
int rec(int i,int j){
    if(i==j) return L[i][j]=1;
    if((i+1)==j){
        if(s[i]==s[j]) return 1;
    }
    if(L[i][j]!=-1) return L[i][j];
    L[i][j-1] = rec(i,j-1);
    L[i+1][j] =rec(i+1,j);
    if(s[i]==s[j]) return L[i][j]=rec(i+1,j-1);
    return 0;
}
int main(){
    cin >> s;
    SET(L);
    cout << rec(0,s.size()-1) << endl;
    FOR(i,0,s.size()){
        FOR(j,0,s.size()){
            cout << L[i][j] << " ";
        }
        cout << endl;
    }
return 0;
}

