turn = int(input())
for i in range(turn):
    a, b, c = map(int, input().split())
    total = a + b + c
    print(total // 2)


