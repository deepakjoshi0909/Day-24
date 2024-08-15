#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    void backtrack(string curr, int left, int right, int n, vector<string>& ans) {
        if (curr.size() == 2 * n) {
            ans.push_back(curr);
            return;
        }

        if (left < n) {
            backtrack(curr + '(', left + 1, right, n, ans);
        }
        if (right < left) {
            backtrack(curr + ')', left, right + 1, n, ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtrack("", 0, 0, n, ans);
        return ans;
    }
};
