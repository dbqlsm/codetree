start, end = map(int, input().split())
count = 0

for i in range(start, end+1):
    a = []
    for j in range(1, i+1):
        if i % j == 0:
            a.append(j)
    if len(a) == 3:
        count += 1
print(count)