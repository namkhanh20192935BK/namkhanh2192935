#include <iostream>
using namespace std;

typedef int MT[20][20];

//nhap ma tran chu nhat 
void nhapmt(MT a, char* ten, int m, int n){
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
}
void inmt(MT a, char* ten, int m, int n){
//in ma tran chu nhat
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
    cout<<endl;
	}
}
void nhapmt(MT a, char* ten, int n){ 
//nhap ma tran vuong
    for(int i=0;i<n;i++){
        for( int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
}
void inmt(MT a, char* ten, int n){
    //in ma tran vuong
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
} 
void nhanmt(MT a, MT b, MT c, int m, int n, int p){
    //nhan 2 ma tran chu nhat
    //De hai ma tran hinh chu nhat nhan duoc voi nhau thi phai co mxn nhan voi nxm
    for(int i=0;i<m;i++)
        for(int k=0;k<p;k++){
            c[i][k]=0;
            for(int j=0;j<n;j++)
                c[i][k]=c[i][k]+a[i][j]*b[i][k];
        }
}
void nhanmt(MT a, MT b, MT c, int n){
    //nhan hai ma tran vuong
    for(int i=0;i<n;i++)
        for(int k=0;k<n;k++){
            c[i][k]=0;
            for(int j=0;j<n;j++)
                c[i][k]=c[i][k]+a[i][j]*b[i][k];
        }
}
int main(){
    MT a,b,c;
    MT u,v;
    nhapmt(a,"A",2);
    nhapmt(b,"B",2);
    nhapmt(c,"C",2,3);
    inmt(a,"A",2);
    inmt(b,"B",2);
    inmt(c,"C",2,3);
    nhanmt(a,b,u,2); //Nhan ma tran vuong u= axb
    nhanmt(u,c,v,2,2,3);//Nhan hai ma tran v=uxc
    inmt(u,"U=AxB",2);
    inmt(v,"D=AxBxC",2,3);
    return 0;    
}
    
