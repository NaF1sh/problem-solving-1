if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    arr2 = set(arr)
    arr3 = sorted(arr2, reverse=True)
    print(arr3[1])
