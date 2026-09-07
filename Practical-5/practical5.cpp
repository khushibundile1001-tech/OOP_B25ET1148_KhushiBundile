#include <iostream>
using namespace std;

int add(int m, int n){
    int sum=0;
    cout<<"enter m and n:";
    cin>>m;
    cin>>n;
    sum=m+n;
    cout<<"addition of m and n is:";
    return sum; 
 } 

float add(float x, float y, float z){
    float sum=0;
    cout<<"\nenter x, y, z:";
    cin>>x;
    cin>>y;
    cin>>z;
    sum=x+y+z;
    cout<<"addition of x, y, z is:";
    return sum;
}

float area(float r){
    float area=0;
    cout<<"\nenter r:";
    cin>>r;
    area=3.14*r*r;
    cout<<"area of circle is:";
    return area;
}

int area(int a){
    int area=0;
    cout<<"\nenter a:";
    cin>>a;
    area=a*a;
    cout <<"area of square is:";
    return area;
}
 
int main(){ 
    int m, n, a;
    float x, y, z, r;
    cout<<add( m, n);
    cout<<add(x,y,z);
    cout<<area(r);
    cout<<area(a);
    return 0;
}