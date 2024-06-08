#include<iostream>
#include<vector>
using namespace std;
int N,M;
vector<int> vec;
int k = 0;
void func(int cnt) {
    k++;
    if(cnt == M){
        k--;
        for(int i = 0; i < M; i++){
            cout << vec[i] << " ";
        }
        cout << endl;
        return;
    }
    vec.push_back(k);
    func(cnt+1);
    vec.pop_back();
    if(k-cnt <= N-M){
    func(cnt);
    }
    k--;
}

int main() {
   cin >> N >> M;
   func(0);
}
