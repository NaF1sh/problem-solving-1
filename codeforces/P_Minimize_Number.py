n = int(input())

arr = list(map(int, input().split()))

ans = 0
flag = True
while flag:
    count = 0

    for i in range(len(arr)):
        if arr[i] % 2 == 0:
            arr[i] = arr[i] // 2
            count += 1
        else:
            flag = False
            break
    if count == len(arr):
        ans += 1
print(ans)
