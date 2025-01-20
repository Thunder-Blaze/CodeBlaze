// CLI File Creation App

import readline from 'readline';
import fs from 'fs';
import path, {dirname} from 'path';
import { fileURLToPath } from 'url';

const __dirname = dirname(fileURLToPath(import.meta.url));

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
})

const writeFile = (filename, value) => {
    fs.promises.writeFile(path.join(__dirname, filename), value, "utf-8")
    .then(console.log(`File ${filename} Created Successfully`))
    .catch((err)=>(console.log("Error Creating File: ", err)))
    .finally(rl.close())
}

const handleInput = (filename) => {
    if (filename.trim()!==""){
        filename+=".txt";
        rl.question("Enter File Content: ", (val) => {
            writeFile(filename, val);
        })
    } else {
        console.log("Invalid Input Given");
        console.log("Quitting...");
        rl.close();
    }
}

rl.question("Enter the File Name: ", handleInput);