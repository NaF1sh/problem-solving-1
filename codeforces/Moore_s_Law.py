import math

n, m = map(int, input().split())

ans = n*pow(1.000000011, m)

print("{:.12f}".format(ans))
