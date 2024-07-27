// var
// -> var is globally scoped
// -> we can both redeclare or redefine a var variable
//
// var a = "a";
// {
//     var a = "c";
//     console.log(a);  // gives c
// }
// console.log(a);      // gives c
// var a = "l";         // works
// a = "b";             // works









// let
// -> let is block scoped
// -> we can't redeclare but can redefine a let variable
//
// let a = "a";
// {
//     let a = "c";
//     console.log(a);  // gives c
// }
// console.log(a);      // gives a
// let a = "l";         // doesn't works (Error)
// a = "b";             // works









// const
// -> let is block scoped
// -> we can't redeclare or redefine a const variable
// -> we have to declare and define a const variable at once
// (in var and let, this can be done seperately)

// const a = "a";
// {
//     const a = "c";
//     console.log(a);  // gives c
// }
// console.log(a);      // gives a
// const a = "l";       // doesn't works (Error)
// a = "b";             // doesn't works (Error)
// const a              // gives Error (only declared and not defined)

