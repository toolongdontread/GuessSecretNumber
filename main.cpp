#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int secretNum = 0;

void genNum(){
    secretNum = rand() % 10 + 1;
}

bool checkAns(int ans) {
    if(ans == secretNum)
        return true;
    return false;
}

void startGame(){
    for(int i=0;i<5;i++){
        int a = 0;
        cin >> a;
        if(checkAns(a)){
            cout << "correct" << endl;
            break;
        }
        cout << "false" << endl;
        continue;
    }
}

int main() {
    genNum();
    startGame();

    return 0;
}
