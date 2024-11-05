/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 *
 * https://leetcode.com/problems/longest-palindromic-substring/description/
 *
 * algorithms
 * Medium (34.51%)
 * Likes:    29850
 * Dislikes: 1833
 * Total Accepted:    3.4M
 * Total Submissions: 9.8M
 * Testcase Example:  '"babad"'
 *
 * Given a string s, return the longest palindromic substring in s.
 *
 *
 * Example 1:
 *
 *
 * Input: s = "babad"
 * Output: "bab"
 * Explanation: "aba" is also a valid answer.
 *
 *
 * Example 2:
 *
 *
 * Input: s = "cbbd"
 * Output: "bb"
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= s.length <= 1000
 * s consist of only digits and English letters.
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
public:
    string longestPalindrome(string s)
    {
        if (s.length() <= 1)
        {
            return s;
        }
        auto expandAroundCenter = [&](int left, int right)
        {
            while (left >= 0 && right < s.size() && s[left] == s[right])
            {
                left--, right++;
            }
            return s.substr(left + 1, right - left - 1);
        };
        string maxStr = "";
        for (int i = 0; i < s.length() - 1; i++)
        {
            string odd = expandAroundCenter(i, i);
            string even = expandAroundCenter(i, i + 1);
            if (odd.length() > maxStr.length())
                maxStr = odd;
            if (even.length() > maxStr.length())
                maxStr = even;
        }
        return maxStr;
    }
};
// @lc code=end
