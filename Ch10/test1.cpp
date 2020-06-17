#include <queue>
#include <iostream>
#include <vector>
using namespace std;
class CatDogAsylum {
public:
    vector<int> asylum(vector<vector<int> > ope) {
        // write code here
        queue<int> cat;
        queue<int> dog;
        vector<int> vec;
        int index = 0;
        int size1 = ope.size();
        for (int i = 0; i < size1; i++)
        {
            int kind = ope[i][0];
            if (kind == 1)  //有动物来收容所
            {
                if (ope[i][1] >= 0) //狗队列
                {
                    dog.push(index++);  //标记谁是自一个进入
                    dog.push(ope[i][1]);
                }
                else
                {
                    cat.push(index++);  //猫队列 
                    cat.push(ope[i][1]);
                }
            }
            else    //有人收养
            {
                if (ope[i][1] == 0)  //收养最先进来的动物
                {
                    int min = 0;
                    if (cat.empty() && !dog.empty())  //dog不为空
                        min = 1;
                    if (!cat.empty() && dog.empty())
                        min = -1;
                    if (!cat.empty() && !dog.empty())
                        min = dog.front() > cat.front() ? -1 : 1;
                    if (min == -1)  //收养猫
                    {
                        cat.pop();
                        vec.push_back(cat.front());
                        cat.pop();
                    }
                    if (min == 1)  //收养狗
                    {
                        dog.pop();
                        vec.push_back(dog.front());
                        dog.pop();
                    }
                }
                else
                {
                    if (ope[i][1] == 1 && !dog.empty())  //收养狗
                    {
                        dog.pop();
                        vec.push_back(dog.front());
                        dog.pop();
                    }
                    if (ope[i][1] == -1 && !cat.empty()) //收养猫
                    {
                        cat.pop();
                        vec.push_back(cat.front());
                        cat.pop();
                    }
                }

            }
        }
        return vec;
    }
};

int main(){
    vector< vector<int> > input;
    vector<int> result;
    CatDogAsylum test;
    int m,n;
    int index = 0;
    while(cin >> input[index][0] >> input[index][1]){
        index++;
    }
    result = test.asylum(input);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}