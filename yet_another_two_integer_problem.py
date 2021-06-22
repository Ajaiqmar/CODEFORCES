t = int(input())

for i in range(t):
	a,b = map(int,input().split())
	ans = 0
	
	v = abs(b-a)
	
	ans += (v//10)
	if(v%10!=0):
		ans+=1
	
	print(ans)
