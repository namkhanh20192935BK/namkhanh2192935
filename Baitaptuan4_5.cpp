//Bài 5: Viết chương trình nhận một chuỗi từ tham số dòng lệnh, 
//sau đó tách thành một mảng các từ tương ứng

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char *p= new char;
    gets(p);
    int n=strlen(p);
    for(int i=0;i<n;i++){
    	cout<<p[i]<<endl;
	}
	delete p;
	return 0;
}
