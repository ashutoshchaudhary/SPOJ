# SPOJ Problem Set (Classical)
# 14863. Summation of Multiples
# Problem Code: SUM1

t = input()

for i in range(t):
  x = int(raw_input())
	x = x - 1
	n1 = x//3
	n2 = x//5
	n3 = x//15

	sum1 = 3 * ((n1*(n1+1))/2)
	sum2 = 5 * ((n2*(n2+1))/2)
	sum3 = 15 * ((n3*(n3+1))/2)

	print int(sum1 + sum2 - sum3)
