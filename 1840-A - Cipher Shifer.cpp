#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        string s,s1="";
        cin>>n>>s;
        for(int i=0;i<n;i++){
            char pre=s[i];
            i++;
            s1+=pre;
            while(i<n && s[i]!=pre){
                i++;
            }
        }
        cout<<s1<<endl;
    }
    return 0;
}

