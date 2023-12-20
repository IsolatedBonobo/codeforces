#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Define the solve function before using it
int solve(vector<int>& a);

std::vector<std::vector<int>> generate_combinations(const std::vector<int>& arr, int size, std::vector<int>& combination, int index) {
    std::vector<std::vector<int>> result;

    if (combination.size() == size) {
        result.push_back(combination);
        return result;
    }

    if (index >= arr.size()) {
        return result;
    }

    combination.push_back(arr[index]);
    std::vector<std::vector<int>> with_current = generate_combinations(arr, size, combination, index + 1);
    result.insert(result.end(), with_current.begin(), with_current.end());

    // Exclude the current element from the combination
    combination.pop_back();
    std::vector<std::vector<int>> without_current = generate_combinations(arr, size, combination, index + 1);
    result.insert(result.end(), without_current.begin(), without_current.end());

    return result;
}

int solve(vector<int>& a) {
    int k = a[1] + a[0];

    for (int i = 1; i < a.size() - 1; i++) {
        if (a[i + 1] + a[i] != k) {
            return 0;
        }
    }

    return 1;
}

int mkarungasolve(int n, vector<int>& a) {  // Corrected the function definition
    vector<vector<int>> ans;
    vector<int> temp;
    ans = generate_combinations(a, n, temp, 0);
    for (int i = 0; i < ans.size(); i++) {
        if (solve(ans[i])) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }

        int result = mkarungasolve(n, a);

        if (result == 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
