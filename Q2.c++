#include <iostream>
using namespace std;

int main( ) {
int t = 10;

while (t /= 2) {
cout << "Hello" << endl;
}
}


// OUTPUT: Hello
//         Hello
//         Hello

//  because : t run 3 times  t = 10 / 2 ---> 5  
//                           t = 5 / 2 ----> 2
//                           t = 2 / 2 ----> 1     