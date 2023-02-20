class Solution:
    def validPalindrome(self, s):
        left = 0
        right = len(s) - 1
        while(left<right):
            if(s[left]!=s[right]):
                skipLeft = s[left+1:right+1]
                skipRight = s[left:right]
                
                reversedLeft = skipLeft[::-1]
                reversedRight = skipRight[::-1]
                return skipLeft == reversedLeft or skipRight == reversedRight
        left+=1
        right-=1        
        return True

if __name__ == '__main__':
    s = Solution()
    print(s.validPalindrome("abca"))    
        