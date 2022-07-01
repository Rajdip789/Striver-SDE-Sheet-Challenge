int calculateMinPatforms(int at[], int dt[], int n) {
//     6
//     900 940 950 1100 1500 1800   - i
//     910  1120 1130 1900 2000     - j
    // Write your code here.
    sort(at, at+n);
    sort(dt, dt+n);
    
    int max_platfrom = 1, platfrom_count = 1;
    int i = 1, j = 0;
    
    while(i < n && j < n) {
        if(at[i] <= dt[j]) {
            platfrom_count++;
            i++;
        }
        else {
            platfrom_count--;
            j++;
        }
        max_platfrom = max(max_platfrom, platfrom_count);
    }
    return max_platfrom;
}
