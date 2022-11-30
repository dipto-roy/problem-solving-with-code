#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int flag=0;
    scanf("%i",&x);

    for(int i=2; i<x; i++)
    {
        if(x % i==0)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }



}
