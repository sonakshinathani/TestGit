/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Fri Sep 19 20:11:52 IST 2014
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
string a;
void rever(int start,int end){
    while(start<=end){
        a[start]=a[start]+a[end]-(a[end]=a[start]);
        start++;
        end--;
    }
}
void revWords(){
    int i=0;
    int start=-1,end=-1;
    while(i<a.size()){
        if(start==-1 && a[i]!=' '){
            start=i;
        }
        else if(start!=-1 && ((i+1)==a.size() || a[i+1]==' ')){
            rever(start,i);
            start=-1;
        }
        i++;
    }
    rever(0,a.size()-1);
}
int main(){
    getline(cin,a);
    revWords();
    cout << a << endl;
return 0;
}

