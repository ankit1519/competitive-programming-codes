#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t>0){
    for(int i=0;i<n;i++){
        if(s[i]=='B' && s[i+1]=='G'){
            int temp=s[i];
            s[i]=s[i+1];
            s[i+1]=temp;
            i++;
        }
    }
    t--;
    }
    cout<<s;
}