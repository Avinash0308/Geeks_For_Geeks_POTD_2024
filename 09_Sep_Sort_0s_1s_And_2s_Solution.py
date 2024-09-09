class Solution:
    # Function to sort an array of 0s, 1s, and 2s
    def sort012(self, arr):
        # code here
        n = len(arr)
        a = 0
        b = 0
        c = n-1
        while b<=c:
            if arr[b] == 0:
                temp = arr[b]
                arr[b] = arr[a]
                arr[a] = temp
                a = a+1
                b = b+1
            elif arr[b] == 1:
                b = b+1
            else:
                temp = arr[b]
                arr[b] = arr[c]
                arr[c] = temp
                c = c-1
        return arr