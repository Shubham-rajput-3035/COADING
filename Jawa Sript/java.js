console.log("This is Tutorial 53");

function greet(name, greetText = "Greetings from javascript") {
    let name1 = "name1";
    console.log(greetText + " " + name);
    console.log(name + " is a good boy");
}

function sum(a,b,c) {
    let d = a + b + c;
    return d;
    // This line will never execute (Unreachable code)
    // console.log("Function is returned")
}






let name = "Shubham";
let name1 = "Ankit";
let name2 = "Shivam";
let name3 = "Ramu";
let name4 = "Saurabh";
let name5 = "Satyam";
let greetText = "Good Morning";
greet(name, greetText);
greet(name1, greetText);
greet(name2, greetText);
greet(name3, greetText);
greet(name4, greetText);
greet(name5, greetText);
// console.log(name + " is a good boy");
// console.log(name1 + " is a good boy");
// console.log(name2+ " is a good boy");
// console.log(name3 + " is a good boy");
// console.log(name4 + " is a good boy");
// console.log(name5 + " is a good boy");
// let returanVal = greet(name3);
// console.log(returanVal); 

let returanVal = sum(1, 2, 3);
console.log(returanVal); 