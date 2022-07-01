int removeDuplicates(vector<int> &arr, int n) {
//     1 1 1 2 2 3 3 3
//     | |
//     1 2 3
	// Write your code here.
    int i = 0, j = 1, len = 1;
    while(j < n) {
        if(arr[i] != arr[j]) {
            arr[++i] = arr[j];
            len++;
        }
        j++;
    }
    return len;
}
