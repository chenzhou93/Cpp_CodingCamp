#include <iostream>

using namespace std;

int main(){
    int mod = (int) 'Z';
    char letter;
    char tmp;
    int h;
    cin >> letter >> h;

    for(int i=0; i<h; i++){
        char ch = (char)(letter + i);
        if(letter + i > 'Z'){
            ch = (letter + i - 'Z')%26 - 1 + 'A';
        }
        for(int j=0; j<2*h-1; j++){
            if(j == h-i-1 || j == h-1+i){
                cout << ch;
            }else{ 
                cout << ' ';
            }
        }
        cout << endl;
        tmp = ch;
    }

    for(int i=h, x=1; i<2*h-1; i++, x++){
        char ch = (char)(tmp - x);
        if(tmp - x < 'A'){
            ch = (char)(tmp - x + ('Z'-'A')+1);
        }
        for(int j=0; j<2*h-1; j++){
            if(j == x || j == 2*h-2-x){
                cout << ch;
            }else{
                cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}