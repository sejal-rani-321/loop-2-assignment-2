// WAP to print the sum of all the even digits of a given number.
// Sample Input : 4556
// Output: 10

#include<iostream>
using namespace std;

int main(){

    int n ;
    cout << " enter a number: ";
    cin >>n;

    int sum = 0;
    while(n > 0){
         int digit = n % 10;
         int i = (digit % 2 == 0 ? digit : 0);
         sum += i;
         
         n /= 10;
    }
     
        cout << sum;

    
}