#define Interval pair<int,int>
vector<Interval> mergeIntervals(vector<Interval> &intervals)
{
    if (intervals.empty())
        return {};

    // Sort intervals by start time
    sort(intervals.begin(), intervals.end());

    vector<Interval> result;
    result.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++)
    {
        auto &last = result.back();
        if (intervals[i].first <= last.second + 1)
        {                                                        // Overlapping or adjacent
            last.second = max(last.second, intervals[i].second); // Merge
        }
        else
        {
            result.push_back(intervals[i]); // Add new interval
        }
    }

    return result;
}
vector<Interval> intervalIntersection(vector<Interval> &set1, vector<Interval> &set2)
{
    vector<Interval> result;
    int i = 0, j = 0;
    sort(set1.begin(), set1.end());
    sort(set2.begin(), set2.end());
    while (i < set1.size() && j < set2.size())
    {
        int start = max(set1[i].first, set2[j].first);
        int end = min(set1[i].second, set2[j].second);

        if (start <= end)
        {
            result.push_back({start, end});
        }
        if (set1[i].second < set2[j].second)
            i++;
        else
            j++;
    }
    return result;
}