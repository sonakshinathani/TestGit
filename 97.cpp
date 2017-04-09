/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Wed Sep 24 15:56:46 IST 2014
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
int l[100][100];
int longestPalinSub(string a,int i,int j){
    if(i==j)return (l[i][i]=1);
    else if(i+1 == j && a[i]==a[j]) return (l[i][j]=2);
    if(l[i][j]!=-1) return l[i][j];
    if(a[i]==a[j]) return l[i][j]=(longestPalinSub(a,i+1,j-1)+2);
    return l[i][j]=max(longestPalinSub(a,i+1,j),longestPalinSub(a,i,j-1));
}
int main(){
    string a;
    cin >> a;
    SET(l);
    cout << longestPalinSub(a,0,a.size()-1) << endl;
    FOR(i,0,a.size()){
        FOR(j,0,a.size()){
            cout << l[i][j] << " ";
        }
        cout << endl;
    }
    cout << l[0][a.size()-1] << endl;
return 0;
}

