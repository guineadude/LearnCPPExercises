

#include <iostream>

#include <vector>
using namespace std;
#include <unordered_set>
#include <unordered_map>
class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> frequencyMap{};
        for (const auto num : arr)
        {
            ++frequencyMap[num];
        }

        unordered_set<int> seenFrequencies{};
        seenFrequencies.reserve(frequencyMap.size());
        for (const auto [_, value] : frequencyMap)
        {
            if (seenFrequencies.contains(value))
            {
                return false;
            }
            seenFrequencies.emplace(value);
        }
        return true;
    }
};

int main()
{
    Solution solution;

    return 0;
}