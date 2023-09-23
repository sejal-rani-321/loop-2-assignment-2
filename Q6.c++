// WAP to print the sum of a given number and its reverse.
// Sample Input : 12
// Sample Output : 33 [12+21]

#include<iostream>
using namespace std;

int main(){
    int n ;
    cout << " n : " << endl;
    cin >>n;
    int sum = 0;
    int reverse = 0;
    while(n > 0 ){
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
        
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
         reverse += i;
        cout << reverse << " ";
    }
        cout << reverse   << endl;
       
    // cout << sum  << " [ " << " 12 " << " + " << reverse << " ] "<< endl;
    
}