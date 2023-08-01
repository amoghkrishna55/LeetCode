class Solution:
    def reverse(self, x: int) -> int:
        if x>=0:
            x = str(x)[::-1]
            x = int(x)
            if x in range(-2**31,2**31-1):
                return x
            else:
                return 0
        else:
            x = x*-1
            x = str(x)[::-1]
            x = int(x)*-1
            if x in range(-2**31,2**31-1):
                return x
            else:
                return 0