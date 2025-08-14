string = input()

a, b = 0, 0

for char in string:
    if char.isupper():
        a = a+1
    elif char.islower():
        b += 1

print(a, b)
