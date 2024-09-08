class Solution:
    def minJumps(self, arr):
        # code here
        n = len(arr)
        cur = 0
        ind = 0
        nex = 0
        for i, val in enumerate(arr):
            if ind < i and nex < i:
                return -1
        if ind < i:
            ind = nex
            nex = 0
            cur += 1
        if i == n-1:
            return cur
        if i + val > nex:
            nex = i + val
        return -1
