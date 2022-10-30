import math
n = int(input("Enter the number"))
# n = 11
l = []
l = [int(n % i != 0) for i in range(1, int(math.sqrt(n)))]
if (len(l) < 3):
    print('prime')
# for i in range(1, int(math.sqrt(n) + 1)):th.sqrt(n))]
#     if n % i == 0:
#         l.append(i)
#         l.append([  int(n / i)])
# l.sort()
# print(l)

# maths fun


