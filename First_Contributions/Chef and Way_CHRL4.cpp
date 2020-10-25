#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

int main()
{
    const int MOD = 1000000007;
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    int *A = new int[n];
    int *dp = new int[n];
    double *log_dp = new double[n];
    for(int i=0; i<n; ++i)
    {
        cin >> A[i];
        dp[i] = A[i];
        log_dp[i] = -log(A[i]);
    }
    priority_queue< pair<double,int> > q;
    q.push(make_pair(log_dp[0], 0));
    for(int i=1, j; i<n; ++i)
    {
        j = q.top().second;
        while(i-j > k)
        {
            q.pop();
            j = q.top().second;
        }
        dp[i] = (dp[i] * 1LL * dp[j])%MOD;
        log_dp[i] += log_dp[j];
        q.push(make_pair(log_dp[i], i));
    }
    cout << dp[n-1] << endl;
    return 0;
}