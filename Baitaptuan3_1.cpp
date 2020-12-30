#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int indexof(char*s, char c){
	int n=strlen(s);
	int i, dem=0;
    for (i = 0; i < n; i++){
        if (s[i] == c){
        	++dem;
        	cout<<i<<" ";
		} 
    }
    if(dem==0)
    	return -1;
}
int main() {
    char s[100], c;
    cout<<"Moi ban nhap xau : ";
    gets(s);
    cout<<"Moi ban nhap ki tu can kiem tra : ";
    cin>>c;
    cout << indexof(s,c);
    return 0;
}