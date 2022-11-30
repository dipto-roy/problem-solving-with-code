#include<bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    BOOST

    int t;
    long long n,a,b;
    scanf("%i",&t);

    while(t--)
    {

        scanf("%lli %lli %lli",&n,&a,&b);

        if(a==n&&b==n)
        {
            printf("YES\n");

        }
        else if(a+b<n-1)
        {
            printf("YES\n");

        }
        else
        {
            printf("NO\n");
        }
    }


    return 0;
}


