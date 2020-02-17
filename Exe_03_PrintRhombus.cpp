/*
    Print 2*n - 1 lines of stars.
*/
#include <iostream>
using namespace std;
int main(){
    int n = 0;
    cin >> n;
    int c = (2*n-1)/2;//c = 2
 
    for(int i=0; i<2*n-1; ++i){//i=1, i = 0
        int disI = 0;
        if(i < n){
            disI = i;
        }else{
            disI = 2*n-2-i;
        }
        for(int j=0; j<2*n-1; ++j){
            int dis = j-c > 0 ? j-c : c-j;
            if(dis <= disI){
                cout << '*';
            }else{
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}

/*

    n = 3

    0 1 2 3 4 
0       *                 0         2       2
1     * * *             1 0 1       1       123     
2   * * * * *         2 1 0 1 2     0       01234
3     * * *
4       * 

    Q: 2*i-1
    P: (n - i)+1
*/