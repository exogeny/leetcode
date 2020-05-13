#include <vector>
#include <unordered_map>

#include "solution.h"

using std::vector;
using std::unordered_map;

vector<int> Solution::twoSum(vector<int> &nums, int target)
{
    int i = 0, num;
    vector<int> result;
    unordered_map<int, int> map;
    unordered_map<int, int>::const_iterator it;

    vector<int>::const_iterator cur = nums.begin();

    while (cur != nums.end())
    {
        num = target - *cur;
        if ((it = map.find(num)) != map.end())
        {
            result.push_back(it->second);
            result.push_back(i);
            break;
        }

        map[*cur] = i;
        i++; cur++;
    }


    return result;
}