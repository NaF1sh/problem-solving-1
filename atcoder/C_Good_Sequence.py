n = int(input())
arr = list(map(int, input().split()))


freq = {}
for num in arr:
    if num in freq:
        freq[num] += 1
    else:
        freq[num] = 1


ans = 0
for x in freq:
    if freq[x] < x:
        ans += freq[x]
    elif freq[x] > x:
        ans += freq[x] - x

print(ans)
