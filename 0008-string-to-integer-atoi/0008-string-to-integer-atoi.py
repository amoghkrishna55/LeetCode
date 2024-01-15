class Solution:
    def myAtoi(self, s: str) -> int:
        """
        Considerations:        
        1. If there is a leading whitespace at start, remove it.
        2. Check the sign and store it in a varible.
        3. try adding the digits to the result.
        4. witnessing anything other than a digit break the loop.
	    5. check the range and return accordingly.
        """

        maxInt, minInt = 2**31 - 1 , -2**31
        result, startIdx, sign = 0,0,1
        cleanStr = s.lstrip()
        
        if not cleanStr: return result

        if cleanStr[startIdx] in ("-", "+"):
            sign = -1 if cleanStr[startIdx] == "-" else 1 
            startIdx += 1
        
        for i in range(startIdx, len(cleanStr)):
            char = cleanStr[i]
            if not char.isdigit():
                break
            else:
                # read note at the end, if confusing
                result = (result * 10) + int(char)

        if result * sign > maxInt:
            return maxInt
        elif result * sign <= minInt:
            return minInt
        
        return result * sign

"""
Note: 
Q1.  why int(char)?
Ans: The char will be x, where x is a digit in string format

Q2.  why result * 10?
Ans: We need to shift the current value of result
     to the left by one decimal place (i.e., multiply it by 10) 
     and then add the integer value of the new digit to the result
"""
             