
class node:
    def __init__(self,data):
        self.data = data
        self.next = None


class Solution:
    #  Should return data of middle node. If linked list is empty, then  -1
    def getMiddle(self, head):
        # Code here
        # return the value stored in the middle node
        a = head
        b = head
        while b and b.next:
            a = a.next
            b = b.next.next
        return a.data
