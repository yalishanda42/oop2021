// C++

#include <iostream>
#include <string>
#include <vector>

class Person
{
private:
    int age;

protected:
    std::string name;

public:
    Person(std::string name = "Ivan", int age = 0)
        : name(name)
        , age(age)
    {
    }

    virtual ~Person() = default;

    virtual std::string getName() const
    {
        return name;
    }

    int getAge() const
    {
        return age;
    }

    void setAge(int newValue)
    {
        age = newValue;
        std::cout << "Happy birthday!" << std::endl;
    }
};

class Togglable
{
public:
    virtual void toggle() = 0;
};

class Cyborg : public Person, public Togglable
{
private:
    bool isEvil;

public:
    Cyborg(std::string name = "Ivan", int age = 0, bool isEvil = true)
        : Person(name, age)
        , isEvil(isEvil)
    {
    }

    bool getIsEvil() const
    {
        return isEvil;
    }

    std::string getName() const override
    {
        return std::string("Cyber-") + name;
    }

    void toggle() override
    {
        isEvil = !isEvil;
    }
};


int main(int argc, char** argv)
{
    Person p1;
    Person* p2 = new Person("Pesho", 26);
    p2->setAge(p2->getAge() + 1);

    Person p3 = p1; // copy constructor
    Cyborg* c1 = new Cyborg("Kiro Bota", 123, true);
    Person* p4 = new Cyborg("Retired", 256, false); // polymorphism 1

    std::vector<Person*> army;
    army.push_back(&p1);
    army.push_back(p2);
    army.push_back(&p3);
    army.push_back(c1);
    army.push_back(p4);

    for (const Person* soldier : army)
    {
        std::cout << soldier->getName() << std::endl; // polymorphism 2

    }

    delete p2;
    delete c1;
    delete p4;

    return 0;
}