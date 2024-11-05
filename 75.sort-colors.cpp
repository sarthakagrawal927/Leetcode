/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 *
 * https://leetcode.com/problems/sort-colors/description/
 *
 * algorithms
 * Medium (65.13%)
 * Likes:    18960
 * Dislikes: 673
 * Total Accepted:    2.4M
 * Total Submissions: 3.7M
 * Testcase Example:  '[2,0,2,1,1,0]'
 *
 * Given an array nums with n objects colored red, white, or blue, sort them
 * in-place so that objects of the same color are adjacent, with the colors in
 * the order red, white, and blue.
 *
 * We will use the integers 0, 1, and 2 to represent the color red, white, and
 * blue, respectively.
 *
 * You must solve this problem without using the library's sort function.
 *
 *
 * Example 1:
 *
 *
 * Input: nums = [2,0,2,1,1,0]
 * Output: [0,0,1,1,2,2]
 *
 *
 * Example 2:
 *
 *
 * Input: nums = [2,0,1]
 * Output: [0,1,2]
 *
 *
 *
 * Constraints:
 *
 *
 * n == nums.length
 * 1 <= n <= 300
 * nums[i] is either 0, 1, or 2.
 *
 *
 *
 * Follow up: Could you come up with a one-pass algorithm using only constant
 * extra space?
 *
 */

#include <string>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;
// @lc code=start
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int zeroCount = 0, oneCount = 0, twoCount = 0;
        for (auto n : nums)
        {
            if (n == 0)
                zeroCount++;
            else if (n == 1)
                oneCount++;
            else
                twoCount++;
        }
        int i = 0;
        while (zeroCount--)
        {
            nums[i++] = 0;
        }
        while (oneCount--)
        {
            nums[i++] = 1;
        }
        while (twoCount--)
        {
            nums[i++] = 2;
        }
    }
};
// @lc code=end
