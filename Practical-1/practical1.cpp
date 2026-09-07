#include <iostream>
using namespace std;
    int fact(int m){
    int fact=1;
   {
        for(int i=1;i<=m;i++) {
            fact*=i;
        }
   }
   return fact;
    }

   int Bcoe(int n, int r){
   int Bcoe=fact(n)/(fact(r)*fact(n-r));
    return Bcoe;
   }
   
   void pas(int a){
    for(int i=0;i<a;i++){
        for (int space=0;space<a-i-1;space++){
        cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<Bcoe(i,j)<<" ";
        }
        cout<<endl;
    }
   }
   
   
int main() {
    int lines;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> lines;
    
    pas(lines);
    
    return 0;
}