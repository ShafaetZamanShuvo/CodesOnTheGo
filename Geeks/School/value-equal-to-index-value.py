def valueEqualToIndex(self,arr, n):
		# code here
        ans = []
        for i in range(n):
            if arr[i] == i+1:
                ans.append(i+1)
        return ans     