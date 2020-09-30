for _ in range(int(input())):
    N, K, L = map(int, input().split())
    if N == 1:
        print(1)
    elif K * L < N or K == 1:
        print(-1)
    else:
        l = [i for i in range(1, K+1)]
        A = l * (N // K)
        if N % K >= 1:
            for i in range(1, (N % K) + 1):
                A.append(i)
        for ele in A[:-1]:
            print(ele, end = " ")
        print(A[-1])