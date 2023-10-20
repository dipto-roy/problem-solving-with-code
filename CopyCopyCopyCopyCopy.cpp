#include<bits/stdc++.h>
using namespace std;
const int mx = 1e6 + 123;
#define endl '\n';
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    BOOST
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        set<int>s;
        for(int i = 0; i < n; i++)
        {
            s.insert(arr[i]);
        }
        int sz = s.size();
        cout<<sz<<endl;
    }





    return 0;
}



