// Old Style Function defination 
function Avg(x,y){
    console.log("The average of "+x+" and "+y+" is",((x+y)/2))
    console.log("Rounded Avg is",Math.round((x+y)/2))
}


// Arrow Function Defination (Modern Style)
const sum = (p, q) => {
    return p+q
}


// Void Function (Returns Nothing)
const hello = () => {
    console.log("Hey, How are you ?");
}

let a = 1;
let b = 2;
let c = 3;

// Calling of Functions

Avg(a,b);
Avg(b,c);
Avg(c,a);

console.log("\nSum of 9 and 7 = "+sum(9,7));
hello();
hello();