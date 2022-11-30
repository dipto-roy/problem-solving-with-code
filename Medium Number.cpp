#include<bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    BOOST
    int t;
    scanf("%i",&t);
    while(t--)
    {
        int arr[3];
        for(int i=0; i<3; i++)
        {
            scanf("%i",&arr[i]);

        }
        sort(arr,arr+3);
        printf("%i\n",arr[1]);
    }



    return 0;
}


