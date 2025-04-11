def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    t = int(data[0])
    index = 1
    
    results = []
    
    for _ in range(t):
        n = int(data[index])
        s = data[index + 1]
        index += 2
        
        ans = 0
        open_brackets = 0
        close_brackets = 0
        
        i = 0
        while i < n:
            if s[i] == '(' and i + 1 < n and s[i + 1] == ')':
                i += 2
                continue
            if s[i] == '(':
                open_brackets += 1
            if s[i] == ')':
                close_brackets += 1
                if open_brackets < close_brackets:
                    ans += 1
                    close_brackets -= 1
            i += 1
        
        results.append(ans)
    
    for result in results:
        print(result)

if __name__ == "__main__":
    main()