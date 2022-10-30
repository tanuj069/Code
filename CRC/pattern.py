n = int(input("Enter the number: "))
# 1
for i in range(1, n + 1):
    for j in range(1, i + 1):
        print("* ", end="")
    print()

#2
no = 1
for i in range(1, n + 1):
    for j in range(1, i + 1):
        print(no, "", end="")
        no += 1
    print()

#3
for i in range(1, n + 1):
    for j in range(1, n - i + 1):
        print("  ", end="")
    for j in range(1, i + 1):
        print("* ", end="")
    print()

#4
for i in range(1, n + 1):
    for j in range(1, n - i + 2):
        print("* ", end='')
    print()

#5
for i in range(1, n + 1):
    for j in range(1, i):
        print("  ", end='')
    for j in range(1, n - i + 2):
        print("* ",end='')
    print()

#6
for i in range(1, n + 1):
    for j in range(1, 2 * n + 1):
        if j > i and j <= (2 * n - i):
            print('  ',end='')
        else:
            print('* ',end='')
    print()

#7
for i in  range(1, n + 1):
    for j in range(1, 2 * n):
        if j > (n - i + 1) and j < (n + i - 1):
            print('  ',end='')
        else:
            print('* ', end='')
    print()

#8
for i in range(1, n + 1):
    for j in range(1, (2 * n) - i + 1):
        if j >= 1 and j < i:
            print('  ',end='')
        else:
            print('* ',end='')
    print()

#9
for i in  range(1, n + 1):
    for j in range(1, 2 * n):
        if j > n - i and j < n + i:
            print('* ',end='')
        else:
            print('  ', end='')
    print()

#10
for i in range(1, 2 * n):
    for j in range(1, n + 1):
        if j <= i:
            if j <= n - i or i + j <= 2 * n:
                print('* ',end='')
    print()





