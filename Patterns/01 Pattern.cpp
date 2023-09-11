/*Rules
1. For the outer loop , count the no. of lines.

2. For thr inner loop, focus on the columns, and connect them somehow to the rows.

3. Print them inside the inner for loop.

4. Observe symmetry [optional].
*/

#include<iostream>
using namespace std;

void print1(int n){
    for(int i=0;i<n;i++) 
    {
       for(int j =0; j <n; j++) {
        cout<<"* ";
       }
       cout<<endl;
    }
}
    int main(){
        int n;
        cin>>n;
        print1(n);
    }
