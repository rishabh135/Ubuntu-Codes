t=int(raw_input())


while(t):
	n,k=[int (x) for x in raw_input().split()]
	a=[int (x) for x in raw_input().split()]
	bread_till_now=0
	for x in range(n):
		bread_till_now=bread_till_now+a[x]
		if(bread_till_now % k == 0):
			continue
		if(bread_till_now % k != 0):
			bread_till_now=bread_till_now+1
	if(bread_till_now % k ==0):
		answer=bread_till_now/k
	else:
		answer=(bread_till_now/k)+1
	print int(answer)
	t=t-1	
	
