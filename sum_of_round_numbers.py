t = int(input())
 
for i in range(t):
	n = int(input())
	ans = []
	c = 0
	
	while(n!=0):
		v = (n%10)*(10**c)
		if(v!=0):
			ans.append(v)
		c=c+1
		n=n//10
	
	print(len(ans))
	print(*ans)
