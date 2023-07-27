#include<iostream>
#include<string.h>
using namespace std;
class GiaoVien{
    private:
        char HoTen[30];
        int Tuoi;
        char BangCap[20],ChuyenNganh[20];
        float BacLuong;
    public:
        GiaoVien();
        void Nhap();
        void Xuat();
        float TinhLCB();
        void LuongNhoHon2000();
        float getBacLuong(){
            return BacLuong;
        }
        bool operator>(GiaoVien a){
            return this->getBacLuong() > a.getBacLuong();
        }
};

GiaoVien::GiaoVien(){
    
    //cout<<"\n ham khoi tao duoc goi !";
}

void GiaoVien::Nhap(){
    cout<<"\n nhap ho va ten : ";
    fflush(stdin);
    cin.getline(HoTen,30);
    fflush(stdin);
    cout<<"\n nhap tuoi : ";
    cin>>this->Tuoi;
    fflush(stdin);
    cout<<"\n nhap bang cap : ";
    cin.getline(BangCap,20);
    cout<<"\n nhap chuyen nganh :  ";
    cin.getline(ChuyenNganh,20);
    fflush(stdin);
    cout<<"\n nhap bac luong : ";
    cin>>this->BacLuong;
}

void GiaoVien::Xuat(){
    cout<<"\n ho va ten      : "<<HoTen
        <<"\n tuoi           : "<<Tuoi
        <<"\n bang cap       : "<<BangCap
        <<"\n chuyen nganh   : "<<ChuyenNganh
        <<"\n bac luong      : "<<BacLuong
        <<"\n Luong co ban   : "<<this->TinhLCB()<<endl;
}
float GiaoVien::TinhLCB(){
    return this->BacLuong*610;
}
void GiaoVien::LuongNhoHon2000(){
      if(this->TinhLCB()<2000){
                cout<<"\n ho va ten      : "<<HoTen
                <<"\n tuoi           : "<<Tuoi
                <<"\n bang cap       : "<<BangCap
                <<"\n chuyen nganh   : "<<ChuyenNganh
                <<"\n bac luong      : "<<BacLuong
                <<"\n Luong co ban   : "<<this->TinhLCB()<<endl;
      }
}


int main(){
    int n ;
    char t[20];
    GiaoVien a[100];
    cout<<"\n nhap so giao vien can quan li : ";
    cin>>n;
    while(n<=0){
        cout<<"\n ban nhap sai roi moi nhap lai !!";
        cin>>n;
    }
    for(int i=0 ; i<n ; i++){
        cout<<"\n giao vien thu "<<i+1<<endl ;
        a[i].Nhap();
    }
    for(int i=0 ; i<n ; i++){
        cout<<"\n giao vien thu "<<i+1<<endl;
        a[i].Xuat();
    }
    cout<<endl;
    cout<<"\n giao vien co luong co ban nho hon 2000 la : ";
    for(int i=0 ; i<n ;i++){
        a[i].LuongNhoHon2000();
    }
    cout<<endl;
    cout<<endl;
    cout<<"\n danh sach giao vien duoc sap xep  thu tu tang dan theo chuyen nganh : ";
    for (int i = 0; i < n-1; i++) {
        for (int j = i; j < n; j++) {
            if(a[i]>a[j]){
               GiaoVien temp = a[i];
               a[i] = a[j];
               a[j] = temp;
            }
        }
    }
    return 0;
}
