#include <iostream>
using namespace std;

int max(int a, int b){
	int max1;
	if(a>b)
		max1=a;
	else
		max1=b;
	return max1;
}
double max(double a, double b, double c){
	double max2;
	max2=a;
	if(b>max2)
		max2=b;
	if(c>max2)
		max2=c;
	return max2;
}
int max(int*seq, int n){
	int *a[n],i;
	*seq=a;
	int max;
	max=a;
	for(i=1;i<n;i++){
		if(max<*(seq+i))
			max=*(seq+i);
	}
	return max;
	
}

double max (double*seq, int n){

}
int main(){
	int n,a[100],i;
	int *p;
	cin>>n;
	// Nhap mang
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<max(p,n);
	
	return 0;
}
