// Print first ‘n’ fibonacci numbers.
// Sample Input : 10
// Output :

// 1 1 2 3 5 8 13 21 34 55

#include<iostream>
using namespace std;

int main(){

    int n ;
    cout << " Enter n : " << endl;
    cin >> n;
    
     int fibno;
    int f = 0;
    int s = 1;

    for (int i = 1; i <= n; i++)
    {
         if (i == 1){
             cout << f << " ";
             continue;
         }
         if (i == 2){
             cout << s << " ";
             continue;
        }
       int fibno = f + s;
            f = s;
            s = fibno;
        cout << fibno << " ";

    }
      
    cout << endl;
    
}