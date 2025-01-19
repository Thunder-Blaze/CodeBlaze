const path = require('path');

console.log(__filename);
console.log(__dirname);

const filePath = path.join("folder", "students", "data.txt");
console.log(filePath);

const parsedData = path.parse(filePath);
const resolvedPath = path.resolve(filePath);
const extname = path.extname(filePath);
const basename = path.basename(filePath);
const dirname = path.dirname(filePath);
const sep = path.sep;

console.log({parsedData, resolvedPath, extname, basename, dirname, sep})