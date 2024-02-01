class Solution:
    # your task is to complete this function
    # function should return an integer
    def atoi(self,s):
        # Code here
        if(len(s) == 0):
            return 0;
        neg = 0 
        summ = 0 
        n = len(s)
        if(s[0] == '-'):
            neg = 1
        for i in range(0+neg,n):
            if(ord(s[i]) >= 48 and ord(s[i]) <= 57):
                summ = summ*10 + ord(s[i]) - 48;
            else:
                return -1;
        if(neg):
            summ *= -1
        return summ