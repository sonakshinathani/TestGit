/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Fri Mar 28 02:39:02 IST 2014
*/
#include<bits/stdc++.h>
using namespace std;
#define FOR(a,b,c) for(int a=b;a<c;a++)
#define sii(a,b) scanf("%d %d",&a,&b)
#define si(a) scanf("%d",&a)
#define pii(a,b) printf("%d %d\n",a,b)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,1,sizeof(a))
char lastremoved;
char *removeDuplicate(char *s,char lastremoved){
    cout << strlen(s) << endl;
//    char start = s[0];
    if(s[0]=='\0' || s[1]=='\0')
        return s;
    if(s[0]==s[1]){
        lastremoved = s[0];
        while(s[0]==s[1]){
            s++;
        }
        s++;
        return removeDuplicate(s,lastremoved);
    }
    char *result = removeDuplicate(s+1,lastremoved);
    if(result[0] && s[0]==result[0]){
        lastremoved = s[0];
        result++;
       return result;
    }
    if(result[0]=='\0' && s[0]==lastremoved){
        return result;
    }
    result--;
    result[0]=s[0];
    return result;
}
int main(){
    char s[1000];
    cin >> s;
    cout << removeDuplicate(s,lastremoved) << endl;
return 0;
}

