n,k = map(int,input().split())
v = 0
i = 0

while((v+k)<240 and i<n):
	i += 1
	v = ((i*(i+1))//2)*5

if((v+k)<=240):
	print(i)
else:
	print(i-1)
