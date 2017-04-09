/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Fri Sep 19 19:45:11 IST 2014
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
struct data{
    int pos;
    int rep;
};
void nonRep(string a){
    data count[256];
    int max_val=0,posi=INT_MAX;
    FOR(i,0,256)count[i].rep=0;
    FOR(i,0,a.size()){
        count[a[i]].rep++;
        if(count[a[i]].rep==1)
            count[a[i]].pos=i;
    }
    FOR(i,0,256){
        if(count[a[i]].rep==1 && posi>i) posi=i;
    }
    cout << a[posi] << endl;
}
int main(){
    string a;
    cin >> a;
    nonRep(a);
return 0;
}

