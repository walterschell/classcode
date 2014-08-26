import random


def main():
    min_int = 0
    max_int = 10
    for i in range(10):
        num = random.randint(min_int, max_int)
        print 'Random between [%d and %d]: %d' % (min_int, max_int, num)

if __name__ == '__main__':
    main()
