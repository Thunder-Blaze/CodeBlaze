function reverseString(s) {
    try{
        s=s.split('').reverse().join('');   // Sucess 
    } 
    catch(e){
        console.log(e.message);             // Error
    } 
    finally {
        console.log(s);                     // To be done after Error or Success
    }
}


function main() {
    const s1 = "1234";
    console.log("Output 1 =>");
    reverseString(s1);
    console.log();
    const s2 = 1234;
    console.log("Output 2 =>");
    reverseString(s2);
    console.log();
}

main();