# SPOJ Problem Set (Classical)
# 4557. Musical Chairs
# Problem Code: ANARC08H

def josephus(n, k):
   r = 0
   i = 2
   while i <= n:
     r = (r + k) % i;
     i+= 1
   return r+1

x = raw_input().split()

a = int(x[0])
b = int(x[1])

while not(a == 0 and b == 0):
	print a, b, josephus(a, b)

	x = raw_input().split()
	a = int(x[0])
	b = int(x[1])
