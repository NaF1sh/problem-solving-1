s = input()

balance = 0
count = 0
current = []

result = []

for ch in s:
    current.append(ch)
    if ch == 'L':
        balance += 1
    else:
        balance -= 1

    if balance == 0:
        result.append(''.join(current))
        count += 1
        current = []

print(count)
for item in result:
    print(item)
