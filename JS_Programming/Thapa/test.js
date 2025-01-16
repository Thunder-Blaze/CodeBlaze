// |> JSON carr Object
const carr = {
    name : "Volvo",
    year : 2020,
    age : function(curYear=2024){
        return curYear - this.year;
    }
}

// |> car class
class car {
    constructor(name="Porche",year=2000){
        this.name = name;
        this.year = year;
    }
    age() {
        return 2024 - this.year;
    }
}

// |> Inherited Wheel Class
class Wheel extends car {
    constructor(cr , wheel="ceat", type="tubeless"){
        super(cr.name,cr.year);
        this.wheel = wheel;
        this.type = type;
    }
}

x = new car ("Mercedes", 2019);
w1 = new Wheel(x, "f1");

console.log(x.age())
console.log(w1.wheel + " " + w1.type + " " + w1.name)