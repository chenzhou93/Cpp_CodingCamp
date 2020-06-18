#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct MyPair{
    int event;
    int type;
    int order;
};

vector<int> catDog(vector< vector<int> > input){
    vector<MyPair> pairList;
    queue<MyPair> catQueue;
    queue<MyPair> dogQueue;
    vector<int> result;
    int m = input.size();
    // cout << m << endl;
    int cnt = 0;
    for(int i=0; i<m; i++){
        MyPair pair;
        pair.event = input[i][0];
        pair.type = input[i][1];
        int m = input[i][0];
        int n = input[i][1];
        if(m == 1){
            cnt++;
            pair.order = cnt;
            if(n == 1){
                dogQueue.push(pair);
            }else if(n == -1){
                catQueue.push(pair);
            }
        }else if(m == 2){
            if(n == 0){
                if(!catQueue.empty() && !dogQueue.empty()){
                    MyPair cat = catQueue.front();
                    MyPair dog = dogQueue.front();
                    if(cat.order < dog.order){
                        result.push_back(cat.type);
                        catQueue.pop();
                    }else{
                        result.push_back(dog.type);
                        dogQueue.pop();
                    }    
                }else if(!catQueue.empty() && dogQueue.empty()){
                    result.push_back(catQueue.front().type);
                    catQueue.pop();
                }else if(catQueue.empty() && !dogQueue.empty()){
                    result.push_back(dogQueue.front().type);
                    dogQueue.pop();
                }
                
            }else if(n==1){
                if(!dogQueue.empty()){
                    MyPair dog = dogQueue.front();
                    result.push_back(dog.type);
                    dogQueue.pop();
                }
            }else if(n == -1){
                if(!catQueue.empty()){
                    MyPair cat = catQueue.front();
                    result.push_back(cat.type);
                    catQueue.pop();
                }
            }
        }
    }
    return result;

}


int main(){

    vector<int> result;
    vector< vector<int> > input;

    int m, n;
    while(cin >> m >> n){
        vector<int> tmp;
        tmp.push_back(m);
        tmp.push_back(n);
        input.push_back(tmp);
    }
    
    result = catDog(input);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}