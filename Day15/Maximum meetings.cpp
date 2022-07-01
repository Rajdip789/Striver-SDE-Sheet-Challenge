#include<bits/stdc++.h>
using namespace std;

struct meeting {
    int start;
    int end;
    int pos;
};

static bool comparator(struct meeting a, meeting b) {
    if(a.end < b.end) return true;
    else if(a.end > b.end) return false;
    else if(a.pos < b.pos) return true;
    return false;
}

vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    vector<int> meeting_organized;
    int n = start.size();
    struct meeting meet[n];
    
    for(int i = 0; i < n; i++) {
        meet[i].start = start[i];
        meet[i].end = end[i];
        meet[i].pos = i+1;
    }
    
    sort(meet, meet + n, comparator);
    
    int limit = meet[0].end;
    meeting_organized.push_back(meet[0].pos);
    
    for(int i = 1; i < n; i++) {
        if(meet[i].start > limit) {
            meeting_organized.push_back(meet[i].pos);
            limit = meet[i].end;
        }
    }
    return meeting_organized;
}




