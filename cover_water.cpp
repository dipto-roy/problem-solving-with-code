#include<bits/stdc++.h>
using namespace std;
const int mx = 1e6 + 123;
#define endl '\n';
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define MOD 1000000007
#define forn(i, n) for (int i = 0; i < int(n); i++)
bool isPrime (ll n ) { if ( n <= 1 ) return false;ll sqrtn = sqrt(n); for (ll i = 2; i <= sqrtn; i++ ) { if ( n % i == 0 ) return false;} return true;}
int GCD(int x, int y)
{
    if(x == 0)
    {
        return y;
    }
    return GCD(y%x,x);
}

ll lcm(ll a ,ll b){
 
return (a*b)/GCD(a,b);
 
 
}


bool isPalindrome(int number) {
    int original = number; // Store the original number
    int reversed = 0;      // To store the reversed number
    while (number > 0) {
        int digit = number % 10;    // Get the last digit
        reversed = reversed * 10 + digit; // Append the digit to reversed
        number /= 10;               // Remove the last digit
    }
    return original == reversed; // Compare the reversed with the original
}

const int sz = 3125;
bool prime[sz];
void sieve()
{
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(int i = 2; i * i < sz; i++)
    {
        if(prime[i])
        {
            for(int j = i * i; j < sz; j += i)
            {
                prime[j]=false;
            }
        }
    }


}

int main()
{
    BOOST
    int tt;
    cin>>tt;

    while (tt--)
    {
       int n;
       cin>>n;
       
        string s;
        cin>>s;

        int cnt = 0;

        bool flag = true;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '.')
            {
                cnt++;
            }
            
        if(i > 0 && i < n-1)
        { 
            if(s[i - 1] == '.' && s[i] == '.' && s[i +1] == '.')
            {
                cout<<2<<endl;
                flag = false;
                break;
            }

        }
   }

   if(flag)
   {
    cout<<cnt<<endl;
   }
    }
    

    



    return 0;
}


