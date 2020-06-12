#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

vector<string> split(string str){
    vector<string> res;
    int n = str.size();
    string s;
    for(int i=0; i<n; i++){
        if((str[i] == ' '||i==n-1) && !s.empty()){
            if(i==n-1){
                s += str[i];
                res.push_back(s);
            }else{
                res.push_back(s);
                s = "";
            }
        }else if(str[i] != ' '){
            s += str[i];
        }
    }
    return res;
}

int main(){
    string s;
    getline(cin, s);
    
    vector<string> result = split(s);
    
    for(int i=result.size()-1; i>=0; i--){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}