#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using z=int;
z s,e,t,x;
z main(){
z c=1900;
    cin>>t;
    x=t;
    while(t--){
        cin>>s>>e;
        //z a[c];fill(a,a+c,c);
        vector<z>a(c,c);
        z a[c];a.fill(c);
        a[e]=0;
        for(z u=e;u>=s;u--){
            z o=u;
            z &q=a[u];
            for(z v=2;v<o;v++) 
                if(o%v==0){
                    q=min(q,a[u+v]+1);
                    while(o%v==0)o/=v;
                }
            if(o!=u&&o>1)q=min(q,a[u+o]+1);
        }
        printf("Case %d: %d\n",x-t,a[s]>=c?-1:a[s]);
}}
        // input s,e
        // n = cout<<
        // z = int
        // x = return
        // f = vector<z>
        // p = factorization
        // o = d[a][b]
        // q=for loop
        // l = increment