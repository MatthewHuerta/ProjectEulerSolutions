#include<iostream>
#include<vector>
#include<math.h>
#include<fstream>
#include<string>
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

template<typename T>
long sum_primes_up_to_num(T num){
  std::vector <T>primes = {2};
  long sum = 2;
  T i = 3;
  bool is_prime = 0;
  for(; i < num; i+=2){
    //cout << endl << "i = " << i;
    is_prime = true;
    for(auto it = primes.begin(); *it <= floor(sqrt(i)); it++){
      if((i % *it) == 0){
        //cout << endl << primes.back();
        is_prime = false;
        break;
      }
      }
      if(is_prime == true){
        cout << endl << "adding " << i << " to primes vector.";
    sum += i;
    primes.push_back(i);
  }
          }
  return sum;
}

//------------------------------------------------------------------------------

void load_2d_array( unsigned a, unsigned b, int arr[][20], string filename, char seperator){
  ifstream file;
  b = 20;
  file.open(filename);
  int i = 0;
  int u = 0;    // indexes into 2d array "arr"
  string num = "";
  string line = "";
  while( (getline(file, line) && (i < a)) ) { //parses 1st dimension
    for(int c = 0; c <= line.length(); c++){ //parses 2nd dimension
      // if(u == b) //size check for precaution
      // break;
      if(line[c] == seperator || c == line.length()){
        arr[i][u] = stoi(num);
        num = "";
        u++;
        continue;
      }else if(c == 0 && u != 0){

      }else{
        num += line[c];
      }
      //cout << line[c];
    }
    i++;
    u = 0; //end inner for
}
}
