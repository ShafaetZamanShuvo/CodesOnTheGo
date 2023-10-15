def isPalindrome(n):
    n = str(n)
    return n == n[::-1] # [::-1] reverses a string

def PalinArray(arr ,n):
    for i in range(n):
        if(not isPalindrome(arr[i])):
            return 0
    return 1
