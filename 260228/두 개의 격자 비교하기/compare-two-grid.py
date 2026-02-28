N, M = map(int, input().split())
array1 = [list(map(int, input().split())) for _ in range(N)]
array2 = [list(map(int, input().split())) for _ in range(N)]

for i in range(N):
    for j in range(M):
        if array1[i][j] == array2[i][j]:
            print(0, end=" ")
        else:
            print(1, end=" ")
    print()