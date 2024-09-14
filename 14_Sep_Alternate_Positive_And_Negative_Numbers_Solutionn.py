class Solution:
    def rearrange(self,arr):
        # code here
        pos = []
        neg = []
        for i in arr:
            if i >= 0:
                pos.append(i)
            else:
                neg.append(i)
        i = 0
        j = 0
        k = 0
        while i < len(pos) or j < len(neg):
            if i < len(pos):
                arr[k] = pos[i]
                k+=1
                i+=1
            if j < len(neg):
                arr[k] = neg[j]
                j+=1
                k+=1
        return arr
