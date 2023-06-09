#include<bits/stdc++.h>
using namespace std;
string s[4][1010];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        map<string,int> mp;
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                cin>>s[i][j];
                mp[s[i][j]]++;
            }
        }
        for(int i=0;i<3;i++){
            int pont=0;
            for(int j=0;j<n;j++){
                if(mp[s[i][j]]==2){
                    pont+=1;
                }
                if(mp[s[i][j]]==1){
                    pont+=3;
                }
            }
            cout<<pont<<" ";
        }
        cout<<endl;
    }
    return 0;
}

