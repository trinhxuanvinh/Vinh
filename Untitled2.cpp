#include<iostream>
using namespace std;
class Phan_so{
private:
    int tuso;
    int mauso;
public:
    void nhap(){
        cout<<"Nhap tu so:";
        cin>>tuso;
        cout<<"Nhap mau so:";
        cin>>mauso;
        while (mauso==0) {
            cout<<"Nhap lai mau so: "<<endl;
            cin>>mauso;
        }
    }
    void xuat(){
        cout<<"tu so la: "<<tuso<<endl
            <<"mau so la: " <<mauso<<endl
            <<"Phan so so la: "<<tuso<<"/"<<mauso<<endl;
    }
};
int main(){
    Phan_so a;
    a.nhap();
    a.xuat();
}