# Largest Number

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a list of non-negative integers `nums`, arrange them such that they form the largest number and return it.

Since the result may be very large, so you need to return a string instead of an integer.

 

 **Example 1:** 

```
Input: nums = [10,2]
Output: "210"

```

 **Example 2:** 

```
Input: nums = [3,30,34,5,9]
Output: "9534330"

```

 

 **Constraints:** 

- 1 <= nums.length <= 100
- 0 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 8 ms (beats 11.03%)  
**Memory:** 17 MB (beats 55.26%)  
**Submitted:** 2026-07-21T16:55:27.424Z  

```cpp
class Solution {
public:
    static bool cmp(string &a, string &b) {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {

        vector<string> arr;

        for (int x : nums)
            arr.push_back(to_string(x));

        sort(arr.begin(), arr.end(), cmp);

        if (arr[0] == "0")
            return "0";

        string ans = "";

        for (string s : arr)
            ans += s;

        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/largest-number/)