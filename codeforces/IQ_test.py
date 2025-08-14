n = int(input())
arr = list(map(int, input().split()))
even = []
odd = []
for i in range(n):
    if arr[i] % 2 == 0:
        even.append((arr[i], i+1))
    else:
        odd.append((arr[i], i+1))

if len(even) == 1:
    print(even[0][1])
else:
    print(odd[0][1])
