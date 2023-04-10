#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    stack<int>st;
    st.push(0);
    for(int i=1;i<n;i++)
    {
        while(!st.empty()&&ar[i]>ar[st.top()])
        {
            int p=st.top();
            ar[p]=ar[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        int p=st.top();
        ar[p]=0;
        st.pop();
    }
    for(int i=0;i<n;i++)cout<<ar[i]<<" ";
}
int main()
{
    solve();
}