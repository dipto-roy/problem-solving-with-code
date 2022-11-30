#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        scanf("%lli %lli",&a,&b);

        if(a % b ==0)
        {
           printf("0\n");
        }

        else {
            printf("%lli\n",b-a%b);
        }
    }
}
