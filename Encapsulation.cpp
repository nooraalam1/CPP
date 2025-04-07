#include<bits/stdc++.h>
using namespace std;

class bankAcc{
private :
    int salary;
public:
    int setBalance(int b){
     salary = b;

    }
public:
    int getBalance(){
       return salary;
    }

};
class info{
public:
    string name;
};



int main(){

info in1;
in1.name="Noor";
cout<<in1.name;
bankAcc bank;
bank.setBalance(11000);
cout<<bank.getBalance();
}
