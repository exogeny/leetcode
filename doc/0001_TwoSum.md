# Two Sum

click [leetcode](https://leetcode.com/problems/two-sum/) for more detail.

## Description
Given an array of integers, return **indices** of the two numbers such that they add up to a specific target.
You may assume that each input would have **exactly** one solution, and you may not use the same element twice.

**Example**:
```
Given nums = [2, 7, 11, 15], target = 9

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
```

## Solution
### 1. Brute Force
The brute force approach is simple. Loop through each element `x` and find if there is another value that equals to `target - x`.
``` c++
vector<int> twoSum(vector<int> &nums, int target)
{
    int i, j;
    for (i = 0; i < nums.size(); i++)
    {
        for (j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] == target - nums[i])
                return vector<int>({i, j});
        }
    }
    return vector<int>();
}
```
**Complexity Analysis**:
* Time complexity: $O(n^2)$. For each element, we try to find its complement by looping through the rest of array which take $O(n)$ time. Therefore, the time complexity is $O(n^2)$.
* Space complexity: $O(1)$

### 2. Sorted array
To improve our run time complexity, we need a more efficient way to check if the complement exists in the array. If the array is sorted, we can pass through the array from the ends to the middle. If the sum of two number of ends is bigger than the target, we should move the bigger number in a smaller direction and we should move the smaller number in a bigger direction otherwise. So we only need $O(n)$ time to pass through the whole array.
A simple implementation uses two iterations. in the first iteration, we pass through the whole array from the ends to the middle. Then, in the second iteration we find the indices of the two number we find in the first iteration.
``` c++
vector<int> twoSum(vector<int> &nums, int target)
{
    int i = 0, num1, num2;
    vector<int> copied(nums);
    vector<int> result;

    //1, sort the nums
    sort(copied.begin(), copied.end());

    //2, find the element which sum is target
    vector<int>::iterator front = copied.begin();
    vector<int>::iterator tail = copied.end() - 1;
    while (front != tail)
    {
        if (target == *front + *tail)
            break;
        if (target < *front + *tail)
            tail--;
        else
            front++;
    }
    num1 = *front;
    num2 = *tail;

    //3, find the element index in origin vector
    for (i = 0, front = nums.begin(); front != nums.end(); front++, i++)
    {
        if (*front == num1 || *front == num2)
        {
            result.push_back(i);
        }
    }
    return result;
}
```
**Complexity Analysis**:
* Time complexity: $O(nlgn)$. We sort the number first, so the time complexity is $O(nlgn)$. and we traverse the list containing n elements exactly twice. So the time complexity is $O(nlgn + 2 * n) = O(nlgn)$.
* Space complexity: $O(n)$. We need to keep the sorted array and original array, which means that we need store extra n elements.

### 3. One-pass Hash Table
The best way to maintain a mapping of each element in the array to its index is using **hash table**.
We reduce the look up time from $O(n)$ to $O(1)$ by trading space for speed. A hash table is built exactly for this purpose, it supports fast look up in near constant time. I say "near" because if a collision occurred, a look up could degenerate to $O(n)$ time. But look up in hash table should be amortized $O(1)$ time as long as the hash function was chosen carefully.
While we iterate and inserting elements into the table, we also look back to check if current element's complement already exists in the table. If it exists, we have found a solution and return immediately.
``` c++
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
```

**Complexity Analysis**:
* Time complexity: $O(n)$. We traverse the list containing nn elements only once. Each look up in the table costs only $O(1)$ time.
* Space complexity: $O(n)$. The extra space required depends on the number of items stored in the hash table, which stores at most nn elements.