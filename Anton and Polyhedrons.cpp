#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    while(cin>>n)
    {
        int temp=0;
        while(n--)
        {
            string a;
            cin>>a;

            if(a == "Tetrahedron")
            {
                temp+=4;
            }
            else if(a == "Cube")
            {
                temp+=6;
            }
            else if(a == "Octahedron")
            {
                temp+=8;
            }
            else if(a == "Dodecahedron")
            {
                temp+=12;
            }
            else if(a == "Icosahedron")
            {
                temp+=20;
            }

        }
        cout<<temp<<endl;
    }

}
