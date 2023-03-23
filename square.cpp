#include <iostream>
using namespace std;
void solve( int n ){
   int i, j, k;
   for( i = 1; i <= n; i++ ) {
      for( j = 1; j <= n; j++ ) {
         cout << "* ";
      }
      cout << endl;
   }
}
int main(){
   int n = 10;
   cout << "Complete Square Star Pattern of " << n << " lines:" <<
       endl;
   solve( n );
}
