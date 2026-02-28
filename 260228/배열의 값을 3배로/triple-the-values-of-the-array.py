array = []

for i in range(3):
    row = list(map(int, input().split()))
    array.append(row)

for a in range(3):
    for b in range(3):
        array[a][b] = array[a][b] * 3

for row in array:
    print(*row)