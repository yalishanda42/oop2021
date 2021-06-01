// Java

import java.util.ArrayList;

class Person {

    private int age;
    protected String name;

    public Person() {
        name = "Ivan";
        age = 0;
    }

    public Person(String name) {
        this.name = name;
        age = 0;
    }

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    String getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    void setAge(int newValue) {
        age = newValue;
        System.out.println("Happy birthday!");
    }
}

interface Togglable {
    void toggle();
}

class Cyborg extends Person implements Togglable {

    private boolean isEvil;

    public Cyborg() {
        super();
        isEvil = true;
    }

    public Cyborg(String name) {
        super(name);
        isEvil = true;
    }

    public Cyborg(String name, int age) {
        super(name, age);
        isEvil = true;
    }

    public Cyborg(String name, int age, boolean isEvil) {
        super(name, age);
        this.isEvil = isEvil;
    }

    public boolean getIsEvil() {
        return isEvil;
    }

    @Override
    public String getName() {
        return "Cyber-" + super.getName();
    }

    @Override
    public void toggle() {
        isEvil = !isEvil;
    }
}


public class Main {
    public static void main(String args[]) {
        Person p1 = new Person();
        Person p2 = new Person("Pesho", 26);
        p2.setAge(p2.getAge() + 1);

        Person p3 = p1; // not a copy constructor!
        Cyborg c1 = new Cyborg("Kiro Bota", 123, true);
        Person p4 = new Cyborg("Retired", 256, false); // polymorphism 1

        ArrayList<Person> army = new ArrayList<Person>();
        army.add(p1);
        army.add(p2);
        army.add(p3);
        army.add(c1);
        army.add(p4);

        for (Person soldier : army) {
            System.out.println(soldier.getName()); // polymorphism 2
        }
    }
}