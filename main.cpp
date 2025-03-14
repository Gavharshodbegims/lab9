#include <iostream>
using namespace std;

//multiplication
int multiply(int a, int b) {

    if (b == 0)
        return 0;
    if (b < 0)
        return -multiply(a, -b);

    return a + multiply(a, b - 1);
}
//factorial
int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

//fibonacci
int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

//sumofnaturalnumbers
int sumNatural(int n) {
    if (n == 0)
        return 0;
    return n + sumNatural(n - 1);
}

//descendingnumbers
void printDescending(int n) {
    if (n == 0)
        return;
    cout << n << " ";
    printDescending(n - 1);
}

//numberofdigits
int countDigits(int n) {
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

//sumofdigits
int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

//xpowery
int power(int x, int y) {
    if (y == 0)
        return 1;
    return x * power(x, y - 1);
}

//reversenumber
int reverseNumber(int n, int digits) {
    if (n == 0)
        return 0;
    return (n % 10) * pow(10, digits - 1) + reverseNumber(n / 10, digits - 1);
}

//palindrome
bool isPalindrome(int n, int reversed) {
    return n == reversed;
}

//primenumber
bool isPrime(int n, int divisor = 2) {
    if (n <= 1) {
        return false;
    }
    if (divisor > std::sqrt(n)) {
        return true;
    }
    if (n % divisor == 0) {
        return false;
    }
    return isPrime(n, divisor + 1);
}

int main() {
    //problem1

    // int num1, num2;
    // cout << "Enter two numbers: ";
    // cin >> num1 >> num2;
    //
    // int result = multiply(num1, num2);
    // cout << "Product: " << result << endl;
    //
    // return 0;


    //problem2

    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    //
    // int result = factorial(num);
    // cout << "Factorial: " << result << endl;
    //
    // return 0;

    //problem3

    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    //
    // int result = fibonacci(num);
    // cout << "Fibonacci number: " << result << endl;
    //
    // return 0;

    //problem4

    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    //
    // int result = sumNatural(num);
    // cout << "Sum of first " << num << " natural numbers: " << result << endl;
    //
    // return 0;

    //problem5

    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    //
    // cout << "Numbers from " << num << " to 1: ";
    // printDescending(num);
    // cout << endl;
    //
    // return 0;

    //problem6

    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // int result;
    // if (num == 0)
    //     result = 1;
    // else
    //     result = countDigits(num);
    // cout << "Number of digits: " << result << endl;
    // return 0;

    //problem7

    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // cout << "Sum of digits: " << sumOfDigits(num) << endl;
    // return 0;

    //problem8

    // int base, exponent;
    // cout << "Enter base and exponent: ";
    // cin >> base >> exponent;
    // int result = power(base, exponent);
    // cout << base << "^" << exponent << " = " << result << endl;
    // return 0;

    //problem9

    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // int digits = countDigits(abs(num));
    // int reversed = reverseNumber(abs(num), digits);
    // if (num < 0)
    //     reversed = -reversed;
    // cout << "Reversed number: " << reversed << endl;
    // return 0;

    //problem10

    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // int digits = countDigits(abs(num));
    // int reversed = reverseNumber(abs(num), digits);
    // if (isPalindrome(abs(num), reversed))
    //     cout << num << " is a palindrome." << endl;
    // else
    //     cout << num << " is not a palindrome." << endl;
    // return 0;

    //problem11

    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;




















    }


// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.