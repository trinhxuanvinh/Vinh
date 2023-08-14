#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Nguoi {
protected:
    string ht ,ns;
public:
    Nguoi(string ht = "", string ns = ""){
        this->ht=ht;
        this->ns=ns;
}
    ~Nguoi(){}
    friend istream& operator >> (istream& in, Nguoi &a){
        cout<<"\nNhap ten: ";
        getline(in,a.ht);
        fflush(stdin);
        cout<<"\nNhap nam sinh: ";
        in>>a.ns;
        return in;
    }
    friend ostream& operator << (ostream& out, Nguoi a){
        out<<"Ten: "<<a.ht<<endl
           <<"Nam Sinh: "<<a.ns<<endl;
        return out;
    }
};

class ThiSinh : public Nguoi {
private :
    long sbd;
    float toan , ly , hoa ;
public :
    ThiSinh(long sbd=0 , float toan=0 , float ly=0 , float hoa=0): Nguoi(ht,ns){
        this->sbd=sbd;
        this->toan=toan;
        this->ly=ly;
        this->hoa=hoa;
    }
    friend istream& operator >> (istream& in, ThiSinh &a){
        in>>(Nguoi&)a;
        cout<<"\nNhap so bao danh :";
        in>>a.sbd;
        cout<<"\nNhap diem toan :";
        in>>a.toan;
        cout<<"\nNhap diem ly :";
        in>>a.ly;
        cout<<"\nNhap diem hoa :";
        in>>a.hoa;
        return in;
    }
    friend ostream& operator << (ostream& out, ThiSinh a){
        out<<(Nguoi)a;
        out<<"So bao danh :"<<a.sbd<<endl
           <<"Diem toan :"<<a.toan<<endl
           <<"Diem ly :"<<a.ly<<endl
           <<"Diem hoa :"<<a.hoa<<endl;
        return out;
    }
    float S(){
        return this->toan + this->ly + this->hoa;
    }
};
void Nhap_DS(ThiSinh a[],int &n)
{
    cout<<"\t\tNhap thong tin cho danh sach "<<n<<" thi sinh :\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\tNhap thong tin cho thi sinh thu "<<i+1<<endl;
        cin>>a[i];
    }
}

void Xuat_DS(ThiSinh a[],int n)
{
    cout<<"\t\tXuat thong tin cho danh sach "<<n<<" thi sinh\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\tXuat thong tin cho thi sinh thu "<<i+1<<endl;
        cout<<a[i];
    }
}

void sort(ThiSinh a[], int &n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
            if(a[i].S()>a[j].S())
            {
                swap(a[i],a[j]);
            }
        }
    }
    cout<<"\t\t\tDa sap xep thanh cong!\n";
    Xuat_DS(a,n);
}

int main()
{
    int n;
    cout<<"Nhap so luong thi sinh co trong danh sach: ";
    cin>>n;
    ThiSinh a[n];
    Nhap_DS(a,n);
    Xuat_DS(a,n);
    sort(a,n);
    return 0;
}
