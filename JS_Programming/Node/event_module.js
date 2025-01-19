// > Events Module

// Import EventEmitter Class
const EventEmitter = require('events');
// Create a Instance of EventEmitter
const Emitter = new EventEmitter();

// Define a Event (on / addListener)
Emitter.on("greet", (name, work) => {
    console.log("Hello World !");
    console.log(`Nice to meet you, ${name} !!`);
    console.log(`Let's ${work} !!!\n`);
});

// Trigger the given Event (emit)
Emitter.emit("greet", "ThunderBlaze", "Code");

// ! But It's better to take a single argument as an object

const userDetails = {
    name: "ThunderBlaze",
    work: "Code"
}

Emitter.on("greetObject", (obj) => {
    console.log("Hello World !");
    console.log(`Nice to meet you, ${obj.name} !!`);
    console.log(`Let's ${obj.work} !!!\n`);
});

Emitter.emit("greetObject", userDetails);