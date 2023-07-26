#include<iostream>
#include<string.h>
using namespace std;
class GV{
    private:
        char hoten[30];
        int tuoi;
        char chnganh[30];
        char bangcap[45];
        float bl;
    public:
    void nhap(){
        cout<<"Nhap Ho va Ten: "<<endl;
        fflush(stdin);
        cin.getline(hoten,30);
        cout<<"Nhap tuoi: "<<endl;
        cin>>this->tuoi;
        fflush(stdin);
        cout<<"Nhap bang cap: "<<endl;
        cin.getline(bangcap,30);
        cout<<"Nhap chuyen nganh: "<<endl;
        cin.getline(chnganh,45);
        fflush(stdin);
        cout<<"Nhap bac luong: "<<endl;
        cin>>this->bl;
    }
    void xuat(){
        cout<<"Ho va Ten:"<<hoten<<endl
            <<"Tuoi:"<<this->tuoi<<endl
            <<"Bang cap: "<<bangcap<<endl
            <<"Chuyen nganh: "<<chnganh<<endl
            <<"Luong co ban: "<<this->bl<<endl;
    }
    float LCB(){
        return this->bl*610;
    }
};
void Nhap_DS(GV a[], int &n){
    cout<<"Nhap danh sach"<<n<<"GV"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Thong tin cua nguoi "<<i+1<<endl;
        a[i].nhap();
    }
}
void Xuat_DS(GV a[], int &n){
    cout<<"Xuat danh sach"<<n<<"GV"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Xuat thong tin cua nguoi "<<i+1<<endl;
        a[i].xuat();
    }
}
int main(){
    int n;
    cout<<"Nhap so GV can them danh sach"<<endl;
    cin>>n;
    GV a[n];
    Nhap_DS(a,n);
    Xuat_DS(a,n);
    return 0;
}
