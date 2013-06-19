# SPOJ Problem Set (Classical)
# 42. Adding Reversed Numbers
# Problem Code: ADDREV

def reverse(x):
  l = len(x)
	for i in range(l):
		if x[i] != '0':
			y = i
			break

	for j in range(1, l+1):
		if x[-j] != '0':
			z = l - j
			break

	d = x[i : z+1]

	return d[::-1]


t = input()

for i in xrange(t):
	x = raw_input().split()

	n1 = reverse(x[0])
	n2 = reverse(x[1])

	r = str(int(n1) + int(n2))

	print reverse(r)
