#include<bits/stdc++.h>
using namespace std;

int dp[101][101];

int main()
{
  string str1,str2;
  cin >> str1 >> str2;
  int n = str1.length();
  int m = str2.length();

  for (int i = 0; i <= n; ++i)
  {
    dp[i][0] = i;
  }
  for (int i = 0; i <= m; ++i)
  {
    dp[0][i] = i;
  }
  for (int j = 1; j <=m; j++)
  {
    for (int i = 1; i <=n; i++)
    {
      if (str1[i-1] == str2[j-1])
      {
        dp[i][j] = min({dp[i][j - 1] + 1, dp[i - 1][j] + 1, dp[i - 1][j - 1]});
      }
      else
      {
        dp[i][j] = min({dp[i][j - 1] + 1, dp[i - 1][j] + 1, dp[i - 1][j - 1] + 1});
      }
    }
  }

  cout << dp[n][m] << endl;
  return 0;
}
