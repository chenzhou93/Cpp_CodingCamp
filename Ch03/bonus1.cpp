#include <iostream>

using namespace std;

void PrintDiagram(int m){
    cout << '|' << endl;
    
    for(int j=0; j<3; j++){
        for(int i=0; i<=m; i++){
            if(i == 0){
                cout << '|';
            }else if(i > 0 && i < m){
                cout << '*';
            }else{
                cout << '*' << endl;
            }
        }
    }
    cout << '|' << endl;
}
int main(){
    int n, m, q;
    cin >> n >> m >> q;
    PrintDiagram(n);
    PrintDiagram(m);
    PrintDiagram(q);
    return 0;
}