#include <iostream>
#include <vector>
using namespace std;

bool solve(long long n, long long k, long long x, long long sum) {
    if (k == 0 && sum == x) {
        return true;
    }
    if (k < 0 || n < 1) {
        return false;
    }
    bool includeN = solve(n - 1, k - 1, x, sum + n);
    bool excludeN = solve(n - 1, k, x, sum);
    return includeN || excludeN;
}

int main() {
    int t;
    cin >> t;

    vector<string> ans;

    for (int i = 0; i < t; i++) {
        long long n, k, x;
        cin >> n >> k >> x;

        if (solve(n, k, x, 0)) {
            ans.push_back("YES");
        } else {
            ans.push_back("NO");
        }
    }

    for (int i = 0; i < t; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}