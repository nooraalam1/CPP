#include<bits/stdc++.h>
using namespace std;

class animal{
public:
    void eat(){
        cout<<"Eats";
    }

};

class dog:public animal{
public:
    void bark(){
    cout<<"Dogs Bark";
    }

};


int main(){
dog d;
d.eat();
d.bark();

}
