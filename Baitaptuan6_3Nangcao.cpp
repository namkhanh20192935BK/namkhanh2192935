#include <iostream>

using namespace std;

int *FS(int n){
    if (n < 0) {
        return 0;
    } else if (n == 0 || n == 1) {
        return 0;
    } else {
        return FS(n-1) + FS(n-2);
    }
}
int main(){
    cout<<*FS(5);
    return 0;
}
