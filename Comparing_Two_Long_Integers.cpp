#include<bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    BOOST

      int a,b;
      scanf("%i %i",&a,&b);

      if(a>b)
      {
          printf(">\n");
      }
      else if(a<b)
      {
          printf("<\n");
      }
      else
      {
          printf("=\n");
      }


    return 0;
}


