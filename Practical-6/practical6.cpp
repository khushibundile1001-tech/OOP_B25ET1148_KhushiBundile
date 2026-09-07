#include<iostream>
using namespace std;
class Complex{
   
    float real,img;
    public:
    void accept(){
   
    cout<<"\nEnter real and img part:";
    cin>>real;
    cin>>img;
    }
    void display()
   
    {cout<<"\n"<<real<<"+i\t"<<img;}
   
    Complex operator+(Complex c){
        Complex sum;
        sum.real=real+c.real;
        sum.img=img+c.img;
        return sum;
    }
   
    Complex operator-(Complex c){
    Complex sub;
    sub.real=real-c.real;
    sub.img=img-c.img;
    return sub;
    }
   
     Complex operator*(Complex c){
        Complex ans;
        ans.real=real*c.real-img*c.img;
        ans.img=real*c.img+img*c.real;
        return ans;
    }
   
    Complex operator/(Complex c){
        Complex sol;
        sol.real=(real*c.real+img*c.img)/(real*c.real+img*c.img);
        sol.img=(img*c.real-real*c.img)/(real*c.real+img*c.img);
        return sol;
    }
   
   
};
int main(){
    Complex c1,c2,c3,c4,c5,c6;
    cout<<"Value of c1 is:";
    c1.accept();
    c1.display();
    cout<<"\nValue of c2 is:";
    c2.accept();
    c2.display();
    cout<<"\nAddition of c1 and c2 is:";
    c3=c1+(c2);
    c3.display();
    cout<<"\nSubtraction of c1 and c2 is:";
    c4=c1-(c2);
    c4.display();
     cout<<"\nMultiplication of c1 and c2 is:";
    c5=c1*(c2);
    c5.display();
    cout<<"\nDivision of c1 and c2 is";
    c6=c1/(c2);
    c6.display();
   
return 0;}
