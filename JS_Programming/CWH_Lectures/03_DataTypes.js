// Primitive Data Types

let a = null;                       // null
let b = 123;                        // number
let c = true;                       // boolean
let d = BigInt(567) + BigInt(3);    // bigint
let e = "Hello";                    // string
let f = Symbol("I am");             // symbol
let g = undefined;                  // undefined
// or only "let g"

// console.log(a, b, c, d, e, f, g);
// console.log(typeof f);
console.log(false+" hello");        // falsehello (concatenates)
console.log(true+23);               // 24 (Interprets true as 1 and false as 0)
console.log("10"-10);               // 0 (Interprets "10" as 10)
console.log("x10"-10);              // NaN (Not a Number)


// Non Primitive Data Type
// Objects in JS (Dictionary in Python)
const item = {
    "Anime" : "AOT",
    "Year" : 2013,
    "GOAT" : true,
    "Ending" : undefined
}
console.log(item["Anime"],"was released in",item["Year"])
// console.log(item["Anime"])    // This will give undefined