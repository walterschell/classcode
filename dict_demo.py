def main():

    ages = {}
    ages["Alice"] = 29
    ages["Bob"] = 21
    ages["Eve"] = 30

    for name in ages.keys(): 
        print '%s: %s' % (name, ages[name])

if __name__ == '__main__':
    main()

