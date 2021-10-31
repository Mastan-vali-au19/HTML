def non_decreasing_array(A):
    N = len(A)
    B = [None]*N
    B[0] = A[0]
    for i in range(1, N):
        if A[i] > B[i-1]:
            B[i] = A[i]
        else:
            if B[i-1] % A[i] == 0:
                B[i] = B[i-1]
            else:
                B[i] = (B[i-1] // A[i] + 1) * A[i]
                result = B
    return result

if __name__ == '__main__':
    T = int(input().strip()) # nr. of testcases
    for _ in range(T):
        N = int(input())


A = list(map(int, input().split()))
result = non_decreasing_array(A)
print(*result)