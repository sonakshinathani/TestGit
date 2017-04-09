/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sat Sep 20 12:35:01 IST 2014
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
bool isInterleaved(string a,string b,string c){
    if((a.size()+b.size())!=c.size()) return 0;
    int j=0,k=0,i=0;
    while(i<c.size()){
        if(c[i]==a[j]){
            j++;
            i++;
        }
        else if(c[i]==b[k]){
            k++;
            i++;
        }
        else{
            return 0;
        }
    }
    return 1;
}
int main(){
   string a,b,c;
   cin >> a >> b >> c;
   cout << isInterleaved(a,b,c) << endl;
return 0;
}

