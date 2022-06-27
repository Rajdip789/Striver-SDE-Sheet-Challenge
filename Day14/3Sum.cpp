#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>nums, int n, int target) {
	// Write your code here.
    vector<vector<int>> res;

    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++) {
        int remainTarget = target - nums[i];
        int front = i + 1, back = n - 1;

        while(front < back) {
            int two_sum = nums[front] + nums[back];

            if(two_sum < remainTarget) {
                front++;
            }
            else if(two_sum > remainTarget) {
                back--;
            }
            else {
                vector<int> tuple(3,0);
                tuple[0] = nums[i];
                tuple[1] = nums[front];
                tuple[2] = nums[back];
                res.push_back(tuple);

                while(front < back && nums[front] == tuple[1]) ++front;
                while(front < back && nums[back] == tuple[2]) --back;
            }
        }
        while(i + 1 < n && nums[i+1] == nums[i]) ++i;
    }

    return res;
}
