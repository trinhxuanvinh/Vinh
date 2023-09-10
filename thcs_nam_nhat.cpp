/*
//BÀI 7
 #include <iostream>
 #include <iomanip>
 using namespace std;
 int main(){
     float t;
     int a,b,c,d,s = 0;
     cout<<"Nhap vao so tien can doi: ";
     cin>>t;
     cout<<setw(5)<<"Stt"<<setw(15)<<"So to 1000";
     cout<<setw(15)<<"So to 2000"<<setw(15)<<"So to 5000";
     cout<<setw(15)<<"So to 10000"<<endl;
     for (int a=0; a<=t/1000; a++){
         for (int b=0; b<=t/2000; b++)
             for (int c=0; c<=t/5000; c++)
                 for (int d=0; d<=t/10000; d++)
                     if (a*1000+b*2000+c*5000+d*10000 == t)
                     {    cout<<setw(5)<<s<<setw(15)<<a;
                         cout<<setw(15)<<b<<setw(15)<<c;
                         cout<<setw(15)<<d<<endl;
                         s++;
                     }
     }
                      cout<<"Co tat ca "<<s<<" cach doi"<<endl;
                     return 0;
                     }
*/
/*
// BÀI 8
#include <iostream>
using namespace std;
int main()
{unsigned int n;
cout<<"Nhap so nguyen duong n: "; cin>>n;
cout<<"Cac so nguyen to trong pham vi "<<n<<" 6la: "<<endl;
for (int i=2; i<=n; i++)
{    int count = 0;
    for (int j =1; j<=i; j++)
        if (i%j == 0)        count++;
    if (count == 2)        cout<<i<<"\t";
}
return 0;
}
*/
/*
//BÀI 9
#include<iostream>
using namespace std;
int main(){
    int i,t;
    cout<<"BANG CUU TRUONG:" <<endl;
    for(i=1;i<10;i++){
        cout<<" "<<endl<<"\t";
        for(t=1;t<=10;t++){
            cout<<t<<"*"<<i<<"="<<i*t<<"\t";
        }
    }
        return 0;
}
*/
/*
//BÀI 10
#include <iostream>
using namespace std;
int main(){
 int n,i,j;
 cout << "Nhap n: ";
 cin >> n;
 i=n+1;
 j=n+1;
for(i=1;i<=n+1;i++){
for(j=n-i+1;j>=1;--j)
      cout<<"*";
      cout<<"\n";
}
   cout<<"\n";
   return 0;
}
*/
//BÀI 13
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap n: "<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<" "<<endl<<"\t";
        for(int j=1;j<=i;j++)
            cout<<j;
        }
        return 0;
    }
*/
/*
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<cstring>
using namespace std;
struct damlakeo {
    char may;
    int a;
};
void may(damlakeo dlk[],int&n){
    int a;
    srand(time(NULL));
    printf("may chon: %d\n", rand()%3);
    if(NULL == 1){
        cout<<"ĐẤM"<<endl;
    }
    if(n == 2){
        cout<<"LÁ"<<endl;
    }
    else{
    cout<<"KÉO"<<endl;
    }
    NULL == a;
}
void sosanh(damlakeo dlk[],int&n){
    int a;
    if(a=n){
        cout<<"HOÀ"<<endl;
    }
    else{
        if(a=2&&n=='DAM'){
            cout<<"THUA!";
        }
    }
}

int main(){
    int n;
    cout<<"Mời bạn chọn : "<<endl;
    cin>>n;
    damlakeo dlk[n];
    may(dlk,n);
    sosanh(dlk,n);
    return 0;
}
*/
/*
#include<iostream>
#include<random>
using namespace std;
int main()
    {
    int n;
    int a = 1, b =3;
    cout << "Moi ban chon :"<<endl;
    cout << "1.Kéo"<<endl;
    cout << "2.Lá"<<endl;
    cout << "3.Đấm"<<endl;
    nhap: do{
        cout << "Nguoi choi chon :"<<endl;
        cin >> n;
        if (n < 0 || n>3)
            cout << "Ban nhap sai. Moi ban kiem tra lai"<<endl;
    } while (n < 0 || n>3);
    srand(time(NULL));
    int x = a + rand() % (b - a + 1);
    if (x == n)
    {
        cout << "Ban da hoa voi may"<<endl;
        goto nhap;
    }
    if (x == 1 && n == 3 || (x == 2 && n == 1) || (x == 3 && n == 2))
        {
            cout << x<<endl;
            cout << "Ban da Thang";
        }

        
    else
    {
        cout << x<<endl;
        cout << "Ban da Thua";
    }
    return 0;
}
 */
/*
#include<iostream>
using namespace std;
int main(){
    int a;
    int tiendien;
    cout<<"Nhập vào số điện :"<<endl;
    cin>>a;
    if(a<0){
        cout<<"Nhà này không dùng "<<endl;
    }
    else if(a<=50){
        tiendien=2000*a;
        cout<<"Tính thành tiền: "<<tiendien;
    }
    else if(a>50 && a<100){
        tiendien=(2000*50)+(2500*(a-50));
        cout<<"Tính thành tiền: "<<tiendien;
    }
    else{
        tiendien=2000*50+2500*50+(a-100)*3000;
        cout<<"Tính thành tiền: "<<tiendien;
    }
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
  int i, n;
  cout << "Nhap so n: "; cin >> n;
  cout<<"Bang nhan “<<n<<“ la "<< endl;
  for(i = 1; i <= 10; i++)
     cout <<"\t"<<n<<"x"<<i<<"="<<n*i<<endl;
  return 0;
 }
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"nhập n:"<<endl;
    cin>>n;
    int s=0;
    for(int i=1; i<=n;i++){
        s = s+(2*i);
    }
        cout<<"Tổng của dãy :"<<s<<endl;
    return 0;
}
*/
/*
//BÀI ĐẢO NGƯỢC SỐ
#include <iostream>
using namespace std;
 
int main()
{
    int so;
    cout << "Nhap so: ";
    cin >> so;
    cout << "So dao nguoc cua " << so  << " la ";
    for (int a = 0; so != 0; so = so / 10) {
        cout << so % 10;
    }
    return 0;
}
*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
   
int main() {
    int i, number;
    cout << "Nhap so phan tu cua mang: ";
    cin>>number;
    int arr[number];
    cout << "Nhap cac phan tu cua mang: \n";
    for (i = 0; i < number; i++) {
        cout<<"a["<<i<<"]=";
        cin >> arr[i];
    }
    cout<<"Cac phan tu cua mang: "<<endl;
    for (i = 0; i < number; i++) {
        cout<<arr[i];
    }
    return 0;
}
*/
/*#Algorithm function in STL
        -min : tìm số bé nhất trong dãy (lưu ý địa chỉ )
        -max : tìm số lớn nhất trong dãy (''''''''''''')
        -min_element : tìm số bé nhất trong dãy (lưu ý địa chỉ )
        -max_element : tìm số lớn nhất trong dãy (''''''''''''')
        -accumulate : tính tổng các số trong dãy (''''''')
        -swap : đổi chỗ cho nhau
        -sort
        -stable_sort
        -find
        -binary_search
        -lower_bound
        -upper_bound
        -fill
        -merge
        -reverse
        -set_union
        -set_intersection
       -set_difference
       -set_symmetric_difference
*/
/*
#include <iostream>
using namespace std;
int main(){
    int a[1001],n,i,maxx=0,minn;
    cout<<"Nhap so phan tư của mảng a[] : ";
    cin>>n;
    for (i=0;i<n;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
        maxx=max(maxx,a[i]);
    minn=min(minn,a[i]);
    }
    
    cout<<"So lơn nhất trong mang la :"<<maxx<<endl;
    cout<<"So be nhất trong mang la :"<<minn<<"\n";
    return 0;
}
*/
/*
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap do dai canh: ";
    cin>>n;
    int t = n;
    vector<vector<int>> v;
    int l = 0, r = 2*n - 1;
    vector<int> tmp(2*n - 1);
    int val = n;
    while (t--) {
        for (int i = l; i < r; ++i) {
            tmp[i] = val;
        }
        l++;
        r--;
        val--;
        v.push_back(tmp);
    }
    for (vector<int> x : v) {
        for (int e : x) {
            cout << e;
        }
        cout << '\n';
    }
    int sz = n - 2;
    for (int i = sz; i >= 0; --i) {
        for (int j = 0; j < v[i].size(); ++j) {
            cout << v[i][j];
        }
        cout << '\n';
    }
}
*/
/*
#include <iostream>
#include<math.h>
#define ll long long
#define MAX 1000000
using namespace std;
ll a[MAX], b[MAX];

int dong[100], cot[100], HoangHau[100], QuyPhi[100];
int n, dem;
void Try(int x){
    if (x == n)
        ++dem;

    else {
        for (int i = 0; i < n; ++i){
            if (cot[i] == 0 && HoangHau[x - i + n] == 0 && QuyPhi[i + x] == 0){
                cot[i] = 1;
                HoangHau[x - i + n] = 1;
                QuyPhi[i + x] = 1;
                Try(x + 1);
                QuyPhi[i + x] = 0;
                HoangHau[x - i + n] = 0;
                cot[i] = 0;
            }
        }
    }
}
int main(){

    int n ;
    cin >> n;
    for (int i = int(sqrt(n)); i > 0 ;i--)
    {
        if (n%i ==0 )
        {
        cout << i <<" " << n/i<<endl;
        break;
        }
    }
    return 0 ;
    int N, t;
    cin >> N >> t;

    ll sum = 0;
    for (int i = 1; i <= N; i++){
        cin >> a[i] >> b[i];
        sum += a[i];
    }
    cout << sum << endl;

    for (int i = 1; i <= t; i++){
        for (int k = 1; k <= N; k++){
            if (a[k] > 0){
                a[k] -= b[k];
            }
        }
        sum = 0;
        for (int j = 1; j <= N; j++){
            if (a[j] >= 0){
                sum += a[j];
            }
        }

        cout << sum << endl;
    }

    return 0;
    cin >> N >> t ;
    ll a[N], b[N];
    for (int i =0; i<N; i++)
    {
        cin >> a[i] >> b[i];
        sum = sum + a[i];
    }
    cout << sum <<endl;
    for (int j = 0; j<t;j++)
    {
        int i = 0;
        while (i<N)
        {
            if (a[i] >= b[i])
            {
                sum = sum - b[i];
                a[i] = a[i] - b[i];
            }
            else
            {
                sum = sum - a[i];
                a[i] = 0;
            }
        i++ ;
        }
    cout << sum << endl;
    }
    return 0;
    cin >> n;
    Try(0);
    cout << dem;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main() {
  int so;
  int soTemp;
  int tong = 0;
  cout << "Nhap so: ";
  cin >> so;
  soTemp = so;
  while (soTemp != 0) {
    tong += soTemp % 10;
    soTemp /= 10;
  }
  cout << "Tong cac chu so cua so " << so << " la " << tong << endl;
  return 0;
}
*/
/*

#include <iostream>
using namespace std;
int search(int arr[], int n, int x)
{
  for(int i = 0;i < n;i++)
    if(arr[i] == x)
    return i;
    return -1;
}
 
int main() {
  int arr[] = {2, 3, 4, 10, 40};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x;
  cin>>x;
  int result = search(arr, n, x);
  if (result != -1) {
   cout<<x<<" xuat hien tai chi so "<<result;
  } else {
    cout<<x<<"khong co trong mang"<<result;
  }
  return 0;
}
*/
/*
#include <iostream>
#include <math.h>
using namespace std;
int biendoissangnphan(long so)
{
    int a = 0, dem = 0, b;
    while ( so != 0)
    {
        b = so % 10;
        so = so / 10;
        a = a + b*pow(2,dem);
        dem++;
    }
    return a;
}
 
int main()
{
    long n;
    cout<<"Nhập vào số nhị phân cần chuyển đổi(bao gồm 8 số): ";
    cin>>n;
    
    cout<<endl<<"Số nhị phân sau khi được đổi thành thập phân là: "<<
    biendoissangnphan(n);
    cout<<"\n--------------------------------\n";
}
*/
/*
#include <iostream>
#include <math.h>
using namespace std;
int binaryToDecimal(long binarynum)
{
    int decimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    return decimalnum;
}
 
int main()
{
    long binarynum;
    cout<<"Nhập vào số nhị phân cần chuyển đổi(bao gồm 8 số): ";
    cin>>binarynum;
 
    cout<<endl<<"Số nhị phân sau khi được đổi thành thập phân là: "<<binaryToDecimal(binarynum);
    cout<<"\n--------------------------------\n";
    cout<<"Chương trình này được đăng tại Freetuts.net";
}
*/
/*
#include<iostream>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void xuat(int a[],int n,int x){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
void timkiem(int a[],int &n, int &x){
    for(int i=0;i<n;i++){
        if(a[i]==x)
            cout<<i<<endl;
        }
    }
int main(){
    int x,n,a[100];
    cout<<"Nhap so phan tu";
    cin>>n;
    nhap(a,n);
    cout<<"Phan tu ti kiem la:";
    cin>>x;
    timkiem(a,n,x);
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void xuat(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
void sapxepmin_max(int a[],int n){
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i])
                swap(a[i],a[j]);
            }
    xuat(a, n);
        }
void sapxepmax_min(int a[],int n){
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j])
                swap(a[j],a[i]);
            }
    xuat(a, n);
        }
int main(){
    int n;
    int a[100];
    cout<<"Nhap so phan tu: ";
    cin>>n;
    nhap(a,n);
    cout<<"Sap xep tu min ----> max "<<endl;
    sapxepmin_max(a, n);
    cout<<"\n";
    cout<<"Sap xep tu max ----> min "<<endl;
    sapxepmax_min(a, n);
    return 0;
}
*/
/*
// Lập trình hướng đối tượng

#include<iostream>
#include<iomanip>
using namespace std;

class ChaMe
{
    private :
    char ht[30];
    int tuoi;
    
    public :
    void nhap()
    {
        fflush(stdin);
        cout<<" Nhap ho ten : ";
        cin.getline(ht,30);
        
        cout<<" Nhap tuoi : ";
        cin>>tuoi;
    }
    
    void xuat()
    {
        cout<<" Ho ten : "<<ht<<endl;
        cout<<" Tuoi : "<<tuoi<<endl;
        }
};

int main ()
{
    int n;
    cout<<" Nhap thong tin : ";
    cin>>n;
    
    ChaMe *cm = new ChaMe[n];
    
    for(int i = 0; i < n; i++)
    {
        cout<<" Nhap thong tin "<<i+1<<" : "<<endl;
        cm[i].nhap();
        }
    
    for(int i = 0; i < n; i++)
    {
        cout<<" Danh sach thong tin "<<i+1<<" : "<<endl;
        cm[i].xuat();
    }
}
*/
/*
#include<iostream>
#include<cstring>
using namespace std;
class KH{
private:
    char ht[50];
    char cmt[50];
    string hk;
    int tuoi;
public:
    void nhap(){
        fflush(stdin);
        cout<<"Nhạp Họ và Tên: ";
        cin.getline(ht, 50);
        cout<<"Nhập chứng minh thư: ";
        cin.getline(cmt,50);
        cout<<"Hộ Khẩu: ";
        getline(cin,hk);
        cout<<"Nhập Tuổi: ";
        cin>>tuoi;
    }
    void xuat(){
        cout<<"Họ tên: "<<ht<<endl;
        cout<<"CMT: "<<cmt<<endl;
        cout<<"Hộ Khẩu: "<<hk<<endl;
        cout<<"Tuổi: "<<tuoi<<endl;
    }
};
int main(){
    int n;
    cout<<"Nhập số lương: ";
    cin>>n;
    KH *kh = new KH[n];
    for(int i=0;i<n;i++){
        cout<<"Khách hàng thứ: "<<i+1<<endl;
        kh[i].nhap();
    }
    for(int i=0;i<n;i++){
        cout<<"Danh sách KH "<<endl;
        kh[i].xuat();
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void xuat(int a[],int n,int x){
    for(int i=0;i<=n;i++){
        cout<<a[i];
    }
}
void sapxepmin_max(int a[],int n,int x){
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i])
                swap(a[i],a[j]);
            }
        }
void  thempt(int a[], int n, int x){
    int pos = n;
    while ((pos>0) && (a[pos-1]>x))
    {    a[pos] = a[pos - 1];
        pos --;
    }
    a[pos] = x;
    sapxepmin_max(a, x,n);
}
int main(){
    int a[100];
    int n,x;
    cout<<"Nhap so phan tu: "<<endl;
    cin>>n;
    nhap(a, n);
    cout<<"Nhap can tu can them! "<<endl;
    cin>>x;
    thempt(a, n, x);
    xuat(a, n, x);
    return 0;
}
*/
/*
 #include <iostream>
 #include <iomanip>
 using namespace std;
 int main()
 {
 int A[100];
 int n;
 cout<<"Nhap vao so luong phan tu cua mang la ";
 cin>>n;
 for(int i=0; i<n; i++)
 {
 cout<<"Nhap phan tu thu "<<"A["<<i<<"]: ";
 cin>>A[i];
 }
 for(int i=0; i< n/2; i++)
 {
 int index = n - i - 1;
 int tmp = A[index];
 A[index] = A[i];
 A[i] = tmp;
 }
 for(int i=0; i<n; i++)
 {
 cout<<A[i]<<"\t ";
 }
 cout<<"\t";
 }
 */
/*
#include<iostream>
#include<iomanip>
using namespace std;
void Nhap (int a[],int n){
    for (int i=0;i<n;i++){
        cout<<"\nNhap vao phan tu thu:"<<"a["<<i<<"]:";
        cin>>a[i];
}
}
void Xuat (int a[],int n ){
    for(int i=0;i<=n;i++){
        cout<<a[i]<<" ";
    }
}
void sapxepmin_max(int a[],int n,int x){
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i])
                swap(a[i],a[j]);
            }
    Xuat(a, n);
        }
void Them(int a[],int n,int x){
    int vt=n;
    for (int i=a[0];i<=a[n];i++){
        if(a[n]<a[n-1]){
            a[vt]=x;
        }
        n--;
    }
}
    void Xoa (int a[],int n, int vt){
    for(int i=vt;i<n;i++)
{
a[i]=a[i+1];
}
n--;
Xuat(a,n);
}

int main(){
        int n;
        cout<<"\nNhapn:";cin>>n;
        int a[n];
        Nhap(a,n);
        int vt;
        int x;
        cout<<"Nhap gia tri can them: "<<endl;
        cin>>x;
        Them(a,n,x);
        Xuat(a, n);
        cout<<"\nNhap vao vi tri muon xoa :";cin>>vt;
        Xoa(a,n,vt);
        return 0;
}
*/
/*
#include <iostream>
#include <iomanip>
#define gh 50
using namespace std;
void nhap(int b[gh][gh],int m, int n){
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<"b["<<i<<"]["<<j<<"]= ";
            cin>>b[i][j];
        }
    }
}
void xuat(int  b[gh][gh],int m, int n){
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
            cout<<b[i][j]<<"\t";
            cout<<endl;
    }
}
void dongle(int  b[gh][gh],int m, int n){
    for (int i=0;i<m;i++)
        if( i % 2 == 1){
            for (int j=0;j<n;j++)
                cout<<b[i][j]<<"\t";
            cout<<endl;
        }
}
int main(){
    int n,m;
    int b[gh][gh];
    cout<<"Nhap so dong: ";
    cin>>n;
    cout<<"Nhap so cot: ";
    cin>>m;
    nhap(b,m,n);
    xuat(b, m, n);
    cout<<"Các giá trị trên dòng lẻ là:"<<endl;
    dongle(b,m,n);
    return 0;
}
*/
/*
 #include <iostream>
 #include <iomanip>
 #define max 50
 using namespace std;
 void input(int  b[max][max],int m, int n)
 {for (int i=0;i<m;i++)
 for (int j=0;j<n;j++)
 {    cout<<b<<"["<<i<<"]["<<j<<"]= ";
 cin>>b[i][j];                 }
 }
 void output(int  b[max][max],int m, int n)
 {    for (int i=0;i<m;i++)
 {    for (int j=0;j<n;j++)
 cout<<setw(6)<<b[i][j];
 cout<<endl;
 
 }
 }
 void dong_chan(int  b[max][max],int m, int n)
 {    for (int i=0;i<m;i++)
 if (i%2 == 0)
 {    for (int j=0;j<n;j++)
 cout<<b[i][j]<<"\t";
 cout<<endl;
 }
 }
 void dong_le(int  b[max][max],int m, int n)
 {    for (int i=0;i<m;i++)
 if (i%2 != 0)
 {    for (int j=0;j<n;j++)
 cout<<b[i][j]<<"\t";
 cout<<endl;
 }
 }
 void cot_chan(int  b[max][max],int m, int n)
 {    for (int i=0;i<n;i++)
 if (i%2 == 0)
 {    for (int j=0;j<m;j++)
 cout<<b[i][j]<<"\t";
 cout<<endl;
 }
 }
 void cot_le(int  b[max][max],int m, int n)
 {    for (int i=0;i<n;i++)
 if (i%2 != 0)
 {    for (int j=0;j<m;j++)
 cout<<b[i][j]<<"\t";
 cout<<endl;
 }
 }
 int main(){
 int b[max][max], m, n;
 cout<<"Nhap so hang m = ";
 cin>>m;
 cout<<"Nhap so cot n = ";
 cin>>n;
 input(b,m,n);
 cout<<"Mang da nhap la: "<<endl;
 output(b,m,n);
 cout<<"Cac phan tu tren dong chan la: "<<endl;
 dong_chan(b,m,n);
 cout<<"Cac phan tu tren dong le la: "<<endl;
 dong_le(b,m,n);
 cout<<"Cac phan tu tren cot chan la: "<<endl;
 cot_chan(b,m,n);
 cout<<"Cac phan tu tren cot le la: "<<endl;
 cot_le(b,m,n);
 return 0;
 
 }
 */
/*
//Viết chương trình nhập n số, xóa số thứ k trong n số vừa nhập.in ra n-1. số còn lại .
#include <iostream>
#include <iomanip>
using namespace std;
void nhap(int  b[],int m){
     cout<<"Nhap cac phan tu mang"<<endl;
        for (int i=0;i<m;i++)
     {    cout<<"a["<<i<<"]="; cin>>b[i];
     }
}
void  xuat(int  b[], int m){
    for(int i=0;i<m;i++)
        cout<<b[i]<<"\t";
}
void xoasotrongm(int b[], int m,int k){
    int i;
    for (int i=k;i<m;i++)
        b[i]=b[i+1];
        m--;
}
int main(){
    int a[100],n,k;
    cout<<"Nhap so phan tu: ";
    cin>>n;
    nhap(a,n);
    cout<<"Nhap vi tri can xoa: ";
    cin>>k;
    xoasotrongm(a, n,k);
    cout<<"Mang sau khi xoa la: ";
    cout<<" "<<endl;
    xuat(a,n);
    return 0;
    
}
*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
void nhap(int  b[],int m){
    cout<<"Nhap cac phan tu mang"<<endl;
    for (int i=0;i<m;i++){
        cout<<"a["<<i<<"]="; cin>>b[i];
     }
}
void xuat(int  b[], int m){
    for(int i=0;i<m;i++)
        cout<<b[i]<<"\t";
}
int main(){
    int a[100],n;
    cout<<"Nhap so phan tu mang n =";
    cin>>n;
    nhap(a,n);
    cout<<"Cac phan tu khac nhau cua mang la: "<<endl;
    for (int i = 0; i<n; i++)
        if(a[i] != a[i+1])
            cout<<a[i]<<"\t";
     cout<<endl;
    return 0;
}
*/
/*
 #include<iostream>
 #include<iomanip>
 using namespace std;
 void nhap(int a[100], int n){
 for(int i=0;i<n;i++){
 cout<<"a["<<i<<"]: ";
 cin>>a[i];
 }
 }
 void xuat( int a[100], int n){
 for(int i=0;i<n;i++){
 
 cout<<a[i]<<"\t";
 }
 }
 void sapxep(int a[100],int n){
 for(int i=0;i<n;i++){
 for(int j=i+1;j<n;j++){
 if(a[i]>a[j]){
 swap(a[i],a[j]);
 }
 }
 }
 xuat(a,n);
 }
 void tongpt( int a[100],int n){
 int tong = 0;
 for(int i=0;i<n;i++){
 tong += a[i];
 }
 cout<<tong<<endl;
 }
 void thempt(int a[100], int vitri, int k, int &n){
 if(vitri <= 0){
 vitri = 0;
 }
 if(vitri >= n){
 vitri = n;
 }
 for(int i = n; i > vitri; i--){
 a[i] = a[i-1];
 }
 a[vitri] = k;
 n++;
 }
 void Xoa(int a[100],int &n, int vitri) {
 for (int i = vitri + 1; i < n; i++) {
 a[i-1] = a[i];
 }
 n--;
 xuat(a,n);
 }
void Xoa_Trung(int a[], int &n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i]==a[j]) {
                Xoa(a,n,j);
                i--;
            }
        }
    }
 xuat(a, n);
}
void xoa1phantu(int a[],int *n,int vt)
{
     for(int i=vt;i<*n-1;i++)
          a[i]=a[i+1];
     (*n)--;
}
void xoax(int a[],int *n,int x)
{
     int i;
     for(i=0;i<*n;i++)
     if(x==a[i])
     {
                xoa1phantu(a,n,i);
                i--;
     }
}

 int main(){
 int n,k,vitri;
 int a[100];
 cout<<"Nhap so phan tu : ";
 cin>>n;
 nhap(a,n);
 cout<<"Mang truoc khi sap xep: "<<endl;
 xuat(a,n);
 cout<<endl;
 cout<<"Mang sau khi sap xep tang dan : "<<endl;
 sapxep(a,n);
 cout<<endl;
 cout<<"tong cac phan tu cua mang da nhap la: "<<endl;
 tongpt(a,n);
 cout<<"Nhap vi tri can them phan tu :"<<endl;
 cin>>vitri;
 cout<<"Nhap so muon them vao mang :"<<endl;
 cin>>k;
 thempt(a,vitri,k,n);
 xuat(a,n);
 cout<<endl;
 cout<<"Nhap vi tri can xoa: "<<endl;
 cin>>vitri;
 Xoa(a,n,vitri);
 cout<<endl;
 cout<<"Xoa phan tu bi trung nhau:"<<endl;
 Xoa_Trung(a, n);
 int x;
 cout<<" Nhap gia tri can xoa trong mang "<<endl;
 cin>>x;
 xoax(a,&n,x);
 cout<<" Mang sau khi xoa "<<endl;
 xuat(a,n);
 return 0;
 }
 */
/*
// Bài 1
#include<iostream>
#include<iomanip>
using namespace std;
void nhap(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
}
        void xuat(int a[],int n){
        for(int i=0;i<n;i++){
            cout<<a[i];
            cout<<"\t";
        }
    }
void le(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]%2==1){
            cout<<a[i]<<endl;
        }
    }
}
void duong(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]>0){
            cout<<a[i]<<endl;
        }
    }
}
void gtmin(int a[],int n){
    int min =0;
    for(int i=0;i<n;i++){
        if(a[i]<a[min]){
            min=i;
        }
    }
    cout<<a[min]<<endl;
}
void gtmintaivitri(int a[],int n){
        int min =0;
        for(int i=0;i<n;i++){
            if(a[i]<a[min]){
                min=i;
            }
        }
    cout<<min<<endl;
    }
int SNT(int n)
{
   if (n<2)
      return 0;
   for (int i=2; i<n; i++)
      if (n%i==0)
         return 0;
   return 1;
}
int SNTDauTien(int a[], int n){
    for(int i=0; i<n; i++)
        if(SNT(a[i])==1)
            return a[i];
    return -1;
}
int ViTriMin(int *a,int n){
 int min=a[0],vitri=0;
 for(int i=1;i<n;i++)
 {
  if(a[i]<min)
  {
   min=a[i];
   vitri=i;
  }
 }
 return vitri;
}
void xoaptnn(int *a,int &n,int k)
{
    for(int i=k;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
}
void sapxep(int a[100],int *n){
    for(int i=0;i<=*n;i++){
        for(int j=i+1;j<*n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
}
void them(int a[], int *n, int x){
    sapxep(a,n);
    int vtri = *n;
    while ((vtri>0) && (a[vtri-1]>x))
    {    a[vtri] = a[vtri-1];
        vtri--;
    }
    a[vtri] = x;
    (*n)++;
}
int main(){
        int n,a[100];
        cout<<"Nhap gia cac gia tri cua mang: ";
        cin>>n;
        nhap(a, n);
        xuat(a, n);
        cout<<endl;
        cout<<"Mang co cac phan tu le la: "<<endl;
        le(a, n);
        cout<<"Mang co cang phan tu duong la: "<<endl;
        duong(a, n);
        cout<<"Gia tri nho nhat trong mang la: "<<endl;
        gtmin(a, n);
        cout<<"Gia tri nho nhat tai vi tri "<<endl;
        gtmintaivitri(a, n);
        cout<<"So ngto dau tien trong mang: "<<endl;
        cout<<SNTDauTien(a, n);
        cout<<endl;
        int vitrimin=ViTriMin(a,n);
        cout<<"Mang sau khi dc xoa phan tu nho nhat la:"<<endl;
        xoaptnn(a, n, vitrimin);
        xuat(a, n);
        cout<<endl;
        int x;
        cout<<"Nhap phan tu cn them: "<<endl;
        cin>>x;
        cout<<"Mang khi them phan tu theo thu tu tang dan: "<<endl;
        them(a, &n, x);
        xuat(a, n);
        return 0;
    }
*/
/*
// Bài 2
#include<iostream>
#include<iomanip>
using namespace std;
void nhap(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
}
        void xuat(int a[],int n){
        for(int i=0;i<n;i++){
            cout<<a[i];
            cout<<"\t";
        }
    }
void gtmin(int a[],int n){
    int min =0;
    for(int i=0;i<n;i++){
        if(a[i]<a[min]){
            min=i;
        }
    }
    cout<<a[min]<<endl;
}
void xoa(int a[], int &n)
{
    int max=a[0],i;
    for(i=1;i<n;i++)
        if(a[i]>max)
            max=a[i];
    for(i=0;i<n;i++){
        if(a[i]==max)
            for(int j=i;j<n;j++){
                a[j]=a[j+1];
                n--;
                i--;
            }
    }
}
void gtmax(int a[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[max]){
            max=i;
        }
    }
    cout<<a[max]<<endl;
}
int main() {
    int n;
    int a[100];
    cout<<"Nhap so pt cua mang: "<<endl;
    cin>>n;
    nhap(a, n);
    xuat(a,n);
    cout<<"doan [a,b]=";
    cout<<"[";
    gtmin(a, n);
    gtmax(a, n);
    cout<<"]";
    xoa(a, n);
    xuat(a, n);
    return 0;
}
 */

/*
 // Câu 3:
 #include <iostream>
 #include <iomanip>
 using namespace std;
 void Nhap( int a[] , int n)
 {
 for ( int i = 0 ; i < n ; i ++)
 {
 cout << "Nhap vao phan tu a"<<"["<<i<<"]: "; cin >> a[i];
 }
 }
 void Xuat ( int a[] , int n)
 {
 for ( int i = 0 ; i < n ; i ++)
 {
 cout << a[i] << " ";
 }
 }
 void duong(int a[],int n){
 for(int i=0;i<n;i++){
 if(a[i]>0){
     cout<<a[i];
 }
 }
 }
 void sapxep_d(int a[100],int *n){
 duong(a,*n);
 for(int i=0;i<*n;i++){
 for(int j=i+1;j<*n;j++){
 if(a[i]>a[j]){
 swap(a[i],a[j]);
 }
 }
 }
 }
 void am(int a[],int n){
 for(int i=0;i<n;i++){
 if(a[i]<0){
     cout<<a[i];
 }
 }
 }
 void GiamDan(int a[], int *n){
 am(a, *n);
 int tg;
     for(int i = 0; i < *n - 1; i++){
         for(int j = i + 1; j < *n; j++){
             if(a[i] < a[j]){
                 tg = a[i];
                 a[i] = a[j];
                 a[j] = tg;
             }
         }
     }
 }
 int main(){
int n;
 int a[100];
 cout<<"Nhap so phan tu cua mang: "<<endl;
 cin>>n;
 Nhap(a, n);
 sapxep_d(a, &n);
 cout<<"\t";
 cout<<endl;
 GiamDan(a, &n);
 cout<<"Mang cuoi cung: ";
 Xuat(a, n);
 }
*/
/*
// Bài tập về mảng 2 chiều !
#include <iostream>
#include <iomanip>
#define max 50
using namespace std;
void nhap(int b[max][max],int m, int n){
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<"b["<<i<<"]["<<j<<"]= ";
            cin>>b[i][j];
        }
    }
}
void xuat(int  b[max][max],int m, int n){
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
            cout<<b[i][j]<<"\t";
            cout<<endl;
        }
}
int tinh_tong(int  b[max][max],int m, int n){
    int tong = 0;
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            tong += b[i][j];
    return tong;
    }
void chuyen_vi(int  b[max][max],int m, int n)
{
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++)
            cout<<b[j][i]<<"\t";
            cout<<endl;
    }
}
int main(){
    int n,m;
    int b[max][max];
    cout<<"Nhap so dong: ";
    cin>>n;
    cout<<"Nhap so cot: ";
    cin>>m;
    nhap(b,m,n);
    xuat(b,m,n);
    cout<<"Tong cac phan tu cua ma tran: ";
    cout<<tinh_tong(b,m,n);
    
    cout<<" Ma trận chuyển vị: "<<endl;
    chuyen_vi(b, m, n);
    return 0;
}
*/
/*
 #include <iostream>
 #include <iomanip>
 #define max 50
 using namespace std;
 void nhap(int b[max][max], int n){
 for (int i=0;i<n;i++){
 for (int j=0;j<n;j++){
 cout<<"b["<<i<<"]["<<j<<"]= ";
 cin>>b[i][j];
 }
 }
 }
 void xuat(int  b[max][max], int n){
 for (int i=0;i<n;i++){
 for (int j=0;j<n;j++)
 cout<<b[i][j]<<"\t";
 cout<<endl;
 }
 }
 void dg_cheo_ch(int  b[max][max], int n){
 int tong = 0;
 for (int i=0;i<n;i++){
 for (int j=0;j<n;j++)
 if(i==j)
 cout<<b[i][j]<<endl;
 }
 }
 bool checkNT(int n){
 if (n<2) return false ;
 for (int i= 2; i<=sqrt(n); i++){
 if (n%i==0) return false ;
 }
 return true ;
 }
 void songto(int b[max][max], int n){
 int dem=0;
 for (int i = 0; i<n; i++){
 for (int j =0 ; j<n; j++){
 if (checkNT(b[i][j])){
 dem++;
 cout <<b[i][j]<<" ";
 }
 }
 
 }
 cout <<"so cac so nguyen to la : "<<dem;
 }
 int main(){
 int n;
 int b[max][max];
 cout<<"Nhap so dong, cot: ";
 cin>>n;
 nhap(b,n);
 xuat(b,n);
 cout<<"Tong cac phan tu  cua duong cheo chinh cuama tran: ";
 dg_cheo_ch(b, n);
 cout<<"So ng to trong mang la";
 songto(b, n);
 return 0;
 }
 */
/*
#include<iostream>
#include<math.h>
using namespace std;
class phan_so {
    private:
    int tuso;
    int mauso;
    public:
    phan_so(int tuso = 0 , int mauso = 1){
    this -> tuso = tuso;
    this -> mauso = mauso;
    }
    ~phan_so(){}
void nhap(){
    cout<<"Nhap tu so : "<<endl;
    cin>>tuso;
    cout<<"Nhap mau so : "<<endl;
    cin>>mauso;
}
void xuat();
void rutgon();
phan_so tong (phan_so x){
    phan_so t;
    t.tuso = this -> tuso * x.mauso + this -> mauso * x.tuso;
    t.mauso = this -> mauso *  x.mauso;
    return t;
}
phan_so hieu (phan_so y){
   phan_so t;
    t.tuso = this -> tuso * y.mauso - this -> mauso * y.tuso;
    t.mauso = this -> mauso *  y.mauso;
    return t;
}
};
int UCLN(int x , int y){
    while( x != y){
        if(x>y){
            x=x-y;
        }
        else{
            y=y-x;
        }
    }
    return x;
}
void phan_so :: xuat(){
     cout<<tuso<<"/"<<mauso<<endl;
}
void phan_so :: rutgon(){
    int k=UCLN(tuso,mauso);
    tuso = tuso / k;
    mauso = mauso / k;
}
int main(){
    phan_so a,b;
    a.nhap();
    b.nhap();
    phan_so sum,hieu1;
    cout<<"Phan so 1: ";
    a.xuat();
    cout<<"Phan so 2: ";
    b.xuat();
    cout<<"Tong 2 phan so: ";
    sum = a.tong(b);
    sum.rutgon();
    sum.xuat();
    cout<<"Hieu 2 phan so: ";
    hieu1 = a.hieu(b);
    hieu1.xuat();
    return 0;
}
*/
/*
#include <iostream>
#include <iomanip>
#include <math.h>
#define max 100
using namespace std;
void input(int b[max][max], int m, int n){
    for (int i = 0; i<m; i++){
        for (int j =0 ; j<n; j++){
            cout <<"b["<<i<<"]["<<j<<"] = ";
            cin>>b[i][j];
        }
    }
}
void output(int b[max][max], int m, int n){
    for (int i = 0; i<m; i++){
        cout <<endl;
        for (int j =0 ; j<n; j++){
            cout <<" "<<b[i][j];
        }
    }
}
int kiemtra_pt_le(int b[max][max], int m, int n){
    int dem=0;
    for (int i = 0; i<=m; i++){
        for (int j =0 ; j<=n; j++)
            if (b[i][j]%2!=0){
                dem++;
            }
    }
    return dem;
    }
void trungbinh(int b[max][max], int m, int n){
    float sum =0;
    float tb;
    for (int i = 0; i<m; i++){
        for (int j =0 ; j<n; j++){
            if (b[i][j]%2!=0){
                sum+=b[i][j];
                tb=float(sum/kiemtra_pt_le(b, m, n));
            }
        }
    }
            cout <<"\ntb cac phan tu le la : "<<tb<<endl;
}
bool checkNT(int n){
    if (n<2) return false ;
    for (int i= 2; i<=sqrt(n); i++){
        if (n%i==0) return false ;
    }
    return true ;
}
void songto(int b[max][max], int m, int n){
    int dem=0;
        for (int i = 0; i<m; i++){
            for (int j =0 ; j<n; j++){
                if (checkNT(b[i][j])){
                    dem++;
                    cout <<b[i][j]<<" ";
                }
            }
            
        }
    cout <<"co cac so nguyen to la : "<<dem<<endl;
}
void timmax(int b[max][max],int m , int n)
{
    int x=0;
    int y=0;
    int max1=b[0][0];
      for (int i=0;i<m;i++)
      {
          for (int j=0;j<n;j++)
              if (b[i][j]>max1)
              {
                  max1=b[i][j];
                  x=i;
                  y=j;
              }
          }
  cout<<"Vi tri co gia tri lon nhat trong mag 2 chieu co dia chi la "<<"["<<x<<"]"<<"["<<y<<"]";
}
void doicho(int &a, int &b)
{
   int temp = a;
   a = b;
   b = temp;
}
 
void DoiCho2Hang(int b[][max], int m, int n, int h1, int h2)
{
    if((h1>=0 && h1<m)&&(h2>=0 && h2<m)){
        for(int j=0;j<n;j++)
            doicho(b[h1][j],b[h2][j]);
    }
    output(b, m, n);
}
void DoiChoHaiCot(int b[][max], int m, int n, int cot1, int cot2)
{
    if((cot1>=0 && cot1<n)&&(cot2>=0 && cot2<n)){
        for(int i=0;i<m;i++)
            doicho(b[i][cot1],b[i][cot2]);
    }
    output(b, m, n);
}
void XoaDong(int b[][100], int &m, int n, int xd)
{
    for(int i=xd;i<m-1;i++)
        for(int j=0;j<n;j++)
            b[i][j]=b[i+1][j];
        m--;
}
 
void XoaCot(int b[][100], int m, int &n, int xc)
{
    for(int i=0;i<m;i++)
        for(int j=xc;j<n-1;j++)
            b[i][j]=b[i][j+1];
        n--;
}
int main(){
    int b[max][max], m, n;
    cout<<"Nhap so hang m = ";
    cin>>m;
    cout<<"Nhap so cot n = ";
    cin>>n;
    input(b,m,n);
    output(b,m,n);
    trungbinh(b,m,n);
    cout <<"cac so nguyen to la : ";
    cout<<endl;
    songto(b,m,n);
    cout<<"Co tat ca "<<kiemtra_pt_le(b, m, n)<<" So le "<<endl;
    timmax(b,m,n);
    cout<<endl;
    int h1;
    cout<<"Dong can doi thu 1 :";
    cin>>h1;
    int c1;
    cout<<"Dong can doi thu 2 :";
    cin>>c1;
    DoiCho2Hang(b, m, n, h1, c1);
    cout<<endl;
    int c2;
    int h2;
    cout<<"Cot can doi cho thu 1 : ";
    cin>>c2;
    cout<<"Cot can doi cho thu 2 : ";
    cin>>h2;
    DoiChoHaiCot(b, m, n, h2,c2);
    cout<<endl;
    int xd,xc;
    cout<<"Nhap dong can xoa : ";
    cin>>xd;
    cout<<"Nhap cot can xoa : ";
    cin>>xc;
    XoaCot(b, m, m, xc);
    XoaDong(b, m, n, xd);
    output(b, m, n);
    return 0;
}
*/
/*
#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n], min, max;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        max = arr[i][0];
        for(int j = 1; j < n; j++){
            if(arr[i][j] > max) max = arr[i][j];
        }
        cout << max << endl;
    }
    for(int i = 0; i < n; i++){
        min = arr[0][i];
        for(int j = 1; j < m; j++){
            if(arr[j][i] < min) min = arr[i][j];
        }
        cout << min << endl;
    }
    return 0;
}
*/
/*
#include <iostream>
#include <string.h>
#include <cstring>
#include <stdio.h>
using namespace std;
int main(){
    char s[100];
    cout<<"Nhap xau: ";
    cin.getline(s,50);
    cout<<"Xau da nhap la "<<s<<endl;
    long n;
    int dem=0;
    n=strlen(s);
    if(n==0){
        cout<<"Khong co tu nao! "<<endl;
    }
    for(int i=0;i<n;i++){
        if(toupper(s[i])=='A'|| toupper(s[i])=='B')
            dem++;
    }
    cout<<"So tu a,b cua xau la:"<<dem<<endl;
}
*/
/*
 #include <iostream>
 #include <string.h>
 #include <cstring>
 #include <stdio.h>
 using namespace std;
 int main(){
 char s[100];
 cout<<"Nhap xau: ";
 cin.getline(s,50);
 cout<<"Xau da nhap la "<<s<<endl;
 long n;
 int kt=1;
 n=strlen(s);
 for(int i=0;i<n;i++){
 if(s[i]!=s[n-i-1]){
 kt = 0;
 }
 }
 if(kt==1){
 cout<<"xau da nhap doi xung "<<endl;
 }
 else
 cout<<"xau da nhap ko doi xung "<<endl;
 return 0;
 }
 */
/*
// Ma trận chuyện vị
#include<iostream>
using namespace std;
#define mt 100
void nhap(int a[mt][mt],int d, int c){
    for(int i=0;i<d;i++){
        for(int j=0;j<c;j++){
            cout<<"A["<<i<<"] ["<<j<<"] = ";
            cin>>a[i][j];
        }
    }
}
void xuat(int a[mt][mt],int d, int c){
    for(int i=0;i<d;i++){
        for(int j=0;j<c;j++)
            cout<<a[i][j]<<"\t";
        cout<<endl;
    }
}
void chuynvi(int a[mt][mt],int d,int c){
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++)
            cout<<a[j][i]<<"\t";
        cout<<endl;
        }
    }
void bacthang(int a[mt][mt],int d,int c){
    for(int i=0;i<d;i++){
        for(int j=0;j<c;j++){
            if(a[i][0]==1){
                if(a[i][0]>0){
                    a[i+1][0]=-a[i+1][0]*1+a[i+1][0];
                }
                else{
                    a[i+1][0]=a[i+1][0]*1+a[i+1][0];
                }
            }
        }
    }
    xuat(a, d, c);
}
int main(){
    int a[mt][mt];
    int d,c;
    cout<<"Nhap so dong: ";
    cin>>d;
    cout<<"Nhap so cot :";
    cin>>c;
    nhap(a, d, c);
    xuat(a, d, c);
    cout<<"Ma tran chuyen vi la: "<<endl;
    chuynvi(a, d, c);
    bacthang(a, d, c);
}
*/
/*
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char v[50];
    cout<<"Nhap xau: ";
    cin.getline(v,50);
    int n;
    n = strlen(v);
    cout<<"Xau da nhap la: "<<v<<endl;
    cout<<"Xau dao nguoc la: "<<endl;
    for(int i=n-1;i>=0;i--)
        cout<<v[i];
    cout<<endl;
    return 0;
}
*/
/*
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char v[50];
    cout<<"Nhap xau: ";
    cin.getline(v,50);
    int n,dem=1;
    n = strlen(v);
    if(n==0){
        cout<<"Khong co tu nao trong xau !"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        if(v[i]==' ')
            dem++;
    }
        cout<<" So tu trong xau la: "<<dem<<endl;
    }
*/
/*
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char v[50];
    cout<<"Nhap xau: ";
    cin.getline(v,50);
    int n,kt=1;
    n = strlen(v);
    for(int i=0;i<n;i++){
        if(v[i] != v[n-i-1])
            kt=0;
    }
    if(kt==1)
        cout<<"Xau da nhap dx !"<<endl;
    else{
        cout<<"Xau  da nhap 0 dx !"<<endl;
    }
    return 0;
    }
*/
/*
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char v[50],l[50];
    cout<<"Nhap xau 1: ";
    cin.getline(v,50);
    int n =strlen(v);
    cout<<"Nhap xau 2: ";
    cin.getline(l,50);
    int u = strlen(l);
    if(n==u){
        cout<<"2 xau bang nhau !"<<endl;
    }
    else if(n<u){
        cout<<"Xau 1 be hon xau 2 !"<<endl;
    }
    else{
        cout<<"Xau 1 lon hon xau 2 ! "<<endl;
    }
}
*/
/*
#include<iostream>
#include<string.h>
using namespace std;
int  main(){
    char s[50];
    cout<<"Nhap xau ho ten: ";
    cin.getline(s,50);
    int v=strlen(s);
    cout<<"Ho tach duoc la: ";
    for(int i = 0 ; i < v; i++){
        if(s[i] !=' '){
            cout<<s;
        }
    }
    cout<<endl;
    return 0;
}
*/
/*
#include<iostream>
#include<string.h>
using namespace std;
/*b1
int main() {
    char a[50];
    int n;
    cout << "Nhap xau: "; cin.getline(a,50);
    n = strlen(a);
    cout << "Xau da nhap la: " << a << endl;
    cout << "Xau dao nguoc la: " << endl;
    for(int i=n-1;i>=0;i--)
    cout << a[i];
     cout << endl;
    return 0;
}
*/

/*b2
int main() {
    char a[50];
    int n, d=1;
    cout << "Nhap xau: "; cin.getline(a,50);
    n = strlen(a);
    cout << "Xau da nhap la: " << a << endl;
    for(int i=0;i<n;i++)
    if(a[i]==' ')
    d++;
    cout << "So tu trong xau la: " << d << endl;
    return 0;
}
*/

/*b3
int main() {
    int n,i,d=0;
    char a[50];
    cout << "Nhap xau: "; cin.getline(a,50);
    n=strlen(a);
    for(i=0;i<n;i++)
      if(toupper(a[i])=='A' || toupper(a[i])=='B')
     d++;
    cout << "So luong ky tu a b trong xau la:" << d << endl;
    return 0;
}
*/

/*b4
int main() {
    char a[50];
    int n,kt=1;
    cout << "Nhap vao mot xau ky tu: "; cin.getline(a,50);
    n=strlen(a);
    for(int i=0;i<n;i++)
    if(a[i]!=a[n-i-1])
    kt=0;
    if(kt==1)
    cout << "Xau da nhap doi xung" << endl;
    else cout << "Xau khong doi xung" << endl;
    return 0;
}
*/

/*b5
int main() {
    char a[50];
    cout << "Nhap xau chu thuong: "; cin.getline(a,50);
    cout << "Xau chu hoa la: " << strupr(a) << endl;
    return 0;
}
*/

/*b6
int main() {
    char a[50],b[50];
    cout << "Nhap xau 1: "; cin.getline(a,50);
    cout << "Nhap xau 2: "; cin.getline(b,50);
    if(strcmp(a,b) == 0)
     cout << "Hai xau giong nhau" << endl;
     else if(strcmp(a,b) > 0)
     cout << "Xau 1 lon hon xau 2" << endl;
     else cout << "Xau 1 nho hon xau 2" << endl;
     return 0;
}
*/

/*b7
int main() {
    char a[50],ch;
    int n;
    bool k=false;
    cout << "Nhap xau ky tu: "; cin.getline(a,50);
    cout << "Nhap ky tu can tim: "; cin >> ch;
    n=strlen(a);
       for(int i=0;i<n;i++)
    if(a[i]==ch)
    k = true;
    if(k)
    cout << "Ky tu " << ch << " co trong xau" << endl;
    else cout << "Ky tu " << ch << " khong co trong xau" << endl;
    return 0;
}
*/

/*b8
int main() {
    char a[50];
    int i=0;
    cout << "Nhap xau ho ten: "; cin.getline(a,50);
     cout << "Ho tach duoc la: " << endl;
    while(a[i] != ' ') {
           cout << a[i];
        i++;
    }
     cout << endl;
     return 0;
}
*/

/*b9
int main() {
    char a[50], ten[20];
    int n,x,y=0;
    cout << "Nhap xau ho ten: "; cin.getline(a,50);
    n=strlen(a);
    x=n-1;
    while(a[x] != ' ') {
        ten[y] = a[x];
        x--;
        y++;
     }
    for(int z=y-1;z>=0;z--)
    cout << ten[z];
     return 0;
}
*/

/*b10
int main() {
    char a[50];
     int i,j,n;
    cout << "Nhap vao mot xau ky tu: "; cin.getline(a,50);
    n=strlen(a)-1;
    while(a[n]==' ')
    a[n]='\0';
    while(a[0]==' ')
    for(i=0;i<=n;i++)
    a[i]=a[i+1];
    i=0;
    while(a[i]!='\0') {
        if(a[i]==' ')
        if(a[i-1]==' ') {
            for(j=i;j<=n;j++)
              a[j]=a[j+1];
               i--;
           }
        i++;
    };
     cout << "Xau chuan hoa la: " << a << endl;
     return 0;
}
*/
/*
#include<cstring>
#include<string>
#include<sstream>
#include<vector>
int main() {
    string s,t;
    cout << "Nhap xau s: "; getline(cin, s);
    cout << "Nhap xau t: "; getline(cin, t);
    if(s.length() >= t.length()) {
        for(int i=0;i<s.length();i++) {
            if(s[i]==t[0]) {
                int ti=1;
                int check=1;
                for(int j=i+1;j<i+t.length();j++) {
                    if(s[j]==t[ti]) {
                        check++;
                    }
                    ti++;
                }
                if(check==t.length())
                cout << "Xuat hien ";
                else {
                    cout << "Khong xuat hien";
                }
            }
        }
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main() {
    char s[50];
    int dem = 0;
    cin.getline(s, 50);
    int n=strlen(s);
    for (int i = 0; i < n; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            dem++;
        }
    }
    cout << dem;
    return 0;
}
*/
/*
#include <iostream>
#include <typeinfo>
using namespace std;
int main ()
{
//bien co 2 thuoc tinh: gia tri cua bien va dia chi cua bien
   int  bien1=10;
   char bien2[3]={'3','5','8'};
   
   cout << "Gia tri cua bien1 la: ";
   cout << bien1 << endl;
   cout << "Gia tri cua bien2 la: ";
   cout << bien2 << endl;
   
   cout << "Dia chi cua bien1 la: ";
   cout << &bien1 << endl;

   cout << "Dia chi cua bien2 la: ";
   cout << &bien2 << endl;
// toan tu * va toan tu &
//toan tu *: lay gia tri
//toan tu &: Lay dia chi
int x=2;
// toan tu lay gia tri tai dia chi: *&bien;
    cout << "Gia tri cua x la: "<< x << endl;
     cout << "Dia chi cua x la: "<< &x << endl;
     cout << "Gia tri cua x la: "<< *&x << endl;
// *&x=x;
// khi tang bien x them 10 gia tri (x+) :
    *&x+=10;
    cout << "Gia tri cua x sau khi tang la: "<< x << endl;
    x+=10;
    cout << "Gia tri cua x la: "<< x << endl;
// *&x+=10 -> x=2+10=12
// x+10= 12+10 =22

// CON TRO (POINTER)
// Con tro la: bien va gia tri la dia chi mot bien khac
// khai bao: <kieu du lieu> *<ten con tro>

int a=10;
int *p;
p=&a;
cout << "Gia tri cua a la: " <<a<<endl;
cout << "Dia chi cua a la: "<< &a << endl;
cout << "Gia tri cua p la: " <<p<<endl;
cout << "Dia chi cua p la: "<< &p << endl;
 
//con tro co the tro toi nhieu dia chi
int b=20;
p=&b;
cout << "Gia tri cua b la: " <<b<<endl;
cout << "Dia chi cua b la: "<< &b << endl;
cout << "Gia tri cua p la: " <<p<<endl;
cout << "Dia chi cua p la: "<< &p << endl;
 // luc nay gia tri cua p da thay doi theo b
 
 //con tro thay doi gia tri cua bien
 *p+=10;
 cout << "Gia tri cua bien b la: " <<b<<endl;
 cout << "Gia tri tai dia chi cua con tro p tro toi la: " <<*p<<endl;
 
 // doi p to toi a
 p=&a;
 *p+=20;
 cout << "Gia tri a la: " <<a<<endl;
 cout << "Gia tri tai dia chi cua con tro p tro toi la: " <<*p<<endl;
 cout << "Gia tri cua bien b la: " <<b<<endl;
 // luc nay b van giu nguyen gia tri
 
 // co 3 cach khai bao con tro
 // int *p; -> thuong duoc su dung
 // int* p;
 // int * p; --> khong nen su dung
 
 // cu the:
 // int *p: Khai bao con tro p thuoc kieu int
 // int* p: khai bao bien p theo kieu con tro int;
 // Su khac biet khi khai bao va su dung
 
 int *p1,*p2, e, f;
 // a,b: 2 bien thuoc kieu int
 // p1, p2: con tro thuoc kieu int
 int* p3, p4, n, m;
// p3: con tro thuoc kieu int
// p4, c, d: 3 bien thuoc kieu con tro int
  
//p4=&e;  // loi -> vi p4:con tro thuoc kieu int* k the gan cho kieu int

// khong the gan con tro toi mot bien khong cung kieu
int z=10;
int *t=&z;
double v=20.1;
//t=&v; // loi khong the gan kieu double cho kieu int


   
return 0;
}
*/
/*
#include <iostream>
#include <string>
#define MAX 1008
using namespace std;
class MatHang {
private:
    int MaHang;
    string tenhang;
    float dongia;
    string noisanxuat;
public:
    MatHang(int MaHang = 0, string tenhang = "", float dongia = 0, string noisanxuat = "") {
        this->MaHang = MaHang;
        this->tenhang = tenhang;
        this->dongia = dongia;
        this->noisanxuat = noisanxuat;
    }
    ~MatHang(){}
    int get_maHang() {
        return this->MaHang;
    }
    float get_dongia() {
        return this->dongia;
    }
    void Nhap() {
        cout << " Nhap Ma Mat Hang : ";
        cin >> MaHang;
        cin.ignore();
        cout << " Nhap Ten Hang : ";
        getline(cin, tenhang);
        cout << " Nhap Don Gia : ";
        cin >> dongia;
        cin.ignore();
        cout << " Nhap Noi San Xuat : ";
        getline(cin, noisanxuat);
        cout << endl;
    }
    void xuat() {
        cout << " Ma Hang : " << MaHang << endl;
        cout << " Ten Hang : " << tenhang << endl;
        cout << " Don Gia : " << dongia << endl;
        cout << " Noi San Xuat : " << noisanxuat << endl;
    }
};
void Nhap_ds(MatHang a[], int& n) {
    for (int i = 0; i < n; i++) {
        cout << " Nhap Thong Tin Mat Hang Thu : " << i + 1 << "\n\n";
        a[i].Nhap();
    }
}
void Xuat_ds(MatHang a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << " Thong Tin Mat Hang Thu : " << i + 1 << "\n\n";
        a[i].xuat();
        cout << "\n ------------------- \n";
    }
}
void Xuat_Ma(MatHang a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i].get_maHang() != 101) {
            a[i].xuat();
            cout << "\n ------------------- \n";
        }
    }
}
void Xuat_Ma102(MatHang a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i].get_maHang() == 102) {
            a[i].xuat();
            cout << "\n ------------------- \n";
        }
    }
}
void sapxep(MatHang a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].get_maHang() > a[j].get_maHang()) {
                swap(a[i], a[j]);
            }
        }
    }
}
void Tim_max(MatHang a[], int n) {
    float max = a[0].get_dongia();
    int chiso = 0;
    for (int i = 1; i < n; i++) {
        if (max < a[i].get_dongia()) {
            max = a[i].get_dongia();;
            chiso = i;
        }
    }
    a[chiso].xuat();
}
void menu(){
    cout<<"************************************************************\n"<<endl;
    cout<<"************************ MENU ******************************\n"<<endl;
    cout<<"** 1. Nhap thong tin                                      **\n"<<endl;
    cout<<"** 2. Xuat thong tin.                                     **\n"<<endl;
    cout<<"** 3. Xuat thong tin co ma hang khac 101.                 **\n"<<endl;
    cout<<"** 4. Xuat thong tin co ma hang 102.                      **\n"<<endl;
    cout<<"** 5. Ma hang sau khi sap xep.                            **\n"<<endl;
    cout<<"** 6. Ma hang co don gia cao nhat.                        **\n"<<endl;
    cout<<"************************************************************\n"<<endl;
    cout<<"************************************************************\n"<<endl;
}
int main() {
    MatHang a[MAX];
    menu();
    int chon;
    int n;
    cout << " Nhap So Luong Mat Hang : ";
    cin >> n;
    do{
        cout<<"Nhap lua chon tu 1->6"<<endl;
        cin>>chon;
        switch(chon){
            case 1:
                cout<<"\n\n\t\t - -------------------NHAP THONG TIN MAT HANG -----------------\n\n";
                Nhap_ds(a, n);
                break;
            case 2:
                cout<<"\n\n\t\t - ------------------ THONG TIN MAT HANG -----------------\n\n";
                Xuat_ds(a, n);
                break;
            case 3:
                cout << "\n\n\t\t - ------------------- THONG TIN MAT HANG CO MA KHAC 101 -----------------\n\n";
                Xuat_Ma(a, n);
                break;
            case 4:
                cout << "\n\n\t\t - ------------------- THONG TIN MAT HANG CUA MA 102 -----------------\n\n";
                Xuat_Ma102(a, n);
                break;
            case 5:
                cout << "\n\n\t\t - ------------------- THONG TIN MAT HANG SAU KHI SAP XEP-----------------\n\n";
                sapxep(a, n);
                Xuat_ds(a, n);
                break;
            case 6:
                cout << "\n\n\t\t - ------------------- THONG TIN MAT HANG CO DON GIA CAO NHAT-----------------\n\n";
                Tim_max(a, n);
        }
    }while (chon!=0);
    system("pause");
    return 0;
}
*/
/*
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int *x;
    int *y;
    int *z;
    x=&a;
    y=&b;
    z=&c;
    int max=*x;
        if(max<=*y){
            max=*y;
            if(max<=*z){
                max=*z;
            }
        }
   cout<<"So lon nhat trong 3 so "<<a<<b<<c<<"la: "<< max;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    //ax+b=0
    int a,b;
    int *x,*y;
    cin>>a>>b;
    x=&a;
    y=&b;
    if(*x==0){
        if(*y==0)
            cout<<"Pt vo so nghiem !"<<endl;
        else
            cout<<"Vo nghiem !"<<endl;
       }
    if(*x != 0){
        cout<<"Pt co nghiem x = "<<(-*y*1.0) / *x*1.0<<endl;
    }
        return 0;
}
*/
/*
#include<iostream>
using namespace std;
int max(int *a,int *b,int *c){
    int max=*a;
    if(*b>max){
        max=*b;
    }
        if(*c>max){
            max=*c;
        }
    return max;
}
int main(){
    int *a,*b,*c;
    int x,y,z;
    cin>>x>>y>>z;
    a=&x;
    b=&y;
    c=&z;
    cout<<max(a,b,c);
}
*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{     int     n;
    int     *ptr;
    cout<<"Nhap so phan tu: ";cin>>n;
    ptr = new    int;
 /*cap phat bo nho*/
/*
    if (ptr != NULL)
    {     for(int i = 1 ; i<=n ; i++){
        *(ptr+i) = i;
        cout<<(*ptr+i)<<endl;
    }
        cout << *(ptr + 3 ) << endl;
        for(int i=n ; i>0 ; i--)
            cout<<*(ptr+(i-1))<<"\t";
        cout<<*(ptr+3)<<endl;
        delete    ptr;
        return 0;
    }
    else
    {     cout<<"\nKhong du bo nho de cap phat"<<endl;
        return 1;
    }
}
*/
/*
#include<math.h>
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int a, b, c, delta;
    int *x,*y,*z;
    x=&a;y=&b;z=&c;
    cout << "Nhap a, b, c: "; cin >> a >> b >> c;
    if(*x==0) {
        if(*y==0) {
            if(*z==0) {
                cout << "Phuong trinh vo so nghiem";
            } else {
                cout << "Phuong trinh vo nghiem";
            }
        } else {
            cout << "Phuong trinh co nghiem la: " << -c/b;
        }
    } else {
        delta = b*b - 4*a*c;
        if(delta>0) {
            int x1, x2;
            x1 = ((-b+sqrt(delta)) / 2*a);
            x2 = ((-b-sqrt(delta)) / 2*a);
            cout << "Phuong trinh co 2 nghiem x1, x2 la: " << x1 << ", " << x2;
        } else if(delta==0) {
            cout << "Phuong trinh co nghiem kep x1 = x2 = " << -b/(2*a);
        } else {
            cout << "Phuong trinh vo nghiem";
        }
    }
    return 0;
}
*/
/*
#include<iostream>
#include<string.h>
#include<iomanip>
#define MAXHS 5
#define MAXLEN 30
using namespace std;
int main(){
    int i,j,dem=0;
    char ds[MAXHS][MAXLEN];
    char *ptr[MAXHS], *tmp;
    while (dem < MAXHS){
        cout<<"Nhap hoc sinh thu :"<<dem+1<<endl;
        gets(ds[dem]);
        int dodai=strlen(ds[dem]);
        if(dodai == 0){
            break;
        }
        ptr[dem]=ds[dem];
        dem++;
    }
        for(int i=0;i<dem-1;i++){
            for(j=i+1;j<dem;j++)
                if(strcmp(ptr[i], ptr[j])>0)
                    swap(ptr[i],ptr[j]);
        }
    cout<<setw(10)<<"STT"<<setw(30)<<"Gia Tri"<<endl;
    for(i=0;i<dem;i++)
        cout<<setw(10)<<i+1<<setw(30)<<ptr[i]<<endl;
    return 0;
}
*/
/*
 /*
#include <iostream>
using namespace std;
#define hang 3
#define cot 3
int main(){
    int mt[hang][cot] = {
        {7,8,9},
        {10,13,15},
        {2,7,8}
    };
    int i,j;
    cout<<"Ma tran ban dau la:"<<endl;
    for (i=0; i<hang; i++)
    {      for (j=0; j<cot; j++)
        cout<< mt[i][j]<<"\t";
        cout<<endl;
    }
        cout<<"Ma tran sau khi tang la:"<<endl;
        for (i=0; i<hang; i++)
        {
            for (j=0; j<cot; j++)
            {
                *(*(mt+i)+j) = *(*(mt+i)+j) + 10;
                cout<<*(*(mt+i)+j)<<"\t";
            }
            cout<<endl;
        }
        return 0;
    }
*/
/*
#include <iostream>
using namespace std;
#define  max  3
int main()
{  int A[max] = {10, 100, 200};
     int *contro[max];
   for (int i = 0; i < max; i++)
        contro[i] = &A[i];
    for (int i = 0; i < max; i++)
    {
    cout << "Gia tri cua A[" << i << "] = ";
     cout << *contro[i] << endl;
    }
}
 */
/*
#include <iostream>
#include <string>
#define MAX 100
using namespace std;
class SV {
private:
    int Masv;
    string hovaten;
    float dtb;
    string diemchu;
    string quequan;
    string lop ;
    
public:
    SV(int Masv = 0, string hovaten = "", float dtb = 0, string quequan = "",string diemchu ="",string lop = "" ) {
        this->Masv = Masv;
        this->hovaten = hovaten;
        this->dtb = dtb;
        this->quequan = quequan;
        this->lop = lop;
        this->diemchu = diemchu;
    }
    ~SV(){}
    int get_Masv() {
        return this->Masv;
    }
    float get_dtb() {
        return this->dtb;
    }
    void Nhap() {
        cout << " Nhap Ma Sinh vien : ";
        cin >> Masv;
        cin.ignore();
        cout << " Nhap Ho Ten : ";
        getline(cin, hovaten);
        cout << " Nhap Que quan : ";
        getline(cin, quequan);
        fflush(stdin);
        cout << " Lop : ";
        getline(cin, lop);
        fflush(stdin);
        cout << " Diem Trung binh : ";
        cin>>dtb;
        cout << endl;
    }
    void xuat() {
        cout << " Ma SV : " << Masv << endl;
        cout << " Ho va Ten : " << hovaten << endl;
        cout << " Que quan : " << quequan << endl;
        cout << " Lop : " << lop << endl;
        cout << " Diem TB : " << dtb <<endl;
        cout << " Diem chu : " <<endl;
    }
};
void Nhap_ds(SV a[], int& n) {
    for (int i = 0; i < n; i++) {
        cout << " Nhap Thong Tin Sinh vien Thu : " << i + 1 << "\n\n";
        a[i].Nhap();
    }
}
void Xuat_ds(SV a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << " Thong Tin Sinh vien Thu : " << i + 1 << "\n\n";
        a[i].xuat();
        cout << "\n ------------------- \n";
    }
}
void Quy_doi_diem(SV a[] , int n){
    for (int i = 0; i < n; i++) {
        if(8 <= a[i].get_dtb() ){
            cout << " A ";
        }
        else if(6.5<=a[i].get_dtb() < 8){
            cout << " B ";
        }
        else if (5.5 <= a[i].get_dtb() < 6.5){
            cout << " C ";
        }
        else if (4 <= a[i].get_dtb() < 4.5){
            cout << " D ";
        }
        else{
            cout << " F ";
        }
    }
    Xuat_ds(a, n);
    }
void DS_SV_F(SV a[], int n) {
    for (int i = 0; i < n; i++) {
        if ( a[i].get_dtb() <= 4) {
            a[i].xuat();
            cout << "\n ------------------- \n";
        }
    }
}
void sapxep(SV a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].get_dtb() > a[j].get_dtb()) {
                swap(a[i], a[j]);
            }
        }
    }
}
void Tim_max(SV a[], int n) {
    float max = a[0].get_dtb();
    int chiso = 0;
    for (int i = 1; i < n; i++) {
        if (max < a[i].get_dtb()) {
            max = a[i].get_dtb();;
            chiso = i;
        }
    }
    a[chiso].xuat();
}
void menu(){
    cout<<"************************************************************\n"<<endl;
    cout<<"************************ MENU ******************************\n"<<endl;
    cout<<"** 1. Nhap thong tin.                                     **\n"<<endl;
    cout<<"** 2. Xuat thong tin.                                     **\n"<<endl;
    cout<<"** 3. Danh sach Sinh Vien thi lai.                        **\n"<<endl;
    cout<<"** 4. Danh sach Sinh Vien sau khi sap xep.                **\n"<<endl;
    cout<<"** 5. Sinh vien co diem trung binh cao nhat.              **\n"<<endl;
    cout<<"************************************************************\n"<<endl;
    cout<<"************************************************************\n"<<endl;
}
int main() {
    SV a[MAX];
    menu();
    int chon;
    int n;
    cout << " Nhap So Luong Sinh Vien : ";
    cin >> n;
    do{
        cout<<"Nhap lua chon tu 1->6"<<endl;
        cin>>chon;
        switch(chon){
            case 1:
                cout<<"\n\n\t\t - -------------------NHAP THONG TIN SINH VIEN -----------------\n\n";
                Nhap_ds(a, n);
                break;
            case 2:
                cout<<"\n\n\t\t - ------------------ THONG TIN SINH VIEN -----------------\n\n";
                Xuat_ds(a, n);
                Quy_doi_diem(a, n);
                break;
            case 3:
                cout << "\n\n\t\t - ---------------- DANH SACH SINH VIEN THI LAI ----------------\n\n";
                DS_SV_F(a,n);
                break;
            case 4:
                cout << "\n\n\t\t - ------------------- THONG TIN SINH VIEN SAU KHI SAP XEP-----------------\n\n";
                sapxep(a, n);
                Xuat_ds(a, n);
                break;
            case 5:
                cout << "\n\n\t\t - ------------------- THONG TIN SINH VIEN CO DIEM CAO NHAT-----------------\n\n";
                Tim_max(a, n);
        }
    }while (chon!=0);
    system("read");
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class Thisinh{
private:
    char mts [20];
    char ht[25];
    int t;
    int l;
    int h;
    float tong;
public:
    Thisinh(char *mts = "",char *ht = "",int t=0,int l=0,int h=0){
        strcpy(this->mts, mts);
        strcpy(this->ht, ht);
        this-> t = t;
        this-> l = l;
        this-> h = h;
        this-> tong = tong;
    }
    ~Thisinh(){}
friend istream & operator >> (istream& is , Thisinh &a){
    cout<<"Nhap ma thi sinh: ";
    is.getline(a.mts,20);
    cout<<"Nhap ho va ten: ";
    is.getline(a.ht, 25);
    cout<<"Nhap diem toan: ";
    is >> a.t;
    cout<<"Nhap diem ly: ";
    is >> a.l;
    cout<<"NHap diem hoa: ";
    is >> a.h;
    a.tong=a.t+a.l+a.h;
    return is;
}
    friend ostream & operator << (ostream& os , Thisinh &a){
        os << " MA THI SINH : "<<a.mts<<endl;
        os << " HO VA TEN : "<<a.ht<<endl;
        os << " DIEM TOAN : "<<a.t<<endl;
        os << " DIEM LY : "<<a.l<<endl;
        os << " DIEM HOA : "<<a.h<<endl;
        os << " TONG DIEM: "<<a.tong<<endl;
        return os;
    }
};
void nhap_ds(Thisinh a[],int &n){
    for(int i=0;i<n;i++){
        cout<<"Nhap thong tin thi sinh "<<endl;
        fflush(stdin);
        cin>>a[i];
    }
}
void xuat_ds(Thisinh a[],int &n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
int main(){
    int n;
    do{
        cout<<"Nhap so luong thi sinh: "<<endl;
        cin>>n;
    }
    while(n<=0);
        Thisinh *ts= new Thisinh[n];
        nhap_ds(ts,n);
        cout<<"Danh sach thi sinh da nhap"<<endl;
        xuat_ds(ts,n);
}
*/
/*
#include<iostream>
using namespace std;
class MatHang{
private:
    int Mahang;
    string Tenhang;
    int soluong;
    int dongia;
public:
    MatHang(int Mahang = 0,string Tenhang = "",int soluong=0,int dongia=0){
        this->Mahang=Mahang;
        this->Tenhang=Tenhang;
        this->soluong = soluong;
        this->dongia = dongia;
    }
    ~MatHang(){}
    int get_Mahang() {
        return this->Mahang;
    }
    int get_dongia() {
        return this->dongia;
    }
    friend istream & operator >> (istream& is , MatHang &a){
        cout<<"Nhap ma hang : ";
        is >> a.Mahang;
        cout<<"Nhap Ten hang : ";
        is >> a.Tenhang;
        cout<<"Nhap So Luong : ";
        is >> a.soluong;
        cout<<"Nhap Don Gia: ";
        is >> a.dongia;
        return is;
    }
    friend ostream & operator << (ostream& os , MatHang &a){
        cout<<" MA HANG "<<a.Mahang<<endl;
        cout<<" TEN HANG "<<a.Tenhang<<endl;
        cout<<" SO LUONG "<<a.soluong<<endl;
        cout<<" DON GIA "<<a.dongia<<endl;
        return os;
    }
};
void nhap_ds(MatHang a[],int &n){
    for(int i=0;i<n;i++){
        cout<<"Nhap thong tin mat hang "<<endl;
        fflush(stdin);
        cin>>a[i];
    }
}
void xuat_ds(MatHang a[],int &n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
void max_dongia(MatHang a[],int &n){
    float max = a[0].get_dongia();
    int chiso = 0;
    for (int i = 1; i < n; i++) {
        if (max < a[i].get_dongia()) {
            max = a[i].get_dongia();;
            chiso = i;
        }
    }
    a[chiso].operator=(MatHang());
}
void sapxep(MatHang a[],int &n){
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].get_Mahang() > a[j].get_Mahang()) {
                swap(a[i], a[j]);
            }
        }
    }
}
int main(){
    int n;
    do{
        cout<<"Nhap so mat hang: "<<endl;
        cin>>n;
    }
    while(n<=0);
        MatHang *ms= new MatHang[n];
        nhap_ds(ms,n);
        cout<<"Danh sach mat hang da nhap"<<endl;
        xuat_ds(ms,n);
    cout<<"Mat hang co don gia cao nhat: "<<endl;
    max_dongia(ms,n);
    cout<<"'Sap xep theo thu tu ma hang: "<<endl;
    sapxep(ms,n);
    system("read");
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a[10], *vitri;
    vitri = a;
    cout<<"Nhap mang: "<<endl;
    for(int i=0;i<10;i++){
        cout<<"Nhap gia tri " << i << ": ";
        cin>>vitri[i];
    }
    cout<<"Mang da nhap la: "<<endl;
    for(int i=0;i<10;i++){
        cout<<*(vitri+i)<<"\t";
    }
    return 0;
    system("pause");
}
*/
/*
 #include<iostream>
 #include<string.h>
 using namespace std;
 int main(){
 int n;
 cin>>n;
 char *tg;
 tg = new char();
 cout<<"Nhap ten nguoi: "<<endl;
 for(int i=0;i<n;i++){
 cin.getline(tg,50);
 }
 cout<<"Ten nguoi da duoc nhap la: "<<endl;
 for(int i=0;i<n;i++){
 cout<<*tg<<endl;
 }
 }
 */

/*#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    char name[]={"van","ha","lan","anh","phuong"};
    int size=sizeof(name);
    cout<<"Nhap vao danh sach ten ng dung: ";
    cin>>n;
    if(n>=1 && n<=size){
        char *ptr =&name[n-1];
        cout<<"Ten ng co thu tu la: "<<*ptr<<endl;
    }
    else{
        cout<<"Khong tim thay ng nay !"<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
class CongDan{
private:
    char nghenghiep[20];
    char ht[25];
    int scccd;
    string quoctich;
    int tuoi;
public:
    CongDan(char *nghenghiep = "",char *ht = "",int scccd=0,string quoctich = "",int tuoi=0){
        strcpy(this->nghenghiep, nghenghiep);
        strcpy(this->ht, ht);
        this->quoctich = quoctich;
        this-> scccd = scccd;
        this-> tuoi = tuoi;
    }
    ~CongDan(){}
    string get_Quoctich() {
        return this->quoctich;
    }
    int get_CCCD(){
        return  this->scccd;
    }
    friend istream & operator >> (istream& is , CongDan &a){
        fflush(stdin);
        cout<<"Nhap So Can Cuoc Cong Dan: ";
        is >> a.scccd;
        fflush(stdin);
        cout<<"Nhap ho va ten: ";
        is.getline(a.ht, 25);
        fflush(stdin);
        cout<<"Nhap tuoi: ";
        is >> a.tuoi;
        fflush(stdin);
        cout<<"Nhap Nghe nghiep: ";
        is.getline(a.nghenghiep, 25);
        cout<<"Nhap Quoc tich: ";
        getline(is,a.quoctich);
        return is;
    }
    friend ostream & operator << (ostream& os , CongDan &a){
        os << " SO CCCD : "<<a.scccd<<endl;
        os << " HO VA TEN : "<<a.ht<<endl;
        os << " TUOI : "<<a.tuoi<<endl;
        os << " NGHE NGHIEP : "<<a.nghenghiep<<endl;
        os << " QUOC TICH : "<<a.quoctich<<endl;
        return os;
    }
    bool operator < (CongDan a){
        return this -> scccd < a.scccd;
    }
    bool operator < (int x){
        return this -> scccd < x;
    }
    bool operator == (int x){
        return this -> scccd == x;
    }
};
void nhap_ds(CongDan a[],int &n){
    for(int i=0;i<n;i++){
        cout<<"Nhap thong tin cong dan "<<endl;
        fflush(stdin);
        cin>>a[i];
    }
}
void xuat_ds(CongDan a[],int &n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
void quoctinh_NJL(CongDan a[],int n){
    for(int i=0;i<n;i++){
        if(a[i].get_Quoctich() == "New Zealand"){
            cout<<a[i];
        }
    }
}
void timkiem(CongDan a[],int n,int ng){
    for(int i=0;i<n;i++){
        if(a[i].get_CCCD()==ng){
            cout<<a[i];
        }
    }
}
void cccd_be(CongDan a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]<1234){
            cout<<a[i];
        }
    }
}
void sapxep(CongDan a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    xuat_ds(a,n);
}
void xoa(CongDan a[],int n,int ngx){
    for(int i=0;i<n-1;i++){
        if(a[i].get_CCCD()==ngx){
            for(int j=i;j<n;j++){
                a[j]=a[j+1];
            }
            n--;
        }
    }
    xuat_ds(a, n);
}
int main(){
    int n;
    do{
        cout<<"Nhap so luong Cong Dan: "<<endl;
        cin>>n;
    }
    while(n<=0);
        CongDan *cd= new CongDan[n];
        nhap_ds(cd,n);
        cout<<"Danh sach Cong Dan da nhap"<<endl;
        xuat_ds(cd,n);
        cout<<"Danh sach Cong dan co quoc tich New Zealand "<<endl;
        quoctinh_NJL(cd, n);
    int ng;
    cout<<"Nhap so cccd can tim kiem: "<<endl;
    cin>>ng;
    cout<<"Nguoi tim duoc la: ";
    timkiem(cd, n, ng);
    cout<<"Danh sach cd co so can cuoc be hon 1234"<<endl;
    cccd_be(cd, n);
    cout<<"Danh sach so cccd theo tang dan: "<<endl;
    sapxep(cd, n);
    int ngx;
    cout<<" Nhap so CCCD can xoa "<<endl;
    cin>>ngx;
    cout<<" Danh sach sau khi xoa : "<<endl;
    xoa(cd, n, ngx);
}
*/
// Bài 3
/*
#include<iostream>
#include<iomanip>
using namespace std;
struct Hodan{
    char maho[5];
    char tenchuho[25];
    int thanhvien;
    float mucthunhap;
    char hognheo[8];
    float trocap;
};
void nhap(Hodan a[],int n){
    for(int i=0;i<n;i++){
        cout<<"Ho dan thu "<<i+1<<endl;
        fflush(stdin);
        cout<<"Nhap ma ho: "<<endl;
        cin.getline(a[i].maho, 5);
        fflush(stdin);
        cout<<"Nhap ten chu ho: "<<endl;
        cin.getline(a[i].tenchuho, 25);
        fflush(stdin);
        cout<<"Nhap so thanh vien: "<<endl;
        cin>>a[i].thanhvien;
        cout<<"Nhap Muc thu nhap: "<<endl;
        cin>>a[i].mucthunhap;
    }
}
void xuat(Hodan a[],int n){
    for(int i=0;i<n;i++){
        cout<<setw(5)<<a[i].maho
            <<setw(12)<<a[i].tenchuho
            <<setw(15)<<a[i].thanhvien
            <<setw(15)<<a[i].mucthunhap
            <<setw(15)<<a[i].hognheo
            <<setw(15)<<a[i].trocap<<endl;
    }
}
void tieude(){
    cout<<"_______________________Thong tin cac Ho Dan___________________"<<endl;
    cout<<setw(5)<<"Ma Ho"
        <<setw(12)<<"Ten Chu Ho"
        <<setw(15)<<"So Thanh Vien"
        <<setw(15)<<"Muc Thu Nhap"
        <<setw(15)<<"Ho Ngheo"
        <<setw(15)<<"Tro Cap"<<endl;
}
void ktrngheo(Hodan a[],int n){
    for(int i=0;i<n;i++){
        if(a[i].mucthunhap < 2000000){
            cout<<" Co ";
        }
        else{
            cout<<" Khong ";
        }
    }
}
void Trocap(Hodan a[],int n){
    for(int i=0;i<n;i++){
        if(a[i].mucthunhap < 2000000 && a[i].thanhvien >=5){
            a[i].trocap=1000000*a[i].thanhvien;
        }
        else if(a[i].mucthunhap < 2000000 &&  3 <= a[i].thanhvien <=5){
            a[i].trocap=800000*a[i].thanhvien;
        }
        else if(a[i].mucthunhap < 2000000 &&  1 <= a[i].thanhvien < 3){
            a[i].trocap=500000*a[i].thanhvien;
        }
        else{
            cout<<"Khong ho tro !";
        }
    }
}
void stv_5(Hodan a[],int n){
    tieude();
    for(int i=0;i<n;i++){
        if(a[i].thanhvien > 5){
            cout<<a[i].thanhvien;
        }
    }
    xuat(a, n);
}
int main(){
    int n;
    do
    {
        cout << "Nhap so luong Ho dan : ";
        cin >> n;
         if(n<=0)
        {
            cout << "\nNhap thong tin sai , Nhap lai !" << endl;
        }
    }while (n <=0);
    cout<<"Nhap Thong tin Ho dan: "<<endl;
    Hodan a[n];
    nhap(a, n);
    tieude();
    ktrngheo(a, n);
    xuat(a, n);
    Trocap(a, n);
    xuat(a, n);
    cout<<"Nhung ho dan co stv > 5";
    stv_5(a, n);
}
*/
/*
// Bài 1:
/*
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main(){
    int i,j,n,m,dem,max=0;
    char s[1000];
    cout<<"nhap chuoi :";
    fflush(stdin);
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]!=' ')
        {
            dem=1;
            j=i+1;
        }
        while(s[j]!=' '&&j<strlen(s)){
            dem++;
            if(dem>max)
            {
                max=dem;
                n=i;
                m=j;
            }
            j++;
        }
    }
    cout<<"tu dai nhat la :";
    for(int i=n;i<=m;i++)
        cout<<s[i];
    char str[30];
    char * p;
    char z;
    cout<<"Tim tu trong chuoi :"<<endl;
    cin>>z;
    if(p = strchr(str,z)){
        cout<<"Co "<<z<<"trong chuoi";
    }
    else{
        cout<<"Khong co trong chuoi! ";
    }
}
*/
/*
// Bài 4
#include<stdio.h>
#include<iostream>
using namespace std;
void Nhap(int a[][100],int m, int n){//Ham nhap ma tran
    for(int i = 0; i<m; i++){//duyet hang cua ma tran
        for(int j = 0 ; j<n; j++){//duyet cot cua ma tran
            cin>>a[i][j];//nhap vao cac phan tu cua ma tran
        }
    }
}
void Xuat(int a[][100],int m, int n){//ham xuat ma tran
    for(int i =0; i<m; i++){//duyet hang cua ma tran
        for(int j = 0; j<n; j++){//duyet cot cua ma tran
            cout<< a[i][j]<<"\t";//in ma tran ra man hinh
        }
        cout<<endl;
    }
}
void TongHang(int a[][100],int m, int n){
    for(int i =0; i<m; i++){//duyet hang cua ma tran
        int tong = 0;// moi lan duyet hang khac cap nhat tong = 0
        for(int j = 0; j<n; j++){//duyet cot cua ma tran
            tong += a[i][j];
        }
        cout<<"tong cua hang thu "<<i<<"la:"<<tong<<endl;
    }
}
    void doi(int a[][100],int m, int n){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                swap(a[2][i], a[0][i]);
            }
        }
    }
int main(){
    int a[100][100];// khai bao ma tran
    int m,n;// khai bao so hang va so cot
    do{
        cout<<"Nhap so hang cua ma tran:";
        cin>>m;
        if(m<1 || m>100)
        {
            cout<<"Nhap lai:";
        }
    }while(m<1 || m>100);//dieu kien neu m<1 hoac m>100 yeu cau nhap lai
    do{
        cout<<"Nhap so cot cua ma tran:";
        cin>>n;
        if(n<1 || n>100)
        {
            cout<<"Nhap lai:";
        }
    }while(n<1 || n>100);//dieu kien neu n<1 hoac n>100 yeu cau nhap lai
    cout<<"Nhap ma tran:"<<endl;
    Nhap(a,m,n);
    cout<<"Ma tran sau khi nhap la:"<<endl;;
    Xuat(a,m,n);
    cout<<"Ma Tran theo yeu cau de bai: "<<endl;
    doi(a, m, n);
    Xuat(a, m, n);

 }
*/
/*
//BAI 1
#include<iostream>
#include<iomanip>
using namespace std;
struct qlct{
    char mact[10];
    char tenct[20];
    int tuoi;
    int sohc;
    int thuong;
};
void nhap(qlct ct[],int n){
    for(int i=0;i<n;i++){
        fflush(stdin);
        cout<<"Ma cau thu: ";
        cin.getline(ct[i].mact,10);
        cout<<"Ten cau thu: ";
        cin.getline(ct[i].tenct, 20);
        fflush(stdin);
        cout<<"Tuoi: ";
        cin>>ct[i].tuoi;
        cout<<"So huy chuong: ";
        cin>>ct[i].sohc;
    }
}
void tieude(){
    cout<<"______________________________Quan Ly Cau Thu Doi Bong_____________________________"<<endl;
    cout<<setw(11)<<"MA C.THU "
        <<setw(21)<<"TEN C.THU"
        <<setw(11)<<"TUOI"
        <<setw(15)<<"SO HUY CHUONG"
        <<setw(15)<<"THUONG"<<endl;
}
void xuat(qlct ct[],int n){
    for(int i=0;i<n;i++){
        cout<<setw(11)<<ct[i].mact
        <<setw(21)<<ct[i].tenct
        <<setw(11)<<ct[i].tuoi
        <<setw(15)<<ct[i].sohc
        <<setw(15)<<ct[i].thuong<<endl;
    }
}
void tinhthuong(qlct ct[],int n){
    for(int i=0;i<n;i++){
        if(ct[i].sohc > 5){
            ct[i].thuong=500000;
        }
        else if(ct[i].sohc>3){
            ct[i].thuong=300000;
        }
        else if(ct[i].sohc>2){
            ct[i].thuong=200000;
        }
    }
    xuat(ct, n);
}
void sapxep(qlct ct[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ct[i].tuoi<ct[j].tuoi){
                swap(ct[i], ct[j]);
            }
        }
    }
    xuat(ct, n);
}
int main(){
    int n;
    do
    {
        cout << "Nhap so luong cau thu: ";
        cin >> n;
         if(n<=0)
        {
            cout << "\nNhap thong tin sai , Nhap lai !" << endl;
        }
    }while (n <=0);
    cout << "nhap thong tin cau thu "<<endl;
    qlct ct[n];
    nhap(ct,n);
    tieude();
    tinhthuong(ct,n);
    xuat(ct,n);
    cout<<"Sap xep cau thu theo tuoi "<<endl;
    tieude();
    sapxep(ct,n);
}
*/
// Bài 2
/*
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int n;
    cout<<"nhap n: ";
    cin>>n;
    int a[n];
    fstream infile;
    infile.open("vao.txt");
    cout << "Nhap du lieu toi file vao.txt!" << endl;
    for(int i = 0 ; i < n; i++)
    {
        cin>>a[i];
        fflush(stdin);
        infile << a[i] << endl;
    }
    infile.close();
    fstream outfile;
    outfile.open("vao.txt");
    cout << "___________________________________"<<endl;
    cout << "Doc du lieu co trong file vao.txt!" << endl;
    for(int i = 0; i < n ; i++)
    {
        cout<<a[i]<<endl;
    }
    outfile.close();
    fstream luufile;
    luufile.open("luu.txt");
    cout << "Ghi du lieu toi file luu.txt!" << endl;
    cout << " Cac so hoan hao trong mang: "<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        int sum = 0;
        for(int j = 1; j < a[i]; j++)
        {
            if(a[i] % j == 0)
            {
                sum = sum + j;
            }
        }
        if(sum == a[i])
        {
            cout<<a[i]<<endl;
        }
    }
    cout<<"_________________________________________"<<endl;
    cout<<"Mang sau khi duoc sap xep: "<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
        for(int i = 0 ; i < n ; i++)
    {
        cout<<"a["<<i<<"] : "<<a[i]<<endl;
    }
    luufile.close();
}
*/
/*
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
void Nhap(int a[], int &n)
{
    for(int i = 0; i<n ; i++)
    {
        cout<<"\nNhap vao mang a["<<i<<"]=";
        cin>>a[i];
    }
}

void Xuat(int a[], int n)
{
    for(int i = 0; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }
}

void GhiFile(int a[],int &n, char fileName[])
{
    fstream fp;
    fp.open(fileName, ios::out);
    if (fp.is_open())
    {
        cout<<"---------------------------" <<endl;
        cout<< "-Ghi vao file " << fileName << " thanh cong!" <<endl;
        cout<<"---------------------------" <<endl;
    }
    else
    {
        cout<<"---------------------------" <<endl;
        cout<< "-Ghi vao file that bai!" <<endl;
        cout<<"---------------------------" <<endl;
    }
    for (int i = 0; i < n; i++)
    {
        fp<<a[i]<<" ";
    }
    fp.close();
}

void DocFile(int a[],int &n, char fileName[])
{
    char data[1000];
    fstream fp;
    fp.open(fileName, ios::in);
    cout<<"---------------------------" <<endl;
    cout<< "-Doc file " << fileName << ":"<<endl;
    cout<<"---------------------------" <<endl;
    fp.read((char *)(a), sizeof(a));
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    fp.close();
}

bool kt_hoanhao(int n)
{
    int S=0;
    for(int i=1 ; i<n ; i++)
    {
        if(n%i==0)
        S = S+i;
    }
    if(S !=0 && S==n)
    return true;
    else
    return false;
}

void in_sohoanhao(int a[],int &n)
{
    cout<<"\nCac so hoan hao :";
    int dem=0;
    for(int i=0 ; i<n ; i++)
    {
        if(kt_hoanhao(a[i]))
        {
            cout<<a[i]<<" ";
            dem++;
        }
    }
    cout<<"\nCo "<<dem<<" so hoan hao"<<endl;
}


void sapxep(int a[], int n){
    cout<<"\nMang sau khi sap xep theo thu tu giam dan :"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        for(int j =i+1 ; j<n ; j++)
        {
            if(a[i] < a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    Xuat(a,n);
}

void GhiFile2(int a[],int &n, char fileName1[])
{
    fstream fp;
    fp.open(fileName1, ios::out);
    if (fp.is_open())
    {
        cout<<"---------------------------" <<endl;
        cout<< "-Ghi vao file " << fileName1 << " thanh cong!" <<endl;
        cout<<"---------------------------" <<endl;
    }
    else
    {
        cout<<"---------------------------" <<endl;
        cout<< "-Ghi vao file that bai!" <<endl;
        cout<<"---------------------------" <<endl;
    }
    cout<<endl;
    fp.close();
}
int main()
{
    int n;
    do
    {
        cout<<"\nNhap vao so phan tu :";
        cin>>n;
        if(n<=0)
        {
            cout<<"\nNhap sai , Nhap lai!"<<endl;
        }
    }while(n<=0);
    int a[100];
    Nhap(a,n);
    Xuat(a, n);
    char fileName[] ="vao.txt";
    in_sohoanhao(a,n);
    sapxep(a,n);
    char fileName1[] ="luu.txt";
    GhiFile2(a,n,fileName1);
    return 0;
}
*/
/*
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
*/
/*
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
 */
/*
 #include<iostream>
 #include<string.h>
 using namespace std;
 class Nguoi{
 private:
 string hoten;
 int tuoi;
 float DTB;
 public:
 Nguoi( string hoten = "",int tuoi = 0, float DTB = 0) {
 this->hoten = hoten;
 this->tuoi = tuoi;
 this->DTB = DTB;
 }
 ~Nguoi(){}
 string get_Ten() {
 return this->hoten;
 }
 float get_dtb() {
 return this->DTB;
 }
 void Nhap() {
 cout << " Nhap Ho Ten : ";
 getline(cin, hoten);
 fflush(stdin);
 cout << " Tuoi : ";
 cin>>tuoi;
 fflush(stdin);
 cout << " Diem Trung binh : ";
 cin>>DTB;
 cout << endl;
 }
 void xuat() {
 cout << " Ho va Ten : " << hoten << endl;
 cout << " Tuoi : " << tuoi << endl;
 cout << " Diem TB : " << DTB <<endl;
 }
 };
 void Nhap_ds(Nguoi a[], int& n) {
 for (int i = 0; i < n; i++) {
 cout << " Nhap Thong Tin Nguoi Thu : " << i + 1 << "\n\n";
 a[i].Nhap();
 }
 }
 void Xuat_ds(Nguoi a[], int n) {
 for (int i = 0; i < n; i++) {
 cout << " Thong Tin Nguoi Thu : " << i + 1 << "\n\n";
 a[i].xuat();
 cout << "\n ------------------- \n";
 }
 }
 void Xet_Dh(Nguoi a[], int n){
 for(int i=0;i<n;i++){
 if(a[i].get_dtb() >= 8){
 cout<<"Gioi";
 }
 else if (a[i].get_dtb()>=7){
 cout<<"Kha";
 }
 else if (a[i].get_dtb()>=5){
 cout<<"Trung binh";
 }
 else{
 cout<<"Kem";
 }
 }
 }
 
 /*void Sap_xep_theo_ten(Nguoi a[] , int n){
 cout<<"\n-Danh sach sau khi sap xep theo nganh :"<<endl;
 for(int i=0;i<n-1;i++){
 for(int j=i+1;j<n;j++){
 if(strcmp(a[i].get_Ten(), a[j].get_Ten()) > 0){
 Nguoi k=a[i];
 a[i]=a[j];
 a[j]=k;
 }
 }
 }
 int main(){
*/
/*
#include<iostream>
#include<string.h>
using namespace std;
class Nguoi{
private:
    char ten[30];
    int tuoi;
public:
    friend istream& operator >> (istream& is, Nguoi &a){
        cout<<"Nhap ten: ";
        fflush(stdin);
        is.getline(a.ten,30);
        cout<<"Nhap tuoi: ";
        is>>a.tuoi;
        return is;
    }
    friend ostream& operator << (ostream& os, Nguoi &a){
        os<<"ten la:"<<a.ten<<endl
        <<"Tuoi: "<<a.tuoi<<endl;
        return os;
    }
    bool operator >(Nguoi a){
        if(this->tuoi > a.tuoi)
            return true;
        return false;
        //return  this->tuoi > a.tuoi;
    }
    bool operator ==(Nguoi a){
        return strcmp(this->ten, a.ten);
    }
};
int main(){
    Nguoi a;
    cin>>a;
    cout<<a;
    return 0;
}
*/
/*
 #include<iostream>
 #include<string.h>
 using namespace std;
 class Nguoi{
 protected:
 char ten[30];
 int tuoi;
 int cc;
 public:
 Nguoi(){
 strcmp(ten,"");
 tuoi=cc=0;
 }
 Nguoi(char *ten ,int tuoi, int cc){
 strcmp(this->ten, ten);
 this->tuoi,tuoi;
 this->cc,cc;
 }
 ~Nguoi(){}
 void Nhap(){
 cout<<"Nhap ten: ";
 cin.getline(ten, 30);
 fflush(stdin);
 cout<<"Nhap tuoi: ";
 cin>>tuoi;
 cout<<"Nhap chieu cao: ";
 cin>>cc;
 }
 void xuat(){
 cout<<"Ten: "<<ten<<endl
 <<"Tuoi: "<<tuoi<<endl
 <<"chieu cao: "<<cc<<endl;
 }
 };
 class SinhVien : public Nguoi{
 private:
 float diem;
 char hanhkiem[25];
 public:
 SinhVien():Nguoi(){
 diem=0.0;
 strcpy(hanhkiem, "");
 }
 SinhVien(char *ten,int tuoi,int cc,int diem,char *hanhkiem){
 this->diem=0;
 strcpy(this->hanhkiem, hanhkiem);
 }
 void nhap(){
 this->Nguoi :: Nhap();
 cout<<"Nhap diem: ";
 cin>>diem;
 fflush(stdin);
 cout<<"Nhap hanh kiem: ";
 cin.getline(hanhkiem, 25);
 }
 void xuat(){
 Nguoi :: xuat();
 cout<<"Diem: "<<diem<<endl
 <<"Hanh Kiem: "<<hanhkiem<<endl;
 }
 };
 int main(){
 SinhVien a;
 a.nhap();
 a.xuat();
 return 0;
 }
 */
#include<iostream>
#include<string.h>
using namespace std;
class DIEUHOA{
    protected:
    char ma_dh[10],ten_hangsx[25],ten_nuoc_nk[25];
    int dongia;
    int cong_suat;
    public:
        virtual void nhap(){//ham ao
            cout<<"Nhap ma sach: ";
            fflush(stdin);
            cin.getline(ma_dh,10);
            cout<<"Nhap ten sach: ";
            cin.getline(ten_hangsx,25);
            cout<<"Nhap ten tac gia: ";
            cin.getline(ten_nuoc_nk,25);
            fflush(stdin);
            cout<<"Nhap don gia: ";
            cin>>dongia;
            cout<<"Nhap ngay thue: ";
            cin>>ngay_thue;
            cout<<"Nhap ngay tra: ";
            cin>>ngay_tra;
        }
 
        virtual void xuat(){//ham thuan ao
            cout<<"Ma sach: "<<ma_sach<<endl
                <<"Ten sach: "<<ten_sach<<endl
                <<"Tac gia: "<<ten_tacgia<<endl
                <<"Ten ng thue: "<<tenng_thue<<endl
                <<"Tuoi: "<<tuoi<<endl
                <<"Ngay thue: "<<ngay_thue<<endl
                <<"Ngay tra: "<<ngay_tra<<endl
                <<"Thanh tien: "<<thanh_tien<<endl;
        }
        virtual bool kieu_doc_gia() = 0;//ham thuan ao
            
        char get_ten_tacgia(){
            return *this->ten_tacgia;
        }
        int tong_tien(){
            return this->thanh_tien;
    }
};

class doc_gia_tr_em : public thuviensach{
    char ten_ng_giamho[25];
public:
    void nhap(){
        thuviensach::nhap();
        fflush(stdin);
        cin.getline(ten_ng_giamho,25);
        
    }
    void xuat(){
        thuviensach::xuat();
        cout<<"ten ng giam ho: "<<endl;
    }
    bool kieu_doc_gia(){
                return true;
            }

};
class doc_gia_ng_lon : public thuviensach{
    int ngay_chuyen;
    char noi_chuyen[25];
    
public:
    void nhap(){
        thuviensach::nhap();
        
    }
    void xuat(){
        thuviensach::xuat();
    }
    bool kieu_doc_gia(){
        return false;
    }

};

class thu_vien_sach{
private:
    thuviensach *tvs[100];
    int n;
public:
    void nhap_danh_sach(){
        cout<<"Nhap so luong sach can quan ly: ";
        cin>>n;
        cout<<"Nhap danh sach "<<n<<" sach\n";
        for(int i=0;i<n;i++){
            cout<<"\t[+]Bang lua chon:\n"
            <<"\t\t(1). Doc gia tre em\n"
            <<"\t\t(2). Doc gia nguoi lon\n"
            <<"\t\t  >>Nhap lua chon cua ban: ";
            int lc;cin>>lc;
            while(lc<1 || lc >2){
                cout<<"\t\t\t> Lua con nay khong ton tai, hay chon lai: ";
                cin>>lc;
            }
            if(lc==1){
                tvs[i] = new doc_gia_tr_em();
            }
            else
            {
                tvs[i] = new doc_gia_ng_lon();
            }
            
            tvs[i]->nhap();
        }
    }
    
    void xuat_danh_sach(){
        cout<<"Xuat danh sach "<<n<<" so sach\n";
        for(int i=0;i<n;i++){
            cout<<"\t[+]Xuat thong tin so sach duc thue: "
            <<(tvs[i]->kieu_doc_gia() ? "tre em" : "nguoi lon")
            <<" thu "<<i+1<<endl;
            tvs[i]->xuat();
        }
    }
};
void sapxep(thuviensach()){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i].)
        }
    }
}
int main()
{
    thu_vien_sach *tvs = new thu_vien_sach();
    tvs->nhap_danh_sach();
    tvs->xuat_danh_sach();
    return 0;
}

