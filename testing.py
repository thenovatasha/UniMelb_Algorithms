a = 6
b = 5
def add(a, b):
    a = a + 5
    b = b + 5
    print(f'Inside function a {a} and b {b}')
    return a, b


z = add(a, b)
print(z)
print(f'Outside function a{a} and b {b}')