n=raw_input()
t=int(n)
nd=dict()
for i in range(t):
	name=raw_input()
	nd[name]=nd.get(name,0)+1
	if(nd[name]==1):
		print "OK"
	else:
		print name+str(nd[name]-1)
