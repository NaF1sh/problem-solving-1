n = int(input())
a = list(map(int, input().split()))
count = 0

while True:
    max1 = -1
    maxi = -1

    max_val = max(a[1:])
    maxi = a[1:].index(max_val) + 1
    max1 = a[maxi]

    if a[0] > max1:
        break

    a[maxi] -= 1
    a[0] += 1
    count += 1

print(count)
