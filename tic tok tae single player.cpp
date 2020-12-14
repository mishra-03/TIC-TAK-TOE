#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define pi pair<int,int>
#define pl pair<ll,ll>
#define vpi vector<pi>
#define vpl vector<pl>
#define umi unordered_map<int,int>
#define uml unordered_map<ll,ll>
#define mp make_pair
#define mod 1000000007
#define inf 1000000000000000
#define md 998244353
#define endl "\n"
#define sgn(v) ( ( (v) < 0 ) ? -1 : ( (v) > 0 ) )


ll prime[1000000];

void
sieve ()
{
  prime[0] = 0;
  prime[1] = 0;
  for (int i = 2; i < 1000000; i++)
    prime[i] = 1;

  for (int i = 2; i * i < 1000000; i++)
    if (prime[i] == 1)
      for (int j = i * i; j < 1000000; j += i)
	prime[j] = 0;
}

bool
isPrime (ll n)
{
  if (n <= 1)
    return false;
  for (ll i = 2; i <= floor (sqrt (n)); i++)
    if (n % i == 0)
      return false;

  return true;
}

int
countdigits (int N)
{
  int count = 0;
  while (N)
    {
      count++;
      N = N / 10;
    }
  return count;
}

int c = 1;
void
solve ()
{
  int N;
  string O, I;
  cin >> N;
  cin >> I;
  cin >> O;
  char A[N][N];
  for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < N; j++)
	{
	  if (i == j)
	    {
	      A[i][j] = 'Y';
	    }
	  else if (abs (i - j) == 1)
	    {
	      if (O[i] == 'Y' && I[j] == 'Y')
		{
		  A[i][j] = 'Y';
		}
	      else
		{
		  A[i][j] = 'N';
		}
	    }
	  else
	    {
	      A[i][j] = 'N';
	    }
	}
    }
  cout << "case #" << c << ":" << endl;
  c++;
  for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < N; j++)
	{
	  cout << A[i][j];
	}
      cout << endl;
    }
}

int
main ()
{
  fastio int t;
  cin >> t;
  while (t--)
    solve ();

  return 0;
}
