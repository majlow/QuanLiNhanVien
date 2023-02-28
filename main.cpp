#include"Quanlinhanvien.cpp"

int main(){    
    Quanlynhanvien *ds_nhanvien = new Quanlynhanvien[100]; 
    cout<<"========DANH SACH QUAN LI NHAN VIEN========"<<endl;
    int soluongNhanvien = 0;
    while (true)
    {
        hangngang(50);
        cout<<"\n";
        cout<<"\tChon mot trong cac lua chon sau: "<<endl;
        cout<<"Nhap 1: Nhap thong tin nhan vien."<<endl;
        cout<<"Nhap 2: Xuat thong tin nhan vien."<<endl;
        cout<<"Nhap 3: Xoa nhan vien ra khoi danh sach."<<endl;
        cout<<"Nhap 4: Tim kiem nhan vien theo ma so."<<endl;
        cout<<"Nhap 5: Cap nhat thong tin nhan vien."<<endl;
        cout<<"Nhap 6: Tinh tien luong nhan vien."<<endl;
        cout<<"Nhap 7: Xep loai nhan vien."<<endl;
        cout<<"Nhap 0: Thoat chuong trinh."<<endl;
        hangngang(50);
        cout<<"\n";
        int luachon;
        cout<<"Nhap lua chon cua ban: ";
        cin>>luachon;
        cout<<"\n";
        if(luachon<0||luachon>7){
            cout<<"Lua chon khong phu hop."<<endl<<"Vui long nhap lai."<<endl;
        }
        switch (luachon)
        {
        case 1:
            cout<<"\tThong tin nhan vien thu "<<soluongNhanvien+1<<endl<<endl;
            ds_nhanvien[soluongNhanvien].Nhapthongtin();
            soluongNhanvien++;
            break;
        case 2:
        cout<<"\n";
        cout<<"\tDanh sach nhan vien cong ty."<<endl<<endl;
        for(int i =0; i<soluongNhanvien; i++){
            hangngang(50);
            cout<<"\n";
            cout<<"\tThong tin nhan vien thu "<<i+1<<endl;
            ds_nhanvien[i].Xuatthongtin();
        }
            break;
        case 3:
            Xoanhanvien(ds_nhanvien, soluongNhanvien);
            break;
        case 4:
            Timkiem(ds_nhanvien, soluongNhanvien);
            break;
        case 5:
            Capnhat(ds_nhanvien, soluongNhanvien);
            break;
        case 6:
            for(int i=0; i<soluongNhanvien;i++)
            cout<<"Tien luong nhan vien thu "<<i+1<<" la: "<<ds_nhanvien[i].Tinhtienluong()<<" vnd."<<endl;
            break;
        case 7:
            Xeploai(ds_nhanvien, soluongNhanvien);
            break;
        case 0:
            break;
        default:
            break;
        }
    }  
    return 0;
}