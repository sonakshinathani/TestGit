/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sat Sep 20 09:53:34 IST 2014
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
string text,ptt;
int lps[100];
void preprocess(){
    int i=1;
    int len=0;
    lps[0]=0;
    while(i<ptt.size()){
        if(ptt[i]==ptt[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len!=0){
                len = lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
}

void kmp(){
    preprocess();
    int i=0,j=0;
    cout << text << " " << ptt << endl;
    while(i<text.size()){
        if(ptt[j]==text[i]){
            j++;
            i++;
        }
        if(j==ptt.size()){
            cout << "ptt found at " << (i-j) << endl;
            j=lps[j-1];
        }
        else if(ptt[j]!=text[i]){
            if(j!=0) j =lps[j-1];
            else i++;
        }
    }
}
int main(){
    cin >> text;
    cin >> ptt;

    cout << text << " " << ptt << endl;
    kmp();
return 0;
}

