'''
Bubble Sort Algorithm

https://en.wikipedia.org/wiki/Bubble_sort
'''

def bubble_sort(arr):
	length = len(arr)

	for i in range(length):
		for j in range(1,length-i):
			if arr[j-1] > arr[j]:
				arr[j-1], arr[j] = arr[j], arr[j-1]


if __name__ == '__main__':
	arr = [5, 10, 2, 0, 78, -2]
	bubble_sort(arr)
	print(arr)

'''
output: [-2, 0, 2, 5, 10, 78]
'''