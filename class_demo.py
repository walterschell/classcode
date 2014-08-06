from datetime import date
def current_year():
    return date.today().year
class Person:
    def __init__(self, first_name = None, DOB = None):
        self.first_name = first_name
        self.DOB = DOB

    def age(self):
        if self.DOB is not None:
            return current_year() - self.DOB
        return None

    def set_DOB(self, DOB):
        self.DOB = DOB

def main():
    person1 = Person('Alice', 1980)
    person2 = Person()
    person2.first_name = 'Bob'
    person2.set_DOB(1986)
    for person in (person1, person2):
        print 'Name: %s, Age: %d' % (person.first_name, person.age())

if __name__ == '__main__':
    main()

