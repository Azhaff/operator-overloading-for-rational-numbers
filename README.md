### Rational Number Class in C++

This project provides a comprehensive implementation of a Rational number class in C++. A Rational number is represented as a fraction of two integers: the numerator and the denominator. The class supports various arithmetic operations, comparison operators, and stream input/output operations.

### Features

1. **Constructor Overloading**: The class provides multiple constructors for different ways to initialize a Rational object.
2. **Destructor**: Properly manages the lifecycle of objects.
3. **Static Member**: Keeps track of the number of Rational instances.
4. **Simplification**: Automatically simplifies Rational numbers upon creation.
5. **Arithmetic Operations**: Supports addition, subtraction, multiplication, and division of Rational numbers.
6. **Comparison Operations**: Supports equality and relational operators.
7. **Unary Operations**: Includes increment, decrement, negation, and positive operators.
8. **Assignment Operations**: Includes assignment and compound assignment operators.
9. **Stream Operators**: Overloads `<<` and `>>` for easy input and output.

### Classes and Structure

#### `Rational` Class
- **Attributes**: `numerator`, `denominator`, `static int instanceCount`
- **Methods**:
  - **Constructors**: Default, single-parameter, and two-parameter constructors.
  - **Destructor**: Manages instance count.
  - **Getters and Setters**: Access and modify numerator and denominator.
  - **Simplify**: Reduces the fraction to its simplest form.
  - **Static Method**: `getInstanceCount` to get the number of instances.
  - **Arithmetic Operators**: `+`, `-`, `*`, `/`.
  - **Comparison Operators**: `==`, `!=`, `>`, `<`, `>=`, `<=`.
  - **Unary Operators**: `++`, `--`, `-`, `+`, `!`.
  - **Assignment Operators**: `=`, `+=`, `-=`, `*=`, `/=`.
  - **Friend Functions**: Overloads for `<<` and `>>`.

### How to Use

1. **Initialize Rational Objects**:
   ```cpp
   Rational a(2, 3); // 2/3
   Rational b(4, 7); // 4/7
   Rational c;       // 0/1
   ```

2. **Set Numerator and Denominator**:
   ```cpp
   c.setNumerator(3);
   c.setDenominator(4);
   ```

3. **Arithmetic Operations**:
   ```cpp
   Rational sum = a + b;
   Rational diff = a - b;
   Rational prod = a * b;
   Rational quot = a / b;
   ```

4. **Comparison Operations**:
   ```cpp
   bool isEqual = (a == b);
   bool isNotEqual = (a != b);
   bool isGreater = (a > b);
   bool isLess = (a < b);
   ```

5. **Unary Operations**:
   ```cpp
   Rational incremented = ++a;
   Rational decremented = --a;
   Rational negated = -a;
   bool isZero = !a;
   ```

6. **Assignment Operations**:
   ```cpp
   a += b;
   a -= b;
   a *= b;
   a /= b;
   ```

7. **Stream Operations**:
   ```cpp
   cout << a << endl;  // Prints the Rational number
   cin >> a;           // Reads a Rational number
   ```

8. **Instance Count**:
   ```cpp
   cout << "Instance count: " << Rational::getInstanceCount() << endl;
   ```

### Example Usage

```cpp
#include <iostream>
#include "Rational.h"

using namespace std;

int main() {
    Rational a(2, 3); 
    Rational b(4, 7); 
    Rational c;       

    c.setNumerator(3);
    c.setDenominator(4);
    cout << "c = " << c << endl;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;

    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    cout << "++a: " << ++a << endl;
    cout << "--a: " << --a << endl;
    cout << "-a: " << -a << endl;
    cout << "+a: " << +a << endl;
    cout << "!a: " << !a << endl;

    a += b;
    cout << "a += b: " << a << endl;
    a -= b;
    cout << "a -= b: " << a << endl;
    a *= b;
    cout << "a *= b: " << a << endl;
    a /= b;
    cout << "a /= b: " << a << endl;

    cout << "Instance count: " << Rational::getInstanceCount() << endl;

    return 0;
}
```

### How to Compile and Run

1. **Compile**: Use a C++ compiler to compile the files. For example:
   ```sh
   g++ -o RationalProgram main.cpp Rational.cpp
   ```
2. **Run**: Execute the compiled program:
   ```sh
   ./RationalProgram
   ```

### Future Enhancements

- **Error Handling**: Improve error handling for invalid inputs and operations.
- **Advanced Simplification**: Implement more efficient algorithms for fraction simplification.
- **Extended Operations**: Add more mathematical operations and utility functions.

This project showcases the power of operator overloading and class design in C++, providing a practical and comprehensive example of managing Rational numbers.
