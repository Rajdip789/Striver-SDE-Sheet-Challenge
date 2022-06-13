#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
    int N = m + n - 2;
    int r = m - 1;
    int res = 1;
    
    for(int i = 1; i <= r; i++) {
        res = res * (N - i + 1)/ i;
    }
    return res;
}
