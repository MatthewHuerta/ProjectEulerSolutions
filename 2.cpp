#include<iostream>
using namespace std;

int main(){

int fib_current = 0;
int fib_last = 2;
int fib_last_last = 1;
int sum = 2;

for (;fib_current < 4000000;){

fib_current = fib_last + fib_last_last;
if (fib_current % 2 == 0){
sum += fib_current;
}//end of if-statement

cout<<fib_last_last<<" "<<fib_last<<" "<<fib_current<<"   sum: "<<sum<<endl;

fib_last_last = fib_last;
fib_last = fib_current;


}//end of for loop

return 0;
}//end of main
