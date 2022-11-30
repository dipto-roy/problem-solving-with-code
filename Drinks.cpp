#include<bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    BOOST
    int t;
    double ans=0.0,sum=0.0;
    scanf("%i",&t);
    for(int i=0; i<t; i++)
    {
        int a[105];
        scanf("%i",&a[i]);

        sum+=a[i];

    }
    ans=sum/t;
    printf("%.12lf\n",ans);




    return 0;
}


