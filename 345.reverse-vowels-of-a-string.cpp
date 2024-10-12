/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 *
 * https://leetcode.com/problems/reverse-vowels-of-a-string/description/
 *
 * algorithms
 * Easy (54.62%)
 * Likes:    4676
 * Dislikes: 2808
 * Total Accepted:    1M
 * Total Submissions: 1.9M
 * Testcase Example:  '"IceCreAm"'
 *
 * Given a string s, reverse only all the vowels in the string and return it.
 *
 * The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both
 * lower and upper cases, more than once.
 *
 *
 * Example 1:
 *
 *
 * Input: s = "IceCreAm"
 *
 * Output: "AceCreIm"
 *
 * Explanation:
 *
 * The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes
 * "AceCreIm".
 *
 *
 * Example 2:
 *
 *
 * Input: s = "leetcode"
 *
 * Output: "leotcede"
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= s.length <= 3 * 10^5
 * s consist of printable ASCII characters.
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
        // Convert to lowercase to handle both uppercase and lowercase vowels
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    string reverseVowels(string s)
    {
        int i = 0, j = s.length() - 1;
        while (i < j)
        {
            bool ci = isVowel(s[i]), cj = isVowel(s[j]);

            // If i points to a non-vowel, move i forward
            if (!ci)
            {
                i++;
                continue;
            }

            // If j points to a non-vowel, move j backward
            if (!cj)
            {
                j--;
                continue;
            }

            // If both s[i] and s[j] are vowels, swap them
            if (ci && cj)
            {
                swap(s[i], s[j]);
            }
            i++;
            j--;
        }
        return s;
    }
};

// @lc code=end
