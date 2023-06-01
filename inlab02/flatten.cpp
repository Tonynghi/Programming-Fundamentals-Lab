#include <iostream>
using namespace std;

int* flatten(int** matrix, int r, int c){
  int length = r*c;

  int *newArray = new int[length];
  int currIndex = 0;

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      newArray[currIndex++] = matrix[i][j];
    }
  }

  return newArray;
}


int main(){
  return 0;
}
