#include <bits/stdc++.h>
using namespace std;

int n;
const int N = 1e5 + 1;
int d[N] = {0};
int main()
{
  cin >> n;
  vector<int> v(n);
  for (auto &i : v)
  {
    cin >> i;
  }
  for (int i = 1; i < n; ++i)
  {
    if (v[i - 1] > v[i])
    {
      d[i] = d[i - 1] + 1;
    }
    else
    {
      d[i] = d[i - 1];
    }
  }
  cout << d[n - 1];
  return 0;
}