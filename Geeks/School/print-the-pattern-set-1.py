def printPat(n):
    for k in range(n):
        for i in range(n):
            for j in range(n,k,-1):
                    print(n-i, end=" ")
        print("$",end="")

if __name__ == "__main__":
    printPat(1)
