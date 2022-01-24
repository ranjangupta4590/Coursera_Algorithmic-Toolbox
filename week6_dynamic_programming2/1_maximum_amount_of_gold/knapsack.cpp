#include <bits/stdc++.h>
using namespace std;

int dp[100001][301];

int main()
{
  int n, W;
  cin >> W >> n;
  vector<int> w(n + 1);
  for (int i = 0; i < n; i++)
  {
    cin >> w[i];
  }
  for (int i = 0; i < W + 1; i++)
  {
    for (int j = 0; j < n + 1; j++)
    {
      if (i == 0 || j == 0)
      {
        dp[i][j] == 0;
      }
      else if (w[j - 1] <= i)
      {
        dp[i][j] = max(w[j - 1] + dp[i - w[j - 1]][j - 1], dp[i][j - 1]);
      }
      else
      {
        dp[i][j] = dp[i][j - 1];
      }
    }
  }
  // for (int i = 0; i <W+1; i++)
  // {
  //   for (int j = 0; j <n+1; j++)
  //   {
  //     cout<<dp[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }
  // cout<<endl;
  cout << dp[W][n] << endl;

  return 0;
}
