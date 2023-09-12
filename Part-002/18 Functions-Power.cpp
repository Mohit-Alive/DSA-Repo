#include<iostream>
using namespace std;
// Functions ------> Power

int power(int a, int b) {
    cin>> a >> b;

    int ans = 1;

    for(int i = 1; i <= b; i++) {
        ans = ans * a;
    }

    return ans;
}


int main()
{
   int c , d;
   int e, f;
   int g, h;

   // cin>> c >> d;

    int a1 = power(c,d);
    cout << " answer is " << a1 << endl;

    int a2 = power(e,f);
    cout << " answer is " << a2 << endl;

    int a3 = power(g,h);
    cout << " answer is " << a3 << endl;


    return 0;
}