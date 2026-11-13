#include <iostream>
#include <string>
using namespace std;

int main() {
    string teamList[3][4] = {
        {"newcastle", "Man Utd", "Arsenal", "Chelsea"},
        {"Real Madrid", "barcelona", "Athletico", "Deportivo"},
        {"Bayern", "Dortmund", "Leverkusen", "Schalke"}
    };

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            cout << teamList[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
