for _ in range(int(input())):
    n = int(input())
    count = 0
    for i in range(n , 0, -2):
        count += pow(i, 2)
    print(count)