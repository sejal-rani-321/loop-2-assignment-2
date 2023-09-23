#include <iostream>
using namespace std;


int main( ) {
for (int x = 1; x * x <= 10; x++)
    
cout << "In for loop" << endl;

}

// OUTPUT: In for loop
//         In for loop
//         In for loop

//  because : t run 3 times  x = 1 / 1 ----> 1 
//                           x = 2 / 2 ----> 4
//                           x = 3 / 3 ----> 9     