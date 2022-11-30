#include<bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    BOOST
    int t;
    int x,y,z,sumx=0,sumy=0,sumz=0;
    scanf("%i",&t);
    while(t--)
    {
        scanf("%i %i %i",&x,&y,&z);
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    if(sumx==0 && sumy==0 && sumz==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }



    return 0;
}


