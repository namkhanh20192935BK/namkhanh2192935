#include <iostream>
#include <string.h>

using namespace std;
// Hàm lấy xâu con trong xâu s từ vị trí index với độ dài length
char * SubString(char*s,int index,int lenghth){
	int i;
    for(i=index; i < index + lenghth; i++){
        cout<<s[i];
    }
}
int main(){
    char s[100];
    cout<<"Moi ban nhap xau ";
    gets(s);
    cout << SubString(s,2,3);
    return 0;
}
