#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int n = s.size();
    int hash[256]={0};
    for(int i=0; i<n; i++){
        hash[s[i]]++;
    }

    char q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
    return 0;
}