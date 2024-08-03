#include <stdio.h>

int main(){
    int num1 = 10;
    printf("%d\n", num1);

    float f_num = 3.14;
    printf("%f\n", f_num);

    double f_num2 = 3.14;
    printf("%lf\n", f_num2);

    long long large_num = 2143948230214;
    printf("%lld\n", large_num);

    char ch = 'A';
    printf("%c\n", ch);

    char name[20] = "John";
    printf("%s\n", name);

    int *ptr = NULL;
    printf("%p\n", (void*)ptr);


    // Width: Specifies the minimum number of characters to be printed. For example, %10d would print at least 10 characters wide, padding with spaces if necessary.

    int num2 = 42;
    printf("%10d\n", num2); // Output:        42

    // Precision: Specifies the number of digits to be printed after the decimal point (for floating-point numbers). For example, %.2f would print the number with two decimal places.

    float pi = 3.14159;
    printf("%.2f\n", pi); // Output: 3.14

    // Flags: Modify the output format, such as left or right alignment, padding with zeros, and showing the sign. Flags are preceded by the % character and can include:

    // +: Always print a sign character (+ or -) before the number.
    // -: Left-align the output within the given width.
    // 0: Pad the output with zeros instead of spaces.
    int num = 42;
    printf("%+d\n", num);  // Output: +42
    printf("%-5d\n", num); // Output: 42   
    printf("%05d\n", num); // Output: 00042
}