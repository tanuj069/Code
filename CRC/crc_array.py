# Problem 1: You are given an array of integers 'ARR' containing N elements. Each integer is in the range [1, N-1], with exactly one element repeated in the array. Your task is to find the duplicate element
# '''
n = int(input())
arr = list(map(int, input().split()))
for i in range(n - 1):
    for j in range(i + 1, n):
        if arr[i] == arr[j]:
            print(arr[i])
            break
# '''

# Problem 2: You are given a number ‘N’ and a query ‘Q.’ If ‘Q’ is 1, then you have to return the sum of all integers from 1 to ‘N,’ else if ‘Q’ is equal to 2 then you have to return the product of all integers from 1 to ‘N.’ Since the product can be very large, return it modulo 10 ^ 9 + 7.
'''
q = int(input())
if q == 1:
    n = int(input())
    sums = 0
    while (n):
        sums += n
        n -= 1
    print(sums)
elif q == 2:
    n = int(input())
    prod = 1
    while (n > 1):
        prod *= n
        n -= 1
    print(prod % 1000000007)
else:
    print('plz choose right value of q')
'''

# Problem 3: You are given an array “ARR” of size N. Your task is to find out the sum of maximum and minimum elements in the array.
'''
n = int(input())
arr = list(map(int, input().split()))
print(max(arr) + min(arr))
'''

# Problem 4: You are given an unsorted array containing ‘N’ integers. You need to find ‘2’ largest elements from the given array. Also, you need to return the elements in non- decreasing order.
'''
n = int(input())
arr = list(map(int, input().split()))
arr.sort()
rev_arr = arr[::-1].copy()
print(arr[-2])
print(rev_arr)
# '''

# Problem 5: Given an array with N elements, the task is to rotate the array to the left by K steps, where K is non-negative.
'''
n = int(input())
arr = list(map(int, input().split()))
while 1:
    k = int(input())
    k %= n
    rot_arr = (arr[k::].copy() + arr[0:k:].copy())
    print(rot_arr)
'''