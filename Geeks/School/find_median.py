#User function Template for python3
def find_median(v):
    # Code here
    v.sort()
    if len(v) % 2 == 0:
        return (v[len(v)//2] + v[len(v)//2 - 1]) / 2
    else:
        return v[len(v)//2]
    
    