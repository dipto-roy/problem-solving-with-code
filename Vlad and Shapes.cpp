#include<bits/stdc++.h>
using namespace std;
const int mx = 1e6 + 123;
#define endl '\n';
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int for_count_1(string s)
{
    int cnt=0;
    for (char c:s)
    {
        if (c=='1')
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    BOOST
    int test;
    cin>>test;

    int n;
    cin>>n;



    unordered_set<int>s;
    while(test--)
    {


        int n;
        cin>>n;
        cin.ignore();

        for(int i = 0; i < n; i++)
        {
            string sh ;
            cin>>sh;

            if(sh.find('1')!= string::npos)
            {
                s.insert(for_count_1(sh));
            }
         }

    }

    if(s.size() == 1)
    {
        cout <<"SQUARE"<<endl;
    }
    else
    {
        cout <<"TRIANGLE"<<endl;
    }



    return 0;
}



