#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
class cDaThuc
{private:
    vector<double> hs;
    int n;
public:    
    //Hàm khởi tạo có tham số
    cDaThuc(int k=0)
    {
        n=k;
        hs.resize(n+1, 0); 
    }
    
    double operator()(double x) const;
    cDaThuc operator+(const cDaThuc&b)const;
    cDaThuc operator-(const cDaThuc&b)const;
    cDaThuc operator*(const cDaThuc&b)const;
    friend ostream& operator <<(ostream& os,const cDaThuc a)
    {
         for(int i=a.n;i>=0;i--)
    {
        if(a.hs[i]!=0) //Chỉ xuất các hệ số khác 0
        {
            if(i!=a.n && a.hs[i]>0) //Thêm dấu + giữa các hệ số dương (trừ hệ số đầu tiên)
                os<<"+";
            if(i==0) //Hệ số tự do
                cout<<a.hs[i];
            else if(i==1) //Hệ số của x
                os<<a.hs[i]<<"x";
            else
                os<<a.hs[i]<<"x^"<<i; //Hệ số của x^i
        }
    
    }
    return os;
    }
   
    friend istream& operator >>(istream& is, cDaThuc& a)
    {

    
    cout<<"Nhap cac he so tu bac cao den bac thap: "<<endl;
    for(int i = a.n; i >= 0; i--)
    {
        cout << "He so bac " << i << ": ";
        is >> a.hs[i];
    }

    return is;
}
};