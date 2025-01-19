const fs = require('fs');
const path = require('path');

const fileName = "asynctest.txt"
const filePath = path.join(__dirname, fileName);

fs.writeFile(filePath, "Hello", "utf-8", 
    (err) => {
        if (err) console.error(err);
        else console.log("File has been Saved");
    }
)


fs.readFile(filePath, "utf-8", 
    (err) => {
        if (err) console.error(err);
        else {
            console.log("File has been Read");
            console(data);
        };
    }
)

// https://www.youtube.com/watch?v=1XpHX3LB_oE&list=PLwGdqUZWnOp3KELplHtc-RnJ5xTUPqdgH&index=11
// https://youtu.be/QC-c59ZNAno?t=453