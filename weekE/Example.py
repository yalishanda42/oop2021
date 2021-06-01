# python

class Person:
    def __init__(self, name="Ivan", age=0):
        self._name = name
        self.__age = age

    @property
    def name(self):
        return self._name

    @property
    def age(self):
        return self.__age

    @age.setter
    def age(self, new_value):
        self.__age = new_value
        print("Happy birthday!")


class Togglable:
    def toggle(self):
        pass


class Cyborg(Person, Togglable):
    def __init__(self, name="Ivan", age=0, is_evil=True):
        super().__init__(name, age)
        self.__is_evil = is_evil

    @property
    def is_evil(self):
        return self.__is_evil

    def toggle(self):
        self.__is_evil = not self.__is_evil

    @property
    def name(self):
        return "Cyber-" + self._name


p1 = Person()
p2 = Person("Pesho", 26)
p2.age += 1

p3 = p1 # does not copy the object!
c1 = Cyborg("Kiro Bota", 123, True)
p4: Person = Cyborg("Retired", 256, False) # kinda-polymorphism 1

army = [p1, p2, p3, c1, p4]

for soldier in army:
    print(soldier.name) # kinda-polymorphism 2
