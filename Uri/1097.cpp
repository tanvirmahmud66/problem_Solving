#include <iostream>

using namespace std;

int main(){
    int j = 7;
    for(int i = 1; i <= 9; i+=2){
            cout << "I=" << i << " " << "J=" << j << "\n";
            cout << "I=" << i << " " << "J=" << j-1 << "\n";
            cout << "I=" << i << " " << "J=" << j-2 << "\n";
            j+=2;
    }
    return 0;
}
