#include<iostream>

using namespace std;

class Quanlynhanvien{
private:
    string Hoten;
    string Gioitinh;
    int Namsinh;
    int Namvaolam;
    int Maso;
    int Ngaylam;
    int Cophep;
    int Khongphep;
    float Luong;

public:
    Quanlynhanvien(){

    }
    Quanlynhanvien(string Hoten, string Gioitinh, int Namsinh,int Maso, int Ngaylam, int Cophep, int Khongphep, float Luong){
        this -> Hoten = Hoten;
        this -> Gioitinh = Gioitinh;
        this -> Namsinh = Namsinh;
        this -> Maso = Maso;
        this -> Ngaylam = Ngaylam;
        this -> Cophep = Cophep;
        this -> Khongphep = Khongphep;
        this -> Luong = Luong;
    }

    void Nhapthongtin(){
        cout<<"Nhap ho ten nhan vien: ";
        fflush(stdin);
        getline(cin, Hoten);
        cout<<"Nhap ma so nhan vien: ";
        cin>>Maso;
        cout<<"Nhap gioi tinh nhan vien: ";
        fflush(stdin);
        getline(cin, Gioitinh);
        cout<<"Nhap nam sinh nhan vien: ";
        cin>>Namsinh;
        cout<<"Nhap nam vao lam cua nhan vien: ";
        cin>>Namvaolam;
        cout<<"Nhap so ngay lam cua nhan vien: ";
        cin>>Ngaylam;
        cout<<"Nhap so ngay nghi co phep cua nhan vien: ";
        cin>>Cophep;
        cout<<"Nhap so ngay nghi khong phep cua nhan vien: ";
        cin>>Khongphep;

    }

    void Xuatthongtin(){
        cout<<"Ho va ten nhan vien: "<<Hoten<<endl;
        cout<<"Ma so nhan vien: "<<Maso<<endl;
        cout<<"Gioi tinh: "<<Gioitinh<<endl;
        cout<<"Nam sinh: "<< Namsinh<<endl;
        cout<<"Tuoi nhan vien: "<<2022-Namsinh<<endl;
        cout<<"Nhan vien da lam duoc "<<2022-Namvaolam<<" nam"<<endl;
        cout<<"Nhan vien lam duoc "<<Ngaylam<<" ngay"<<endl;
        cout<<"So ngay nghi co phep cua nhan vien: "<<Cophep<<endl;
        cout<<"So ngay nghi khong phep cua nhan vien: "<<Khongphep<<endl;
    }


    void setMaso(int Maso){
        this->Maso = Maso;
    }

    int getMaso(){
        return Maso;
    }

    void setNgaylam(int Ngaylam){
        this -> Ngaylam = Ngaylam;
    }
    
    int getNgaylam(){
        return Ngaylam;
    }

    void setCophep(int Cophep){
        this -> Cophep = Cophep;
    }
    
    int getCophep(){
        return Cophep;
    }

    void setKhongphep(int Khongphep){
        this -> Khongphep = Khongphep;
    }
    
    int getKhongphep(){
        return Khongphep;
    }
    long Tinhtienluong(){
    	if (Cophep > 3)
    		return 5000000*Ngaylam - 50000*Khongphep - 20000*(Cophep - 3);
    	else
    		return 5000000*Ngaylam - 50000*Khongphep;
    }
};
    void hangngang(int n){
            for (int i = 0; i < n; i++)
        {
            cout << "_";
        }
        }
    
    void Xoanhanvien(Quanlynhanvien ds_nhanvien[], int &soluongNV){
    int Maxoa;
    bool t = false;

    cout<<"Nhap ma so nhan vien can xoa: ";
    cin>>Maxoa;
    for (int i = 0; i < soluongNV; i++)
    {
        if (Maxoa == ds_nhanvien[i].getMaso())
        {   t = true;
            for (int j = i; j < soluongNV; j++)
            {
                ds_nhanvien[j] = ds_nhanvien[j + 1];
            }
        }
    }
    if(t){
        soluongNV--;
    }
    else{
        cout<<"Ma so nhan vien khong co trong danh sach."<<endl;
    }
}
    void Timkiem(Quanlynhanvien ds_nhanvien[], int &soluongNV){
        int Matim;
        bool x = false;
        cout<<"Nhap ma so nhan vien can tim: ";
        cin>>Matim;
        for(int i = 0; i<soluongNV; i++){
            if(Matim == ds_nhanvien[i].getMaso()){
                x = true;
                ds_nhanvien[i].Xuatthongtin();
            }
        }

        if(x){
    }
    else{
        cout<<"Ma so nhan vien khong co trong danh sach."<<endl;
    }
    }

    void Capnhat(Quanlynhanvien ds_nhanvien[], int &soluongNV){
       int Manhap;
        bool x = false;
        cout<<"Nhap ma so nhan vien can tim: ";
        cin>>Manhap;
        for(int i = 0; i<soluongNV; i++){
            if(Manhap == ds_nhanvien[i].getMaso()){
                x = true;
                ds_nhanvien[i].Nhapthongtin();
            }
        }

        if(x){
    }
    else{
        cout<<"Ma so nhan vien khong co trong danh sach."<<endl;
    } 
    }

    void Xeploai(Quanlynhanvien ds_nhanvien[], int &soluongNV){
        for(int i = 0; i<soluongNV; i++){
            if(ds_nhanvien[i].getNgaylam()>25 && ds_nhanvien[i].getKhongphep()<3){
                cout<<"Nhan vien thu "<<i+1<<" dat loai gioi."<<endl;
            }
            else if(ds_nhanvien[i].getNgaylam()<25 && ds_nhanvien[i].getKhongphep()<5){
                cout<<"Nhan vien thu "<<i+1<<" dat loai kha. "<<endl;
            }
                        else cout<<"Nhan vien thu "<<i+1<<" xep loai trung binh."<<endl;
        }
    }
