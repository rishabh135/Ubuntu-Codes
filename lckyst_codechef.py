n=int(raw_input())
a=[]
a=[int (x) for x in raw_input().split()]

for x in range(n):
	coun=0
	coun1=0
	coun3=0
	b=a[x]
	c=a[x]
	while (c%10 == 0):
		coun1=coun1+1
		c=c/10
	while (b%5 == 0):
		coun=coun+1
		b=b/5
	if(coun == coun1):
		print a[x]
		continue	
	coun3=(coun-coun1+1)//2
	print a[x]*(4**coun3)
