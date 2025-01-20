// > CLI Todo App

import readline from 'readline'

const rl = readline.createInterface({
    input : process.stdin,
    output: process.stdout,
})

const todos = [];

const showMenu = () => {
    console.log("\n1: Add a Task")
    console.log("2: View Tasks")
    console.log("3: Exit")
    rl.question("Choose an Option: ", handleInput);
}

const handleInput = (option) => {
    if (option === '1') {
        rl.question("Enter a Task: ", (task)=>{
            todos.push(task);
            console.log("Task Added: ", task);
            showMenu()
        })
    } else if (option === '2') {
        console.log('\nYour Todo Lists')
        todos.forEach((todo, index) => {
            console.log(`${index+1}: ${todo}`);
        })
        showMenu()
    } else if (option === '3') {
        console.log("Goodbyee");
        rl.close()
        // process.exit(0);
    } else {
        showMenu();
    }
}

showMenu()