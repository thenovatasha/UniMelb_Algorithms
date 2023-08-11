z = 9000
def func1(x):
    x = x + 1
    y = z
    print("I am inside func1")
    print(x, y, z)

def main():
    x = 5
    y = 6
    z = 7
    func1(x)
    print("I am inside main")
    print(x, y, z)

main()        