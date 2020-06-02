#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int** array = new int*[m];
    int** res = new int*[n];
    for(int i=0; i<m; i++){
        array[i] = new int[n];
    }
    for(int j=0; j<n; j++){
        res[j] = new int[m];
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> array[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int k = i * m + j;
            res[i][j] = array[k/n][k%n];
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}