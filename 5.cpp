/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Fri Mar 28 17:55:38 IST 2014
*/
#include<bits/stdc++.h>
using namespace std;
#define FOR(a,b,c) for(int a=b;a<c;a++)
#define sii(a,b) scanf("%d %d",&a,&b)
#define si(a) scanf("%d",&a)
#define pii(a,b) printf("%d %d\n",a,b)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,1,sizeof(a))
void permute_lexicographically(string s){
    while(1){
    int flag=0;
    char smallest;
    int smallpos;
    for(int i=s.size()-2;i>=0;i--){
        smallest = s[i+1];
        smallpos = i+1;
            for(int j=i+1;j<s.size();j++){
                    if(s[j]>s[i] && smallest>s[j]){
                        smallest = s[j];
                        smallpos = j;
                    }
            }
        if(s[i]<s[i+1]){
            s[i] = s[i]+s[smallpos]-(s[smallpos]=s[i]);
            sort(s.begin()+i+1,s.end());
            cout << s << endl;
            flag=1;
            break;
        }
        if(smallest>s[i]){
            smallest = s[i];
            smallpos=i;
        }
    }
    if(flag==0)
        break;
    }
}
int main(){
    string s;
    cin >> s;
    permute_lexicographically(s);
return 0;
}

