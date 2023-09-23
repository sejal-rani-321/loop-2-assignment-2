/*Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
each digit of the number is equal to the number itself, then the number is called an Armstrong
number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
Output :
1
153
370
371
407 */

#include<iostream>
using namespace std;

int main(){

    int n = 153, sum = 0;
    //  cout << " n : " << endl;
    //  cin >> n;
    
    while (n > 0){

        int digit = n % 10;
        sum = sum + (digit*digit*digit);
        n = n/10; 
        cout << digit * digit * digit  << endl;
        
    }
    cout << endl << sum ; 
    

}