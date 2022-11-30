#include<bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    ///BOOST

    int t;
    cin>>t;
    int temp = 0;
    while (t--)
    {
        int petya,vasya,tonya;

        scanf("%i %i %i",&petya,&vasya,&tonya);

        if(petya + vasya + tonya >= 2)
        {
            temp+=1;
        }



    }
     printf("%i\n",temp);

    return 0;
}


