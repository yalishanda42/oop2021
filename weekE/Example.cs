// C#

class Person
{
    protected string _name;  // this is called a field
    public string Name     // this is called a property
    {
        get
        {
            return _name;
        }
    }

    private int _age;
    public int Age
    {
        get => _age; // equivalent to { return _age; }
        set
        {
            _age = value;
            Console.WriteLine("Happy birthday!");
        }
    }

    public Person(string name = "Ivan", int age = 0)
        : _name(name), _age(age)
    {
    }
}

interface ITogglable
{
    public void Toggle();
}

class Cyborg: Person, ITogglable
{
    public bool IsEvil // automatic property
    {
        get;
        private set;
    }

    public override string Name
    {
        get
        {
            return "Cyber-" + base.Name;
        }
    }

    public Cyborg(string name = "Ivan", int age = 0, bool isEvil = true)
        : base(name, age)
    {
        this.IsEvil = isEvil;
    }

    public void Toggle()
    {
        IsEvil = !IsEvil;
    }
}


class Main
{
    static void Main(string[] args)
    {
        Person p1 = new Person();
        Person p2 = new Person("Pesho", 26);
        p2.Age += 1;

        Person p3 = p1; // not a copy constructor!
        Cyborg c1 = new Cyborg("Kiro Bota", 123, true);
        Person p4 = new Cyborg("Retired", 256, false); // polymorphism 1

        List<Person> army = new List<Person>();
        army.Add(p1);
        army.Add(p2);
        army.Add(p3);
        army.Add(c1);
        army.Add(p4);

        foreach (Person soldier in army)
        {
            Console.WriteLine(soldier.Name); // polymorphism 2
        }
    }
}