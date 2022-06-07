#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    int n = intervals.size();
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    
    vector<int> ds(2, 0);
    ds[0] = intervals[0][0];
    ds[1] = intervals[0][1];
    for(int i = 1; i < n; ++i) {
        if(intervals[i][0] <= ds[1]) {
            if(intervals[i][1] > ds[1]) {
                ds[1] = intervals[i][1];
            }
        }
        else {
            ans.push_back(ds);
            ds[0] = intervals[i][0];
            ds[1] = intervals[i][1];
        }
    }
    ans.push_back(ds);
    return ans;
}

