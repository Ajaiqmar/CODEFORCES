a,b,c,d = map(int,input().split())
 
if(a>b and a>c and a>d):
	print("{} {} {}".format(abs(b-a),abs(c-a),abs(d-a)))
elif(b>c and b>d):
	print("{} {} {}".format(abs(b-a),abs(c-b),abs(d-b)))
elif(c>d):
	print("{} {} {}".format(abs(c-a),abs(c-b),abs(d-c)))
else:
	print("{} {} {}".format(abs(d-a),abs(d-b),abs(d-c)))
