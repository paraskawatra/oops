#include <iostream>
using namespace std;
class person
{
 public:
 bool a;
 person(bool a=0){
    this-> a=a;
 }
 void display(){
     cout<<"value of a "<<a;
 }
 void operator!(){
     a=~a;
 }
};
int main(){
    int n;
    cin>>n;
    person obj(n);
    !obj;
    obj.display();
}
// pracheta's commit
//this is 2nd commit
// palak's commit
// this is 3rd and final commit
//here it is 
// let's go
