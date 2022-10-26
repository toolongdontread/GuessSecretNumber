#include <iostream>
#include <cstdlib>

using namespace std;

int secretNum = rand() % 100 + 1;


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
    startGame();

    return 0;
}
