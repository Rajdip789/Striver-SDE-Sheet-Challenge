#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> triangle(n);
    
    for(int i = 0; i < n; ++i) {
        triangle[i].resize(i+1);
        triangle[i][0] = triangle[i][i] = 1;
        for(int j = 1; j < i; ++j) {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
    }
    return triangle;
}
