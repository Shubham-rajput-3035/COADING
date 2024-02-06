const fs = require("fs");
let text = fs.readFileSync("TextData.txt", "utf-8");
// const text = fs.readFileSync("js.txt", "utf-8");
text = text.replace("Rajput", "Babuaan");

console.log("The content of the file is");
console.log(text);

console.log("Creating a new file.....");
fs.writeFileSync("shubham.txt", text);