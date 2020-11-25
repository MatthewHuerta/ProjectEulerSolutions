#include<iostream>
#include<fstream>
#include<string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include "mylib.cpp"

using namespace std;


  //get the maximum path for a sepecific "direction" given by xoffset, yoofset. These variables describe how the position of the cell changes as you move across the path.
  //for example, paths in this direction -> correspond to xoffset=1,yoffset=0.
  //Similarly, diaganolly up and right paths correspond to xoffset=1,yoffset=1


  // int getMaxPath(int xoffset, int yoffset, int *arr){
  //     int maxSum=0;
  //     int currentPath[4]={0,0,0,0};
  //     for(int i=0;i<MAX_X;i++){
  //         for(int j=0;j<MAX_Y;j++){
  //             int sum= getPathSumAt(i,j);
  //             if(maxSum<sum){
  //                 sum=maxSum;
  //             }
  //         }
  //     }
  //     return maxSum;
  // }
  // // This gets the sum of 4 cells starting at cell (i,j), and moving in the direction (xoffset,yoffset).
  // int getPathSumAt(int i,j,xoffset,yoffset,int *arr){
  //     int sum=0;
  //     for(int k=0;k<4;k++){
  //         int xcoord=i+xoffset*k;
  //         int ycoord=j+yoffset*k;
  //         sum+=arr[xcoord][ycoord];
  //     }
  //     return sum;
  // }

  int main(){
    int arr[20][20];
  load_2d_array(20, 20, arr, "11.txt", ' ');\
  for(int i = 0; i < 20; i++){
    print_array(arr[i], 20);
  }

return 0;

      }

  //fill in array from project eular text
  // int *arr[20][20];
  // getArr(arr);
  //
  // //calculate the largest sum
  // int maxSum=0;
  //     //get the max path sum for each possible direction given by the combination of rightVec and upVec
  // for (int rightVec=-1;rightVec<2;rightVec++){
  //     for (int upVec=-1;upVec<2;upVec++){
  //         int sum= getMaxPath(rightVec,upVec,arr);
  //         if(maxSum<sum){
  //             maxSum=sum;
  //         }
  //     }
  // }
  // printf("Maximum Sum:%d\n",maxSum);
