# SPOJ Problem Set (Classical)
# 3375. Stamps
# Problem Code: STAMPS

from __future__ import print_function

t = input()

for z in xrange(t):
	x = raw_input().split()
	stamps = int(x[0])
	friends = int(x[1])

	a = []

	ab = raw_input().split()

	for j in xrange(friends):
		a.append(int(ab[j]))

	a.sort()

	sumf = 0
	count = 0

	for i in range (1, len(a)+1):
		sumf = sumf + a[-i]
		count = count + 1
		if sumf >= stamps:
			break

	if sumf >= stamps:
		print('Scenario #', end='')
		print(z+1, end='')
		print(':')
		print (count)

	else:
		print ('Scenario #', end='')
		print(z+1, end='')
		print(':')
		print ('impossible')

