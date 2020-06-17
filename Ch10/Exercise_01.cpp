#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main(){
    string word;
    vector<string> wordList;
    vector<int> result;
    unordered_map<string, int> mWord;

    while(cin >> word){
        if(word == "QUIT"){
            break;
        }
        wordList.push_back(word);
        if(mWord[word]){
            result.push_back(mWord[word]);
        }else{
            result.push_back(0);
        }
        mWord[word]++;
    }

    for(vector<int>::iterator it = result.begin(); it != result.end(); it++){
        cout << *it << endl;
    }
    return 0;
}