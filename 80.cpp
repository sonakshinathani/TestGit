/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sat Sep 20 10:49:13 IST 2014
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
void nonRep(string a){
    int max_len=0,curr_len=0;
    int i=0;
    int visited[256];
    SET(visited);
    while(i<a.size()){
        int prev_idx = visited[a[i]];
        if(prev_idx==-1){
            curr_len++;
            visited[a[i]]=i;
            cout << "here1... " << a[i] << endl;
        }
        else if((i-curr_len)>prev_idx){
            curr_len++;
            visited[a[i]]=i;
            cout << "here2... " << a[i] << endl;
        }
        else{
            if(curr_len>max_len)max_len = curr_len;
            curr_len = (i-prev_idx);
           // curr_len++;
            visited[a[i]]=i;
            cout << "here3... " << a[i] << endl;
        }
        i++;
    }
            if(curr_len>max_len)max_len = curr_len;
    cout << max_len << endl;
}
int main(){
    string a;
    cin >> a;
    nonRep(a);
return 0;
}

