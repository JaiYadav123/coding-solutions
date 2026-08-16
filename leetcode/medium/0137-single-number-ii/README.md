# Single Number II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` where every element appears  **three times**  except for one, which appears  **exactly once**.  *Find the single element and return it*.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

 **Example 1:** 

```
Input: nums = [2,2,3,2]
Output: 3

```

 **Example 2:** 

```
Input: nums = [0,1,0,1,0,1,99]
Output: 99

```

 

 **Constraints:** 

- 1 <= nums.length <= 3 * 104
- -231 <= nums[i] <= 231 - 1
- Each element in nums appears exactly three times except for one element which appears once.

## Solution

**Language:** C++  
**Runtime:** 99 ms (beats 5.32%)  
**Memory:** 13.2 MB (beats 99.41%)  
**Submitted:** 2026-08-16T10:22:33.333Z  

```cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        for(int i = 0; i < nums.size(); i++) {

            int count = 0;

            for(int j = 0; j < nums.size(); j++) {

                if(nums[i] == nums[j]) {
                    count++;
                }
            }

            if(count == 1) {
                return nums[i];
            }
        }

        return 0;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/single-number-ii/)