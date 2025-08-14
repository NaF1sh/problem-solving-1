n = int(input())

arr = list(map(int, input().split()))

arr2 = arr[::-1]

if arr2 == arr:
    print("YES")
else:
    print("NO")
