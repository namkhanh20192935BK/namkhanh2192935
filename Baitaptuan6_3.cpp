/*Bài 3: Viết lại chương trình tính tần suất xuất hiện 
các phần tử mảng theo các hàm theo khai báo nguyên mẫu như sau :
void nhap(intN, int*mangA);
int*sapxep(intN, int*mangA); 
int**tansuat(intN, int*mangA);*/

#include <iostream>
#include <string.h>
using namespace std;
 
void nhap(int N,int*mangA){
    for(int i=0;i<N;i++){
        cout<<"A["<<i<<"] = ";
        cin>>mangA[i];
    }
}
int *sapxep(int N, int*mangA){
    for(int i=0;i<N-1;i++)
        for(int j=N-1;j>i;j--)
            if(mangA[j]<mangA[j-1]){
                int tg=mangA[j];
                mangA[j]=mangA[j-1];
                mangA[j-1]=tg;
            }
    cout<<"In ra mang A sau khi da sap xep"<<endl;
    for(int i=0;i<N;i++)
        cout<<mangA[i]<<" ";
}
void XoaPt(int a[], int pos, int &N){
    for(int i=pos;i<N-1;i++){
        a[pos]=a[pos+1];
    }
    --N;
}
int **tuansuat(int N,int*mangA){
    int b[100], dem=1,i,j; 
    int *c= new int;
    for(i=0;i<N;i++)
        b[i]=mangA[i];
	for(i=0;i<N;i++){
		int tg=b[i];
		for(j=i+1;j<N;j++)
			if(b[j]==tg){
				XoaPt(b,N,j);
				++dem;
			}
		c[i]=dem;
		dem=1;
	}
    // In ra tan suat cua cac so
    cout<<"\n"<<N<<endl;
    cout<<"\nIn ra mang B: ";
    for(int i=0;i<N;i++)
        cout<<b[i]<<" ";
    cout<<"\nTan suat: ";
    for(int i=0;i<N;i++)
        cout<<c[i]<<" ";
    delete c;
}
int main(){   
    int n;
    cout<<"Moi ban nhap so phan tu mang = ";
    cin>>n;
    int*a=new int[n];
    nhap(n,a);
    sapxep(n,a);
    tuansuat(n,a);
    return 0;
}
