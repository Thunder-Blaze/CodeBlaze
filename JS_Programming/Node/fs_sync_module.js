const fs = require('fs');
const path = require('path')

const fileName = "test.txt";
const filePath = path.join(__dirname, fileName);

const writeFile = fs.writeFileSync(
    filePath,
    "This is the initial Data",
    "utf-8"
)

// const readFile = fs.readFileSync(filePath, "utf-8");
// console.log(readFile)

// const appendFile = fs.appendFileSync(filePath, "\nhello", "utf-8");

// const newFilePath = path.join(__dirname,"testUpdated.txt")
// const renameFile = fs.renameSync(filePath, newFilePath);

// const deleteFile = fs.unlinkSync(filePath);