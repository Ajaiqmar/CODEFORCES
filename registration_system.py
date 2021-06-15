n = int(input())
d = {}

for i in range(n):
	st = input().strip()
	
	if st not in d:
		d[st] = 1
		print("OK")
	else:
		print("{}{}".format(st,d[st]))
		d[st] = d[st]+1
