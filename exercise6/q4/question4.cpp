#include <iostream>

using namespace std;

const int N = 2;
const int R = 2;
const int M = 2;

void multiply_matrix(float array1[], float array2[], float result[]);

int main(){
  float array1[M];
  float array2[N];
  cout << "Type in 2 values for row 1 separated by spaces: \n";
  for(int i = 0; i< M ; i++){
    cin >> array1[i];
  }
  cout << array1[0] << array1[1] << "\n";


  cout << "Type in 2 values for row 2 separated by spaces: \n";
  for(int i = 0; i< M ; i++){
    cin >> array2[i];
  }
  cout << array2[0] << array2[1] << "\n";

  float result[M][N];
  multiply_matrix(array1, array2, result);
  
  return 0; 
}


