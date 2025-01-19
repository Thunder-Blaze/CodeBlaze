const crypto = require("crypto")

const randomValue = crypto.randomBytes(8).toString("hex");
const hashValue = crypto.createHash("sha256").update("hello").digest("hex");

console.log(randomValue);
console.log(hashValue);
// console.log(crypto.createHash(""));