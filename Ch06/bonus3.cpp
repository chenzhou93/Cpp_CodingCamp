#include <iostream>
#include <cmath>

using namespace std;

struct interval{
    int left;
    int right;
};

void mySort(interval* pairs, int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n-1; j++){
            if(pairs[j].left > pairs[j+1].left){
                interval tmp = pairs[j+1];
                pairs[j+1] = pairs[j];
                pairs[j] = tmp;
            }
        }
    }
}

int unionLength(interval* pairs, int size){
    int length = abs(pairs[0].right - pairs[0].left) + 1;
    for(int i=1; i<size; i++){
        interval prev = pairs[i-1];
        interval cur = pairs[i];
        if(prev.right >= cur.left){
            if(prev.right < cur.right){
                length = abs(cur.right - prev.left) + 1;
                pairs[i].left = prev.left;
                pairs[i].right = cur.right;
            }else{
                length = abs(prev.right - prev.left) + 1;
                pairs[i].left = prev.left;
                pairs[i].right = prev.right;
            }
        }else{
            length += (abs(cur.right - cur.left) + 1);
        }
    }
    return length;
}

int main(){
    int num = 0;
    interval* pairs;
    cin >> num;
    pairs = new interval[num];
    for(int i=0; i<num; i++){
        cin >> pairs[i].left >> pairs[i].right;
    }

    mySort(pairs, num);
    int res = unionLength(pairs, num);
    cout << res << endl;

    delete[] pairs;
    return 0;
}