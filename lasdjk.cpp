#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>st;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    for(auto x:st)cout<<x<<" ";
    return 0;
}