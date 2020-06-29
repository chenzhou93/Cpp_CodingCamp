#include <iostream>

using namespace std;

template <typename T>
void moveNegative(T* arr, int size){

}


int main(){
    int size1=0, size2=0;
    cin >> size1 >> size2;
    int* arr1 = new int[size1];
    double* arr2 = new double[size2];

    for(int i=0; i<size1; i++){
        cin >> arr1[i];
    }

    for(int i=0; i<size2; i++){
        cin >> arr1[i];
    }

    delete[] arr1;
    delete[] arr2;
    return 0;
}