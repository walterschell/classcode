
def func1(low, high):
    if high < low:
        return 0
    num = low
    result = 0
    while num <= high:
        result = result + num
        num = num + 1
    return result

def func2(low, high):
    result = 0
    for i in range(low, high + 1):
        result += i
    return result

def main():
    print "func1(1,10): %d" % (func1(1,10))
    print "func2(1,10): %d" % (func2(1,10))

if __name__ == '__main__':
    main()

