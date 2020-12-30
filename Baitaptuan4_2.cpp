/*Viết chương trình nhập một mảng số thực chưa biết trước số 
phần tử, và cũng không nhập số phần tử từ đầu 
(nhập đến đâu mở rộng mảng tới đó)*/

#include <iostream>

using namespace std;

int main(){
    float *a=new float;
    int i=0;
    while(true){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
        i++;
    }
    delete a;
    system("pause");
    return 0;
}

