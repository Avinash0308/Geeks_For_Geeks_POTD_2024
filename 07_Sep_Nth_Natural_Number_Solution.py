class Solution:
    def findNth(self,n):
        #code here
        ans = 0
        base = 1
        while n > 0:
            ans = ans + (n%9)*base
            base = base*10
            n = n//9
        return ans