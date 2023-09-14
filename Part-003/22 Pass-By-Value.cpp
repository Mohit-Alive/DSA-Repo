#include<iostream>
using namespace std;
// Pass by value

void dummy(int n ) {
    n++;
    cout << " n is " << n <<endl;

}

int main() {

    int n;
    cin >> n;

    dummy(n);

    cout<<"number n is "<< n << endl;


    return 0;
}