array1 = []
array2 = []

while len(array1) < 3:
    row = input().strip()
    if row:
        array1.append(list(map(int, row.split())))

while len(array2) < 3:
    row = input().strip()
    if row:
        array2.append(list(map(int, row.split())))

for i in range(3):
    for j in range(3):
        print(array1[i][j]*array2[i][j], end=" ")
    print()