#include <iostream>
using namespace std;

int main(){

    int a;
    int b,c;
    int *p;
    int *q;

    p=&a;
    q=&b;

    a=2;
    b=5;
    //*p =3;

    c= *p + *q;

    // cout << "the value of a is (from actual variable type)" << a << endl;
    // cout << "the value of a from the pointer using * : " << *p<< endl;
    
    cout << "the value of c is: "<< c<< endl;

    cout << "the address of a is: "<<&a<< " the value of pointer is: "<<p<<endl;

    return 0;
}
