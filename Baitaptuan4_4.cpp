//Bài 4: Viết chương trình nhập 2 chuỗi s1 và s2, 
//sau đó so sánh xem s1 và s2 có giống nhau không?

#include <iostream>
#include <string.h>
using namespace std;

char Compare(char *s1, char *s2){
    if(strcmp(s1,s2)==0)
        cout<<"Hai xau giong nhau";
    else
        cout<<"Hai xau khac nhau";
}
int main(){
    char s1[100], s2[100];
    cout<<"Moi ban nhap xau s1 : ";
    gets(s1);
    cout<<"Moi ban nhap xau s2 : ";
    gets(s2);
	cout<<Compare(s1,s2); 
    return 0;
}