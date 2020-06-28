#include <iostream>
#include <string>
using namespace std;

struct Student{
    string id;
    string name;
    int cnScore;
    int mathScore;
    int engScore;
};

int main(){
    int num = 0;
    int cnSum = 0;
    int mathSum = 0;
    int engSum = 0;
    cin >> num;
    for(int i=0; i<num; i++){
        Student s;
        cin >> s.id >> s.name >> s.cnScore >> s.mathScore >> s.engScore;
        if(s.cnScore > -1){
            cnSum += s.cnScore;
        }
        
        if(s.mathScore > -1){
            mathSum += s.mathScore;
        }
        
        if(s.engScore > -1){
            engSum+= s.engScore;
        }
    }

    cout << "ChineseAvgScore:" << (cnSum/num) << endl;
    cout << "MathAvgScore:" << (mathSum/num) << endl;
    cout << "EnglishAvgScore:" << (engSum/num) << endl;
    return 0;
}