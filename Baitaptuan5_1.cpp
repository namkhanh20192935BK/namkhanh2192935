#include <iostream>
using namespace std;

void NhapPt(int A[10]){
	int i;
	cout<<"Nhap 10 so nguyen\n";
	for(i=0;i<10;i++){
			cout<<"Gia tri "<<i<<" la :";
			cin>>A[i];
		}
}
void SapXep(int A[10]){
	int i,j,temp,n;
	for(i=0;i<10;i++)
		for(j=9;j>i;j--){
			if(A[j]<A[j-1]){
				temp=A[j];
				A[j]=A[j-1];
				A[j-1]=temp;
			}
		}
}
void SaoChepPt(int TS[2][10],int A[10]){
	int i,j; 
	for(j=0;j<10;j++){
		TS[0][j]=A[j];
		TS[1][j]=1;
	}
}
void DemSoPt(int TS[2][10],int A[10]){
	int dd = 1,i,j;
		for(i=0;i<9;i++){
			for(j=i+1;j<10;j++){
				if(A[i]==A[j]){
					++dd; 
					TS[1][i] = dd;
					TS[0][j] = 0;
				}
			}
			dd = 1;
		}
}
void TimMax(int TS[12][10],int A[10]){
	int max, j;
	max=TS[1][0];
		for(j=0;j<10;j++)
			if(max<TS[1][j])
				max=TS[1][j];
	if(max>1){
		cout<<"Gia tri xuat hien nhieu nhat la: ";
			for(j=0;j<10;j++)
				if(TS[1][j]==max){
					TS[0][j]=A[j];
					cout<<TS[0][j]<<", ";
				}
			cout<<"xuat hien "<<max<<" lan.";
			cout<<"\n";	
	}
	if(max==1)
		cout<<"cac so chi xuat hien mot lan \n";
}	
void TanSuat(int TS[2][10]){
	cout<<"Tan suat cua cac phan tu"<<"\n";
	int j3;
	for(j3=0;j3<10;j3++){
		if(TS[0][j3]!=0){
			cout<<"So "<<TS[0][j3]<<" xuat hien "<<TS[1][j3]<<" lan";
			cout<<"\n";
		}
	}
}
// Khoi tao mang 2 chieu de sap xep tan suat va gia tri

int main(){
	int A[10];
	int TS[2][10];
	int i,j;
	NhapPt(A);
	SapXep(A);
	SaoChepPt(TS,A);
	// In mang TS[1][10] va mang TS[0][10]
	for(i=0;i<10;i++)
		cout<<A[i]<<" ";
	cout<<"\n";
	for(i=0;i<10;i++)
		cout<<TS[0][i]<<" ";
	cout<<"\n";
	for(i=0;i<10;i++)
		cout<<TS[1][i]<<" ";
	cout<<"\nGia tri lon nhat= "<<A[9]<<"\nGia tri nho nhat= "<<A[0];
	cout<<"\n";	
	DemSoPt(TS,A);
	TanSuat(TS);
	TimMax(TS,A);
	return 0;
}

