#include<iostream>
using namespace std;

bool is_prime(unsigned long int a){
for(unsigned long int i = 3; i < (a/2); i+=2){
if(a % i == 0){
std::cout<<a<<"--------- is not prime"<< std::endl;
return false;
}
}//end of for loop
std::cout<<a<<" is prime! ----------- !!"<<std::endl;
return true;
}//end of function 'is_prime'


int main(){

unsigned long int largest_prime = 0;

unsigned long int target = 600851475143;

for(unsigned long int i = 3; i < target; i+=2){

//cout<<"current i: "<<i<<endl;

if (target % i == 0){
cout<<i<<" is a factor!"<<endl;
if (is_prime(i) == true){
//cout<<"largest prime: "<<i<<endl;
largest_prime = i;
target/=i;
if(is_prime(target)==true)
largest_prime = target;
cout<<"target : "<<target<<endl;
}
}//end of if-statment
}//end of outer for-loop

std::cout<<largest_prime<<std::endl;

return 0;
}
