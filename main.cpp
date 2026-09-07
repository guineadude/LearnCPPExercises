
#include <vector>
using namespace std;
#include <iostream>
#include <numeric>
#include <unordered_set>

class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> set1{nums1.begin(), nums1.end()};
        unordered_set<int> set2{nums2.begin(), nums2.end()};

        vector<int> diff1{};
        vector<int> diff2{};

        diff1.reserve(set1.size());
        diff2.reserve(set2.size());

        for (const auto &value : set1)
        {
            if (!set2.contains(value))
            {
                diff1.push_back(value);
            }
        }

        for (const auto &value : set2)
        {
            if (!set1.contains(value))
            {
                diff2.push_back(value);
            }
        }
        return {diff1, diff2};
    }
};
int main()
{
    Solution solution;
    vector<int> nums{-4, -3, -2, -1, 4, 3, 2};
    cout << solution.largestAltitude(nums) << endl;
    return 0;
}