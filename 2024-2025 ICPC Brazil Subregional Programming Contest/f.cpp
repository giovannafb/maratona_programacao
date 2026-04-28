#include<bits/stdc++.h>

using namespace std;

int fibo[45];

void fibonacci (int n)
{
  for (int i = 2; i <= n + 1; i++) fibo[i] = fibo[i-1] + fibo[i-2];
}

int main()
{
  int n;
  cin >> n;
  fibo[0] = 0;
  fibo[1] = 1;
  fibonacci(n);
  cout << fibo[n+1] << endl;
}

