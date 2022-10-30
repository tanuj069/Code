s1 = int(input(
    "1: Find the sum of first n terms of the following series:\n2: Write a Function to find power of a number:\nEnter the qus u wanna: "))

if s1 == 1:
    # Qus-1: Find the sum of first n terms of the following series:
    def fact(n):
        prod = 1
        while (n > 1):
            prod *= n
            n -= 1
        return prod


    def a(n):
        sum = 0
        while (n > 1):
            sum += fact(n)
            n -= 1
        return (sum + 2)


    def b(n):
        sum = 0
        while (n > 1):
            sum += (1 / fact(n))
            n -= 1
        return (sum + 2)


    def c(n):
        sum = 0
        while (n > 1):
            if ((n % 2) == 0):
                sum -= (1 / fact(n))
            else:
                sum += (1 / fact(n))
            n -= 1
        return sum


    def d(n):
        sum, i = 0, 3
        while (n):
            if ((n % 2) == 0):
                sum += (1 / fact(i - 1))
            else:
                sum -= (1 / fact(i - 1))
            n -= 1
            i += 2
        return sum


    def e(n):
        sum, i = 0, 4
        while (n):
            if ((n % 2) == 0):
                sum += (1 / fact(i - 1))
            else:
                sum -= (1 / fact(i - 1))
            n -= 1
            i += 2
        return sum


    # n = int(input("Enter a number n: "))
    n = 4
    s2 = int(input(
        "1: 1!/1 + 2!/2 + 3!/3 +......................:\n2: 1 + 2! + 3! + 4!..........................:\n3: 1 + x + x2/2! + x3/3! + x4/4!.............:\n4: 1 - x + x2/2! - x3/3! + x4/4!.............:\n5: x - x3/3! + x5/5! - x7/7!.................:\n6: 1 - x2/2! + x4/4! + x6/6!.................:\nSelect the operation you wanna: "))

    if s2 == 1:
        # (a) 1!/1 + 2!/2 + 3!/3 +......................
        print(a(n - 1))

    elif s2 == 2:
        # (b) 1 + 2! + 3! + 4!..........................
        print(a(n) - 1)

    elif s2 == 3:
        # (c) 1 + x + x2/2! + x3/3! + x4/4!.............
        print((n * b(n - 1)) + 1)

    elif s2 == 4:
        # (d) 1 - x + x2/2! - x3/3! + x4/4!.............
        print((n * c(n - 1)) + 1)

    elif s2 == 5:
        # (e) x - x3/3! + x5/5! - x7/7!.................
        print((n * d(n - 1)) + n)

    elif s2 == 6:
        # (f) 1 - x2/2! + x4/4! - x6/6!.................
        print((n * e(n - 2)) + (1 - n))

elif s1 == 2:
    # Qus-2: Write a Function to find power of a number.
    def pow_of_no(n, e):
        prod = 1
        while (e):
            prod *= n
            e -= 1
        return prod


    print(pow_of_no(int(input("Enter the number: ")), int(input("Enter its power: "))))
