#include<iostream>
using namespace std;
int main() {
    
    cout << "Namaste Mohit" << endl;
    cout << "Power" << endl;

// Data type

    int a = 123;
    cout << a << endl;

    char b = 'v';
    cout << b << endl;

    bool bl = true;
    cout << bl << endl;

    float f = 1.2;
    cout << f << endl;

    double d = 1.23;
    cout << d << endl;

    int size = sizeof(d);
    cout << "Size of d is :" << size <<endl;

// Type casting
    int e = a;
    cout << e << endl;

    char n = 65;
    cout << n << endl;


/* Relational operators*/

    int y = 3;
    int z = 2;
    bool first = y==z;
    cout<< first << endl;

    bool second = y<z ;                                                                                          
    cout << second << endl;

    bool third = y>z;
    cout << third << endl;

    bool fourth = y <= z ;
    cout << fourth << endl;

    bool fifth =  y>=z ;
    cout << fifth << endl;

    bool sixth = y!=z;
    cout << sixth <<endl;

// Arithmatic Operators

    int k = 4, s = 5;
    cout << "The value of k + s is " << k + s << endl;
    cout << "The value of k - s is " << k - s << endl;
    cout << "The value of k * s is " << k * s << endl;
    cout << "The value of k / s is " << k / s << endl;
    cout << "The value of k % s is " << k % s << endl;
    cout << "The value of k++ is " << k++ << endl;
    cout << "The value of k-- is " << k-- << endl;
    cout << "The value of ++k is " << ++k << endl;
    cout << "The value of --k is " << --k << endl;

    int num;
    cout << "Enter the number : ";
    cin >> num;
    cout << "Your number is: " << num;
    return 0;
}

