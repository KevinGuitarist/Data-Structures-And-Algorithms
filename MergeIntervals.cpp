#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> MergeIntervals(vector<vector<int>>& intervals) {
    int n = intervals.size();
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());

    for (int i = 0; i < n; i++) {
        if (ans.empty() || intervals[i][0] > ans.back()[1]) {
            ans.push_back(intervals[i]);
        } else {
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
    }
    return ans; 
}

int main() {
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> merged_intervals = MergeIntervals(intervals);

    for (int i = 0; i < merged_intervals.size(); ++i) {
        cout << "[" << merged_intervals[i][0] << ", " << merged_intervals[i][1] << "] ";
    }
    cout << endl;

    return 0;
}