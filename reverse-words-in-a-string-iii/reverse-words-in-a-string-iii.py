class Solution:
    def reverseWords(self, s: str) -> str:
        l = s.split(' ')
        s1 = ""
        for li in l:
           s1 += li[::-1] + " "
        return s1.rstrip()
        