#include<bits/stdc++.h>
using namespace std;
const int mx = 1e6 + 123;
#define endl '\n';
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    BOOST
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int>even,odd;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if(x % 2 == 0)
                even.push_back(x);
            else
            {
                odd.push_back(x);
            }
        }
        int ans1 = 0;
        int z = 1;
        for(int i = 0; i < even.size(); i++)
        {
            ans1 += n - z;
            z++;
        }
        int ans2 = 0;
        //sort(odd.begin(),odd.end());
        for(int i = 0; i < odd.size(); i++)
        {
            for(int j = i+1; j < odd.size(); j++)
            {
                if(__gcd(odd[i],odd[j])>1)
                {
                    ans2++;
                }
            }
        }
        cout<<(ans1 + ans2)<<endl;
    }




    return 0;
}


