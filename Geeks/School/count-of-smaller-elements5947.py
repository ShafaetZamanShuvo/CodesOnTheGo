def countOfElements( a, n, x):
    size = len(n)
    ans = 0
    for i in range(size):
        if n[i] <= x:
            ans += 1
    return ans        
    
if __name__ == "__main__":
    print(countOfElements([1,2,3,4,5],5,3))    
