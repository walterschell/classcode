import re
def ip_to_num(ip):
    match = re.search(r'^(\d{1,3})\.(\d{1,3})\.(\d{1,3})\.(\d{1,3})$', ip)
    if match is None:
        raise Exception('Cannot match ip in ->%s<-' % ip)
    octet1 = int(match.group(1))
    octet2 = int(match.group(2))
    octet3 = int(match.group(3))
    octet4 = int(match.group(4))
    result = 0
    result += octet1 << (3 * 8)
    result += octet2 << (2 * 8)
    result += octet3 << (1 * 8)
    result += octet4 << (0 * 8)
    return result

def num_to_ip(num):
    octet1 = 0xff & (num >> (3 * 8))
    octet2 = 0xff & (num >> (2 * 8))
    octet3 = 0xff & (num >> (1 * 8))
    octet4 = 0xff & (num >> (0 * 8))
    return '%d.%d.%d.%d' % (octet1, octet2, octet3, octet4)

def main():
    while True:
        data = raw_input('Enter something to convert: ')
        data = data.rstrip()
        try:
            num = int(data)
            print 'IP Address: %s' % num_to_ip(num)
        except:
            try:
                print 'Number: %d' % ip_to_num(data)
            except Exception as e:
                print str(e)


if __name__ == '__main__':
    main()


