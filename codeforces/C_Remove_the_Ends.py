def max_coins(arr):
    n = len(arr)
    f_sum = [0] * (n + 1)
    b_sum = [0] * (n + 1)

    for i in range(n):
        f_sum[i + 1] = f_sum[i] + max(0, arr[i])

    for i in range(n - 1, -1, -1):
        b_sum[i] = b_sum[i + 1] + max(0, -arr[i])

    max_c = 0
    for i in range(n + 1):
        max_c = max(max_c, f_sum[i] + b_sum[i])

    return max_c

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        print(max_coins(arr))

if __name__ == "__main__":
    main()