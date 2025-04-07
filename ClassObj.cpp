#include<bits/stdc++.h>
using namespace std;

class student{
public:
    string name;
    int age;
};
void print(student s1){
cout<<s1.name<<" "<<s1.age;
}
int main(){
student s1;
s1.name = "Noor";
s1.age = 22;
print( s1);
}
