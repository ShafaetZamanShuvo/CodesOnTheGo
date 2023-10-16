#User function Template for python3

def findIndex(a,N,key):
    ans = []
    for i in range(N):
        if(a[i] == key):
            ans.append(i)
            break

    for i in range(N-1,-1,-1):
        if(a[i] == key):
            ans.append(i)
            break

    if(len(ans) !=2):
        ans.append(-1)
        ans.append(-1)

    return ans    

if __name__ == "__main__":
    print(findIndex([1,2,3,4,6,5],6,3))

