/*
 * @lc app=leetcode id=1456 lang=cpp
 *
 * [1456] Maximum Number of Vowels in a Substring of Given Length
 *
 * https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/
 *
 * algorithms
 * Medium (59.11%)
 * Likes:    3550
 * Dislikes: 134
 * Total Accepted:    396.4K
 * Total Submissions: 670.2K
 * Testcase Example:  '"abciiidef"\n3'
 *
 * Given a string s and an integer k, return the maximum number of vowel
 * letters in any substring of s with length k.
 *
 * Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.
 *
 *
 * Example 1:
 *
 *
 * Input: s = "abciiidef", k = 3
 * Output: 3
 * Explanation: The substring "iii" contains 3 vowel letters.
 *
 *
 * Example 2:
 *
 *
 * Input: s = "aeiou", k = 2
 * Output: 2
 * Explanation: Any substring of length 2 contains 2 vowels.
 *
 *
 * Example 3:
 *
 *
 * Input: s = "leetcode", k = 3
 * Output: 2
 * Explanation: "lee", "eet" and "ode" contain 2 vowels.
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= s.length <= 10^5
 * s consists of lowercase English letters.
 * 1 <= k <= s.length
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
    bool isVowel(char c)
    {
        return c == 'a' || c == 'u' || c == 'e' || c == 'i' || c == 'o';
    }
    int maxVowels(string s, int k)
    {
        int i = 0, j;
        int maxCount = 0;
        for (; i < k; i++)
        {
            if (isVowel(s[i]))
                maxCount++;
        }
        int newCount = maxCount;
        for (i = 0, j = k; j < s.length(); j++, i++)
        {
            newCount = newCount + isVowel(s[j]) - isVowel(s[i]);
            maxCount = max(maxCount, newCount);
        }
        return maxCount;
    }
};
// @lc code=end
