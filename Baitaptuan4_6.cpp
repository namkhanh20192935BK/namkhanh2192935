//Bài 6: Khai báo hai mảng float có giá trị tăng dần, 
//viết chương trình trộn hai mảng đó thành mảng thứ 3 
//cũng theo thứ tự tăng dần

#include <iostream>
#include <string.h>

using namespace std;

void Combine(float *s1,float *s2, float *s3,int n1, int n2){
    for(int i=0;i<n1;i++)
        s3[i]=s1[i];
    for(int i=0;i<n2;i++)
        s3[i+n1]=s2[i];
}
void Ascending(float*s3,int n1, int n2){
	for(int i=0;i<n1+n2-1;i++)
		for(int j=n1+n2-1;j>=i;j--)
			if(s3[j]<s3[j-1]){
				float tg=s3[j];
				s3[j]=s3[j-1];
				s3[j-1]=tg;
			}
        }
int main(){
    float s1[10], s2[10];
    int n1,n2,i;
    float *s3 = new float;
    //Nhap mang s1
    cout<<"Moi ban nhap so phan tu cua mang s1 :";
    cin>>n1;
    cout<<"Moi ban nhap mang s1 theo thu tu tang dan"<<endl;
    for(i=0;i<n1;i++){
        cout<<"s1"<<"["<<i<<"] = ";
        cin>>s1[i];
        if(i!=0 && s1[i-1] > s1[i]){
            i--;
        }
    }
    //Nhap mang s2
    cout<<"Moi ban nhap so phan tu cua mang s2 :";
    cin>>n2;
    cout<<"Moi ban nhap mang s2 theo thu tu tang dan"<<endl;
    for(i=0;i<n2;i++){
        cout<<"s2"<<"["<<i<<"] = ";
        cin>>s2[i];
        if(i!=0 && s2[i-1] > s2[i]){
            i--;
        }
    }
    Combine(s1,s2,s3,n1,n2);
    Ascending(s3,n1,n2);
    //Xuat mang s3 sau khi da gop
    for(i=0;i<n1+n2;i++)
        cout<<s3[i]<<" ";
    delete s3;
    return 0;
}

    
