#ifndef INSERTINTERVAL_HPP_INCLUDED
#define INSERTINTERVAL_HPP_INCLUDED
#include <vector>
using namespace std;
/**
 * Definition for an interval. */
struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

class Solution {
public:
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        vector<Interval>::iterator it = intervals.begin();
        while(it != internal.end())
        {
            if(newInterval.end < it->start)
            ;
        }
    }
};

#endif // INSERTINTERVAL_HPP_INCLUDED