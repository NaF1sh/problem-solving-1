def solve(n1, m, k, list_, polycarp_knows):
    # Create a list of numbers Polycard doesn't know
    polycard_doesnt_know = [i + 1 for i in range(n1) if (i + 1) not in polycarp_knows]
    
    # Initialize the answer string
    ans = ""
    
    # Check each number in the list
    for num in list_:
        if num in polycard_doesnt_know:
            ans += '1'
        else:
            ans += '0'
    
    # Print the answer
    print(ans)

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    idx = 0
    t = int(data[idx])  # Number of test cases
    idx += 1
    for _ in range(t):
        n1 = int(data[idx])
        m = int(data[idx + 1])
        k = int(data[idx + 2])
        idx += 3
        list_ = list(map(int, data[idx:idx + m]))
        idx += m
        polycarp_knows = set(map(int, data[idx:idx + k]))
        idx += k
        solve(n1, m, k, list_, polycarp_knows)

if __name__ == "__main__":
    main()