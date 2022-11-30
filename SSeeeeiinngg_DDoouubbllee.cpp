#include<bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    BOOST

     int test;
     cin>>test;
     while(test--)
     {
         string s;
         cin>>s;
         cout<<s;
         reverse(s.begin(),s.end());
         cout<<s<<'\n';


     }


    return 0;
}


