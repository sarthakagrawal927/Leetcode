/*
 * @lc app=leetcode id=605 lang=cpp
 *
 * [605] Can Place Flowers
 *
 * https://leetcode.com/problems/can-place-flowers/description/
 *
 * algorithms
 * Easy (28.89%)
 * Likes:    6678
 * Dislikes: 1204
 * Total Accepted:    930.5K
 * Total Submissions: 3.2M
 * Testcase Example:  '[1,0,0,0,1]\n1'
 *
 * You have a long flowerbed in which some of the plots are planted, and some
 * are not. However, flowers cannot be planted in adjacent plots.
 *
 * Given an integer array flowerbed containing 0's and 1's, where 0 means empty
 * and 1 means not empty, and an integer n, return true if n new flowers can be
 * planted in the flowerbed without violating the no-adjacent-flowers rule and
 * false otherwise.
 *
 *
 * Example 1:
 * Input: flowerbed = [1,0,0,0,1], n = 1
 * Output: true
 * Example 2:
 * Input: flowerbed = [1,0,0,0,1], n = 2
 * Output: false
 *
 *
 * Constraints:
 *
 *
 * 1 <= flowerbed.length <= 2 * 10^4
 * flowerbed[i] is 0 or 1.
 * There are no two adjacent flowers in flowerbed.
 * 0 <= n <= flowerbed.length
 *
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
    // 00000010000001000
public:
    bool canPlaceFlowers(vector<int> &fb, int n)
    {
        int freeSpace = 0;
        for (int i = 0; i < fb.size(); i++)
        {
            int currentConcurrentSpaces = (i == 0 && !fb[0]) ? 1 : 0; // first
            while (i < fb.size() && !fb[i])
            {
                ++currentConcurrentSpaces, ++i;
            }
            if (i == fb.size() && !fb[i - 1]) // last boost
                ++currentConcurrentSpaces;
            freeSpace += (currentConcurrentSpaces - 1) / 2;
        }
        return freeSpace >= n;
    }
};
// @lc code=end
