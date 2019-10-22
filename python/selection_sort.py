'''
Selection sort algorithm implimented in Python
for more info on selection sort visit:
https://en.wikipedia.org/wiki/Selection_sort
'''

def selection_sort(arr):
	for i in range(len(arr)):
		minimum = i

		for j in range(i+1, len(arr)):
			if arr[j] < arr[minimum]:
				minimum = j;

		if minimum != i:
			arr[i], arr[minimum] = arr[minimum], arr[i]

if __name__ == '__main__':
	arr = [5, 10, 2, 0, 78, -2]
	selection_sort(arr)
	print(arr)

'''
output: [-2, 0, 2, 5, 10, 78]
'''