# SPOJ Problem Set (Classical)
# 7169. Pizza
# Problem Code: EGYPIZZA

n = input()

x = []

for i in xrange(n):
	x.append(raw_input())

quarter = 0
half = 0
three_quarter = 0
pizza = 1

for e in x:
	if e == '1/4':
		quarter = quarter + 1
	if e == '1/2':
		half = half + 1
	if e == '3/4':
		three_quarter = three_quarter + 1

nhalves = half / 2

pizza = pizza + nhalves

half = half % 2

if half:
	if quarter:
		quarter = quarter -2
		if quarter < 0:
			quarter = 0
	pizza = pizza + 1

pizza = pizza + three_quarter

q3q = min(quarter, three_quarter)
quarter = quarter - q3q

pizza = pizza + (quarter + 3)/4

#three_quarter = three_quarter - q3q

#pizza = pizza + q3q

#pizza = pizza + quarter + half + three_quarter

print pizza