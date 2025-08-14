n = int(input())

arr = list(map(int, input().split()))

max1 = arr.index(max(arr))
min1 = arr.index(min(arr))

arr[max1], arr[min1] = arr[min1], arr[max1]

print(" ".join(str(x)for x in arr))
