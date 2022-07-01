int longestSubSeg(vector<int> &nums , int n, int k){
    // Write your code here.
    //7 1
    //1 0 0 1 1 0 1 
//     1
//     20
//     1 1 0 0 1 0 0 0 0 0 1 1 1 1 1 1 1 0 1 0 
//     1
    int len = 0;
    for(int left = 0, right = 0; right < n; right++) {
        if(nums[right] == 0){
            if(k>0) {
                k--;
                len=max(len, right-left+1);
            }
            else {
                while(nums[left]){
                    left++;
                }
                left++;
            }
        }
        else {
            len = max(len, right-left+1);
        }

    }
    return len;
}

