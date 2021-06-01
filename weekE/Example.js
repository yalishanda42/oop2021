// Javascript

class Person {
    get age() {
        return this.__age
    }
    set age(val) {
        this.__age = val
        console.log("Happy birthday!")
    }
    get name() {
        return this._name
    }
    constructor(name, age) {
        this._name = name || "Ivan"
        this.__age = age || 0
    }
}

class Cyborg extends Person {
    constructor(name, age, isEvil) {
        super(name, age)
        this.__isEvil = isEvil || true
    }
    get name() {
        return "Cyber-" + this._name
    }
    get isEvil() {
        return this.__isEvil
    }
    toggle() {
        this.__isEvil = !this.__isEvil
    }
}

const p1 = new Person()
const p2 = new Person("Pesho", 26)
p2.age += 1

const p3 = p1 // does not copy the object!
const c1 = new Cyborg("Kiro Bota", 123, true)

const army = [p1, p2, p3, c1]

for (const soldier of army) {
    console.log(soldier.name) // kinda-polymorphism
}
