def armstrongNumber (n):
    # code here 
    temp = n
    n = str(n)
    ans = 0
    for i in range(len(n)):
        ans += int(n[i])**3
    return ans == temp

if  __name__ == "__main__":
    print(armstrongNumber(370))          