#include <iostream>

using namespace std;

template <typename T>
void mySort(T arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

template<typename T>
T findMed(T arr[], int n){
    mySort(arr, n);
    T res = arr[n/2];
    return res;
}

int main(){
    int m=0, n=0;
    int* arra;
    double* arrd;
    cin >> m >> n;
    if(m>0 && n>0){
        arra = new int[m];
        arrd = new double[n];
        for(int i=0; i<m; i++){
            cin >> arra[i];
        }

        for(int j=0; j<n; j++){
            cin >> arrd[j];
        }

        int mid = findMed(arra, m);
        double mid1 = findMed(arrd, n);

        cout << mid << endl;
        cout << mid1 << endl;

        delete[] arra;
        delete[] arrd;
    }
    
    return 0;
}