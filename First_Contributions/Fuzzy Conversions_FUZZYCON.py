t = int(input())
for _ in range(t):
    arr1 = [int(i) for i in input().split()]
    a, b, c = arr1[:3]
    x, y, z = arr1[3:]
    ans = 0
    if arr1[:3] == arr1[3:]:
        print(0)
    elif (a == 0 and b == 0 and c == 0) and (x == 0 and y == 0 and z == 0):
        print(0)
    else:
        ans = 0
        a1 = a % 2
        b1 = b % 2
        c1 = c % 2
        x1 = x % 2
        y1 = y % 2
        z1 = z % 2
        a2 = (x - a)%2
        b2 = (y - b)%2
        c2 = (z - c)%2
        if a == 0 and b == 0 and c == 0:
            if x1 + y1 + z1 == 1 or x1 + y1 + z1 == 2:
                ans = 1
            else:
                ans = 2
        elif x == 0 and y == 0 and z == 0:
            if a1 + b1 + c1 == 1 or a1 + b1 + c1 == 2:
                ans = 1
            else:
                ans = 2
        else:
            if a2 != b2 or b2 != c2:
                ans = 1
        print(ans)
