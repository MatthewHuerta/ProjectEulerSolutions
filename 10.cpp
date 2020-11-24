#include<iostream>
//#include"mylib.cpp"
using namespace std;
//--------------------------------------------------------------------
template<typename T>
bool is_prime(T a){
  T n = (a/2) + 1;
  for(T i = 2; i < n; i++){
    if((a % i) == 0){
      return false;
    }
  }
  return true;
}
//--------------------------------------------------------------------
template<typename T, typename I>
bool is_in_array(T data, T* arr, I size){
  auto i = size;
  i = 0;
  for(; i < size; i++){
    if(arr[i] == 0)
    return false;
    if(arr[i] == data)
    return true;
  }
  return false;
}
//--------------------------------------------------------------------
template<typename T, typename I>
void clear_array(T* array, I size){
  for(int i = 0; i < size; i++){
    array[i] = 0;
  }
}
//--------------------------------------------------------------------
template<typename T, typename I>
void print_array(T* array, I size){
int n = (size - 1);
cout << endl << "[ ";
for(int i = 0; i < size; i++){
  if(i == n){
    cout << array[i];
    break;
  }
cout << array[i] << ", ";
}
cout << " ]" << endl;
}
//--------------------------------------------------------------------
// template<typename T> //naive approach
// long sum_primes_up_to_num(T num){
//   long sum = 0;
//   auto i = num;
//   i = 2;
//   for(; i < num; i++){
//     if(is_prime(i) == true){
//     cout << endl << i ;
//     sum += i;
// }
//   }
//   return sum;
// }
//------------------------------------------------------------------------------
template<typename T>
long sum_primes_up_to_num(T num){
  long sum = 0;
  T i = 2;
  T primes[num];
  clear_array(primes, num);
  T u = 0;
  for(; i < num; i++){
    if(is_prime(i) == true){
        sum += i;
        primes[u] = i;
        u++;
}
  }
  return sum;
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

int main(){
  long N = 2000000;
  long sum = sum_primes_up_to_num(N);
  cout << endl << "sum: " << sum << endl;
return 0;
}
