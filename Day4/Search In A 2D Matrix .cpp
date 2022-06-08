#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int size = n*m;
    int low = 0, mid, high = size-1;
    
    while(low <= high){
        mid = low + (high - low)/2;
        
        if (mat[mid / n][mid % n] == target)
            return true;
        else if (mat[mid / n][mid % n] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}
