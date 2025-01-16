// https://youtu.be/13gLB6hDHR8?t=28770

console.log("Hello");

var myAge = 10;
console.log("My age is " + myAge)


//? Arrays
// Index ->         0       1           2           3           4
const persons = ["Eren", "Historia", "Isagi", "Accelerator", "Railgun"]
var person = new Array("Eren", "Historia", "Isagi", "Accelerator", "Railgun")

persons[1]          // Historia
persons[-1]         // Error
persons.at(1)       // Historia
persons.at(-1)      // Railgun

//Iterating Values (For-Of Loop)
for (const item of persons) {
    console.log(item);
}

// Iterating Indexes/Keys (For-In Loop)
for (const item in persons) {
    console.log(item);
}

const numbers = [1,2,3,4,5]

// Iterate over each element and value (ForEach) (Returns Nothing)
numbers.forEach((val, ind)=>{
    console.log(`${ind} ${val}`)
})

// Map - returns new array with modified values 
let mappedarr = numbers.map((val)=>{
    return val*val;
})
console.log(mappedarr)

// Push, Pop, Unshift, Shift
console.log(numbers.push(9)) // Returns Array Length after adding in end i.e. 6
console.log(numbers.pop()) // Removes last element and returns removed element i.e. 9
console.log(numbers.unshift(0)) // Returns Array Length after adding at start i.e. 6
console.log(numbers.shift()) // Removes first element and returns removed element i.e. 0

// Splice (Returns Removed Elements)
//* syntax -> arr.splice(startIndex, deleteCount, itemsToBeInsertedSeperatedByCommas)
console.log(persons.splice(1,2,"ImagineBreaker","MindZero","Meltdown"))
console.log(persons)

// Indexes =>     0   1   2   3   4   5   6   7
const somearr = ["a","b","c","a","d","e","a","f"]


//* IndexOf - Returns index of first appearance of the given item in the array
console.log(somearr.indexOf("a"))
console.log(somearr.indexOf("k"))
// We can also mention which index to start searching from
console.log(somearr.indexOf("a",1))
//* LastIndexOf - Returns index of last appearance of the given item in the array
console.log(somearr.lastIndexOf("a"))
//* Includes - Returns true if the given item is present in the array else false
console.log(somearr.includes("d"))
// We can also mention which index to start searching from
console.log(somearr.includes("d",5))

//? Find
// Same syntax as map and returns the first element that matches the condition else returns undefined
console.log(somearr.find((ele)=>{
    return ele>"a";
}))

//? FindIndex
// Same syntax as map and returns the index of first element that matches the condition else returns undefined
console.log(somearr.findIndex((ele)=>{
    return ele>"a";
}))

//? Filter
// Same syntax as find, returns array of all the element which satisfies the condition
console.log(somearr.filter((ele)=>{
    return ele>"a";
}))

//TODO write a function to return an array containing only the products having the price less than equal to 500 
const products = [
    { name: "Laptop", price: 1200 },
    { name: "Phone", price: 800 },
    { name: "Tablet", price: 300 },
    { name: "Smartwatch", price: 150 },
]
console.log(products.filter((elem)=>{
    return elem.price<=500;
}))


//TODO Filter Unique values from somearr
console.log(somearr.filter((Elem, Ind, Arr)=>{
    return Ind==Arr.indexOf(Elem)
}))

// ? Sort
console.log(persons.sort())

const somenum = [1,2,3,4,5,12,32,34,45]
console.log(somenum.sort()) //! Doesn't work as expected in case of numbers

//* Sort with "Compare" Callback function
console.log(somenum.sort((a,b)=>{
    if (a>b) return 1
    else return -1
}))

// TODO Print names with their first letter capitalized
const names = ["akira","vi","jinx"]


console.log(names.map((elem)=>{
    return (elem[0].toUpperCase() + elem.slice(1,elem.length));
}))


//? Reduce
// syntax => 
    // array.reduce((accumulator, currentValue, index, array)=>{
    //     //Code to be written
    // },initialValue)
const prices = [11,223,343,434,23,564,64,99]
total_cost = prices.reduce((accum,currElem)=> {
    return accum + currElem;
}, 0)
console.log(total_cost)

const text = "Attack on Titan on"
console.log(text.indexOf("on"))

let strArr = Array.from(text);
console.log(strArr)

// ? Search
// It cannot take start index parameter but it works with REGEX
console.log(text.search(/ON/))
console.log(text.search(/ON/i))


//? Match
// returns null if it cannot find the given value else it returns an array of all the found given values
console.log(text.match("on"))
console.log(text.match(/on/g))
// in this the js converts the normal text into regular expressions without the g flag

//? MatchAll
console.log(text.matchAll("on"))
//! in this the js converts the normal text into regular expressions with the g flag
console.log(...text.matchAll("on"))


//* StartsWith
// returns true or false if the variable starts with the given string
// you can also mention start index but there's not much point
console.log(text.startsWith("Att"))
console.log(text.startsWith("Attc"))


//> Math Functions

//? Math.PI => can be directly used

//* Math.round()
// - Rounds to nearest integer
console.log(Math.round(4.5))
console.log(Math.round(5.2))

//* Math.floor()
// - Always Rounds down to nearest integer
console.log(Math.floor(4.9))
console.log(Math.floor(5.2))

//* Math.ceil()
// - Always Rounds Up to nearest integer
console.log(Math.ceil(4.9))
console.log(Math.ceil(5.2))

//* Math.abs()
// - Removes sign of the number
console.log(Math.abs(4))
console.log(Math.abs(-5))

//* Math.trunc()
// - Removes the decimal part completely
console.log(Math.trunc(4.9))
console.log(Math.trunc(5.2))

//* Math.sign()
// - Tells the sign of the number => 1, 0, -1
console.log(Math.sign(4))
console.log(Math.sign(0))
console.log(Math.sign(-5))

//* Math.pow(x, y)
// - Returns base x to the power of y
console.log(Math.pow(2, 4))

//* Math.sqrt(x)
// - Returns the square root of x
console.log(Math.sqrt(4))

//* Math.log(x)
// - Returns the natural logarithm of x
console.log(Math.log(1e3))

//* Math.log2(x)
// - Returns the natural logarithm of x to the base 2
console.log(Math.log2(4))

//* Math.random()
// - Returns a random number in [0, 1)
// - To generate a random no b/w 1 to 100 => Math.floor(Math.random())*100+1
console.log(Math.floor(Math.random())*100+1)


// <|        Window and Document        |> 
// |> Window
// - Window is the main container or we can say the global Object and any operations related to entire browser window can be a part of window object.
// - All the members like objects, methords or properties. If they are the part of window object, then we do not refer the window object
// - Windows has methords, properties and object. Eg - setTimeout() or setInterval() are the methords, whereas the Document is the object of Window and it also has a screen object with properties describing the physical display

// |> Document
// - DOM is the child of window object
// - In DOM we need to refer to the document, if we want to use the document object, methords or properties
// - Document is just the object of the global object that is Window, which deals with the document's HTML elements themselves

// ! BOM (Browser Object Model)
// ? The BOM represent the browser as an object and provides methords and properties for interacting with the browser itself (not directly related to the content of a web page).
// - navigator (Browser Info), screen, location (Url Manipulation), frames, history, XMLHttpRequest

// = So, while the DOM is focused on the content of the webpage, the BOM is focused on the browser enviornment. The window object serves serves as the global object that encompasses both the DOM when working in a browser enviornment

// ! DOM (Document Object Model)
//  ? The DOM is a tree like representation of the HTML Document.
// - It provides a way to interact with the html document using Javascript.
// - The DOM provides multiple properties and methords to dynamically change the content of the HTML Document using JS

// * DOM Properties
// - document
// - getElementById(id)
// - getElementsByClassName(className)
// - getElementsByTagName(tagName)
// - querySelector(selector)
// - querySelectorAll(selector)
// - outerHTML
// - innerHTML
// - innerText
// - textContent
// - style


// * DOM Methords
// - createChild(tagName)
// - appendChild(node)
// - removeChild(node)
// - addEventListener(event, function)
// - removeEventListener(event, function)
// - setAttribute(name, value)
// - getAttribute(name)
// - parentNode / parentElement
// - childNodes / children
// - firstChild / firstElementChild
// - lastChild / lastElementChild
// - nextSibling / nextElementSibling
// - previousSibling / previousElementSibling
// - closest(selector)
// - forEach(Array.from)


// * Window Methords
// window.open("https://anime.us","_blank")



// https://youtu.be/13gLB6hDHR8?list=PLwGdqUZWnOp3F_J159kfx22z7VmJ7LfU8&t=40463


//> Comment Markdown
// https://youtu.be/13gLB6hDHR8?t=31417








/*
normal
* Important
? remember
! danger
> Style
Todo list
done list
_wlele
================ Welll ================
*/