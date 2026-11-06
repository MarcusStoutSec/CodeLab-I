#include <iostream> 
#include <string>
using namespace std;



int main() {
    int num = 0;

    while(num < 100){
        num++;
        if(num % 2 == 0){
            continue;
        }
        cout << num << endl;
    }
   
    return 0;
}
