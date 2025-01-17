function Rectangle(a, b) {
    const rectangle = {
        length : a,
        width : b,
        perimeter : 2*(a+b),
        area : a*b,
    };
    return rectangle;
};


function main() {
    const a = 3;
    const b = 4;
    
    const rec = new Rectangle(a, b);
    
    console.log(rec.length);
    console.log(rec.width);
    console.log(rec.perimeter);
    console.log(rec.area);
};


main();