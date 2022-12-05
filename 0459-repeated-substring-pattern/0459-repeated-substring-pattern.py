import re
class Solution(object):
    def repeatedSubstringPattern(self, s):
        s1 = (s+s)[1:-1]
        return s in s1
        
        