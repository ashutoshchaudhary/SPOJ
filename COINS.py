# SPOJ Problem Set (Classical)
# 42. Bytelandian Gold Coins
# Problem Code: COINS

import sys
 
d = {}
 
def max_byteland(n):
  if n == 0:
		return 0
	else:
		if n in d:
			r = d[n]
		else:
			r = max(n, max_byteland(n/2) + max_byteland(n/3) + max_byteland(n/4))
			d[n] = r
 
 
		return r
 
for x in sys.stdin:
	print max_byteland(int(x))
	d.clear()
