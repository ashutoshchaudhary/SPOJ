# SPOJ Problem Set (Classical)
# 4557. The Double HeLix
# Problem Code: ANARC05B

def intersection(list1, list2):
	int_dict = []
	list1_dict = {}

	for e in list1:
		list1_dict[e] = 1
	for e in list2:
		if list1_dict.has_key(e):
			int_dict.append(e)

	return int_dict

x = raw_input().split()

while x[0] != '0':
	y = raw_input().split()

	del x[0]
	del y[0]

	intersect = intersection(x, y)
	sum_list = []
	i = 0
	j = 0

	for e in intersect:
		#i = 0
		sum1 = 0
		while x[i] != e and i < len(x):
			sum1 += int(x[i])
			i += 1

		#j = 0
		sum2 = 0
		while y[j] != e and j < len(y):
			sum2 += int(y[j])
			j += 1

		sum_list.append(max(sum1, sum2));
		sum_list.append(int(e))
		i += 1
		j += 1

	sum1 = 0
	sum2 = 0
	while i < len(x):
		sum1 += int(x[i])
		i += 1

	while j < len(y):
		sum2 += int(y[j])
		j += 1

	sum_list.append(max(sum1, sum2));

	#print sum_list
	print sum(sum_list)

	x = raw_input().split()



