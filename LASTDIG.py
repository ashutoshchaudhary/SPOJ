# SPOJ Problem Set (Classical)
# 3442. The Last Digit
# Problem Code: LASTDIG

y = [0, 1, 4, 4, 2, 1, 1, 4, 4, 2, 0]

t = input()

for i in xrange(t):
	x = raw_input().split()

	a = long(x[0])
	b = long(x[1])

	if a == 0 and b == 0:
		print 1
		continue

	if b == 0:
		print 1
		continue

	if a > 10:
		a = a % 10

	if y[a] == 0:
		print 0
		continue

	if y[a] == 1:
		print a
		continue

	z = b % y[a]

	if z == 0:
		z = y[a]

	u = (a ** z) % 10
	print u