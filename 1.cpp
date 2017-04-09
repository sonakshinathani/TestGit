/*
Sonakshi Nathani
IIIT-HYD
information: Rearrange a string so that all same characters become d distance away http://www.geeksforgeeks.org/rearrange-a-string-so-that-all-same-characters-become-at-least-d-distance-away/ 
#tags: 
date: Wed Mar 19 02:02:07 IST 2014
*/
#include<bits/stdc++.h>
using namespace std;
#define FOR(a,b,c) for(int a=b;a<c;a++)
#define sii(a,b) scanf("%d %d",&a,&b)
#define si(a) scanf("%d",&a)
#define pii(a,b) printf("%d %d\n",a,b)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,1,sizeof(a))
struct data{
    char c;
    int frq;
    data(char a,int b){
        c=a;
        frq=b;
    }
    data(){
    }
};
bool operator < (const data &a,const data &b){
    return a.frq < b.frq;
}
int main(){
    string a;
    cin >> a;
    int dist;
    cin >> dist;
    priority_queue<data> q;
    map<char,int> l;
    FOR(i,0,a.size()){
        l[a[i]]++;
    }
    map<char,int>::iterator it;
    for(it=l.begin();it!=l.end();it++){
        q.push(data(it->first,it->second));
    }
cout << q.top().frq << endl;
int pos=0;
    string b;
    FOR(i,0,a.size()){
        b.push_back('*');
    }
    int flag=0;
    while(!q.empty()){
        int flag=1;
        FOR(i,0,a.size()){
            if(b[i]=='*'){
                pos=i;
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout << "Impossible" << endl;
            return 0;
        
        }
        int d=0;
        char c = q.top().c;
        int fr = q.top().frq;
        q.pop();
        FOR(i,0,fr){
            cout << pos+d << endl;
          if((pos+d)<a.size() && b[pos+d]=='*'){
                b[pos+d]=c;
                d+=dist;
          }
          else{
            cout << "Impossible" << endl;
            return 0;
          }
        }
    }
    cout << b << endl;
return 0;
}

