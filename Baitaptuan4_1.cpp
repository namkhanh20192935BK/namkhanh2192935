/*Bài 1: Viết chương trình:

- Nhập một số nguyên N

- Cấp phát một mảng N số nguyên và nhập dữ liệu cho nó

- In ra màn hình mảng đó theo thứ tự ngược lại*/

#include <iostream>
using namespace std;

int main(){
    int N, i;
    cout<<"Moi ban nhap gia tri N = ";
    cin>>N;
    int *p= new int[N];
    for(i=0; i<N; i++){
          cin>>p[i];
    }
    for(i=N-1;i>=0;i--)
        cout<<p[i]<<" ";
    delete[] p;
    return 0;
}