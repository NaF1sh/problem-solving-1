n, m = map(int, input().split())
arr = list(map(int, input().split()))
i = 0
while i < m:
    l, r = map(int, input().split())

    print(sum(arr[l-1:r]))
    i = i+1
