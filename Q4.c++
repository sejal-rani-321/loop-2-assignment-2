#include<iostream>
using namespace std;


int main( ) {
int x = 10, y = 0 ;
while ( x >= y ) {
x-- ;
y++ ;
cout << x << " " << y << endl ;
}
}

// OUTPUT: 9 1
//         8 2
//         7 3
//         6 4
//         5 5
//         4 6    // false condition (x >=y)