// Swift

class Person {

    private let _name: String  // stored property
    var name: String {       // computed property
        get {
            return _name
        }
    }

    var age: Int {
        didSet { // property observer
            print("Happy Birthday!")
        }
    }

    init(name: String = "Ivan", age: Int = 0) {
        self._name = name
        self.age = age
    }
}

protocol Togglable {
    func toggle()
}

class Cyborg: Person, Togglable {

    private(set) var isEvil: Bool

    override var name: String {
        return "Cyber-" + super.name
    }

    init(name: String = "Ivan", age: Int = 0, isEvil: Bool = true) {
        self.isEvil = isEvil
        super.init(name: name, age: age)
    }

    func toggle() {
        isEvil = !isEvil
    }
}


let p1 = Person()
let p2 = Person(name: "Pesho", age: 26)
p2.age += 1

let p3 = p1 // not a copy constructor!
let c1 = Cyborg(name: "Kiro Bota", age: 123, isEvil: true)
let p4: Person = Cyborg(name: "Retired", age: 256, isEvil: false) // polymorphism 1

let army: [Person] = [p1, p2, p3, c1, p4]

for soldier in army {
    print(soldier.name) // polymorphism 2
}