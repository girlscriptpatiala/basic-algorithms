'''
Program to calculate factorial of given number

>>>factorial(1)
1

>>>factorial(10)
3628800

'''
def factorial(num):
	if num < 0:
		print("Enter positive number")
	elif num == 0:
		return 1
	else:
		ans = 1
		for i in range(1, num+1):
			ans *= i

	return ans

if __name__ == '__main__':
	num = int(input())
	print(factorial(num))
