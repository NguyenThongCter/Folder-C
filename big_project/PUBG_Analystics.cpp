#include "stdio.h"
#include "limits.h"
#include <stdbool.h>
#define MAX 200 // khai báo số max

// Nhập Mảng MatchKill
void NhapMatchKill(int a[], int &n){
            do{
                  printf("\nNhap so luong tran dau (1-%d): ", MAX);
                  scanf("%d", &n);
                  if (n < 1 || n > MAX) {
                        printf("\nSo luong khong hop le! Vui long nhap lai.\n");
                  }
            }while(n < 1 || n > MAX);

            for(int i = 0; i < n; i++){
                  printf("Nhap so kill tran dau [%d]:  ",i + 1);
                  scanf("%d", &a[i]);
            }
}

// Xuất mảng MatchKill
void XuatMatchSkill(int a[], int n) {
          printf("\n--- Lich su thi dau ---\n");
          for (int i = 0; i < n; i++) {
          printf("Tran %d: %d kills\n", i + 1, a[i]);
    }
           printf("-----------------------\n");
}


/*---Module 1---*/
// Tính tổng số kill
int TongSoKill(int a[], int n){
      int tong = 0;
      for(int i = 0; i < n; i++){
            tong += a[i];
      }
      return tong;
}

// Tìm kỷ lục (dùng tới Max)
int findKillMax(int a[], int n){
      int max = a[0];
      for(int i = 1; i < n; i++){
            if(a[i] > max){
                  max = a[i];
            }
      }
      return max;
}

//Tính trung bình 
float tinhTrungBinh(int a[], int n){
      int tong = 0;
      for(int i = 0; i < n; i++){
            tong += a[i];
      }
      if(n == 0) return 0;
      return (float)tong/n;
}

// Đếm số trận 0 kill
int DemSoTran0kill(int a[], int n){
          int count = 0;
          for(int i = 0; i < n; i++){
                  if(a[i] == 0){
                        count++;
                  }
            }

            // Kết quả sau phân tích 
            printf("\nKet qua phan tich: ");
            if(count == 0){
                  printf("Qua dinh! Khong co tran nao 0 kill.");
            }else if(count == n){
                  printf("Dien nguoi! Toan tran ga.");
            }else if(count > (n/2)){
                  printf("Phong do dang xuong!!!");
            }else{
                  printf("Co %d tran 0 Kill", count);
            }
            return count;
}


/*---Module 2---*/
// Xóa dữ liệu bị lỗi 
void XoaTranLoi(int a[], int &n){
      int count = 0;
      for(int i = 0; i < n; i++){
            // check phần tử là số âm và không vượt quá 100
            if(a[i] < 0 || a[i] > 100){
                  // Vòng lặp dời chỗ (Duyệt từ vị trí lỗi đến cuối)
                  for(int j = i; j < n - 1; j++){
                        a[j] = a[j + 1];
                  }
                  n--;
                  i--;
                  count++;
            }
      }
      // Check count số dương hay số âm
      if(count > 0){
            printf("\n>> Thanh cong: Da xoa %d tran dau loi", count);
      }else{
            printf("\n>>Thong bao: Du lieu da sach, khong co tran nao loi.");
      }
}

// Lọc dữ liệu trùng
// a) Xóa tại vị trí 
void XoaTaiViTri(int a[], int &n, int ViTri){
      for(int i = ViTri; i < n - 1; i++){
            a[i] = a[i + 1];
      }
      n--;
}
// b) filter cái trùng
void LocDulieuTrung(int a[], int &n){
      for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                  if(a[i] == a[j]){
                        XoaTaiViTri(a, n, j);
                        j--;
                  }
            }
      }
}


// Chuẩn hóa dữ liệu
void ChuanHoaDuLieu(int a[], int &n){
      int count = 0;
      for(int i = 0; i < n; i++){
            // Dữ liệu trùng cho nó = 0
            if(a[i] < 0 || a[i] > 100){
                  a[i] = 0;
                  count++;
            }
      }
      // nếu tìm thấy thì "cấp cứu"
      if (count > 0) {
            printf("\n>> Da 'cap cuu' %d tran loi ve 0 kill thanh cong!", count);
      }else {
            printf("\n>> Du lieu da chuan, khong can xu ly.");
      }
}

/*---Module 3---*/
// Sắp xếp tăng dần
void SapXeptangDan(int a[], int n){
      for(int i = 0; i < n - 1; i++){
            // Giả định thằng nhỏ
            int VitriNhoNhat = i;
            for(int j = i + 1; j < n ; j++){
                  if(a[j] < a[VitriNhoNhat]){
                        VitriNhoNhat = j;
                  }
            }
            int tam = a[i];
            a[i] = a[VitriNhoNhat];
            a[VitriNhoNhat] = tam;
      }
}


// Top 3 trận đỉnh cao
void Top3TranDinhCao(int a[], int n){
      if(n < 3){
            printf("\n(!)-Chua du 3 tran de lap Top 3 bro oi!");
            return;
      }

      // Logic 
      int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
      for(int i = 0; i < n; i++){
            // Nếu > Max1 --> Values_MAX1 --> Max2, Values_Max2 --> Max3, Values_Max3 
            if(a[i] > max1){
                  max3 = max2;
                  max2 = max1;
                  max1 = a[i]; // Update values Max1
            }else if(a[i] > max2){
                  max3 = max2;
                  max2 = a[i];// Update values Max2
            }else if(a[i] > max3){
                  max3 = a[i];
            }
      }
      printf("\n--- TOP 3 TRAN DINH CAO ---");
      printf("\nTop 1: %d kills", max1);
      printf("\nTop 2: %d kills", max2);
      printf("\nTop 3: %d kills", max3);
}


//Phân loại bậc rank
void PhanLoaiRank(int a[], int n){
      int CountS = 0, CountA = 0, CountB = 0;
      for(int i = 0; i < n; i++){
            printf("\nTran %d(%d Kills)", i + 1, a[i]);
            if(a[i] >= 10){
                  printf("[RANK S]");
                  CountS++;
            }else if(a[i] >= 5){
                  printf("[RANK A]");
                  CountA++;
            }else{
                  printf("[RANK B]");
                  CountB++;
            }
      }
      printf("\n-------------------------------");
      printf("=> TONG KET: S: %d, A: %d, B: %d", CountS, CountA, CountB);
}

/*---MODULE 4---*/
// Đảo ngược danh sách trận
void DaoNguocDanhSach(int a[], int n){
      for(int i = 0; i < n/2; i++){
            int tam = a[i];
            a[i] = a[n - i - 1];
            a[n - i - 1] = tam;
      }
}

// Tìm kiếm trận đấu
/*Hàm thông báo kết quả*/
void ThongBaoKetQua(bool found, int target){
      if(!found){
            printf("\n(!) Khong tim thay tran nao co dung %d kills. Co gang hon o cac tran sau nhe bro!", target);
      }else{
            printf("\n>> Da quet xong toan bo lich su dau.");
      }
}

/*Hàm tìm kiếm */
void TimKiemTranDau(int a[], int n){
      int target;
      printf("\nNhap so kill bro muon tim: ");
      scanf("%d", &target);

      // gán cờ
      bool found = false;

      printf("\n--- KET QUA TIM KIEM ---");
      for(int i = 0; i < n; i++){
            if(a[i] == target){
                  printf("\nTim thay: tran %d dat dung so %d kills", i + 1, target);
                  found = true;
            }
      }
      ThongBaoKetQua(found, target);
}


int main(){
          printf("Nay cung Toidicodelai lam 1 chuong trinh ve phan tich chi so PUBG nha!!");
          int MatchKill[MAX];
          int n;
          char luaChonCha;
          char luaChonCon;
          do{
                  // Chọn Module Cha 
                  printf("\n-----MODULE-----\n");
                  printf("\n1. MODULE--ANALYZE");
                  printf("\n2. MODULE--CLEAN DATA");
                  printf("\n3. MODULE--SORT AND RANK");
                  printf("\n4. MODULE--Strategy");
                  printf("\nx. Exit\n");
                  printf("Moi ban chon [1-4 module]: ");
                  scanf(" %c", &luaChonCha);
                  
                  // Switch case chọn từng Module dùng chức năng (của Module)
                  switch(luaChonCha){
                              // 1 MODULE--Phan tich chi so
                              case '1':
                                    do{
                                          // Chọn module con (1)
                                          printf("\n--- [MODULE ANALYZE] ---\n");
                                          printf("0. Nhap du lieu tran dau\n");
                                          printf("a. Tinh tong so Kill\n");
                                          printf("b. Tim Ky luc (Max kill)\n");
                                          printf("c. Tinh trung binh Kill\n");
                                          printf("d. Dem so tran ga!\n");
                                          printf("e. Back to Menu(Module)!\n");
                                          printf("Nhap lua chon con [0-e]:  ");
                                          scanf(" %c", &luaChonCon);
                                                switch(luaChonCon){
                                                      case '0':
                                                            NhapMatchKill(MatchKill, n);
                                                            XuatMatchSkill(MatchKill, n);
                                                            break;
                                                      case 'a':
                                                            printf(">> Dang thuc hien: Tinh tong so Kill...\n");
                                                            printf("Tong so kill: %d", TongSoKill(MatchKill, n));
                                                            break;
                                                      case 'b':
                                                            printf(">> Dang thuc hien: Tim Ky luc (Max kill)...\n");
                                                            printf("Ky luc Kill cua toi la: %d", findKillMax(MatchKill, n));
                                                            break;
                                                      case 'c':{ 
                                                            printf(">> Dang thuc hien: Tinh trung binh Kill ...\n");
                                                            float tbc = tinhTrungBinh(MatchKill, n);
                                                            printf("So trung binh Kill Moi Tran la: %.2f", tbc);                                                          break;
                                                      }
                                                      case 'd': 
                                                            printf(">> Dang thuc hien: Dem so tran ga ...\n");
                                                            DemSoTran0kill(MatchKill, n);
                                                            break;
                                                      case 'e':
                                                            printf("Dang quay lai Menu chinh...\n");
                                                            break;
                                                      default:
                                                            printf("Chon chuc nang Module khong hop le!!");
                                                            break;
                                                }
                                    }while(luaChonCon != 'e');
                                    break;

                                    // Chức năng Module con thứ 2
                              case '2':
                                    do{
                                          printf("\n--- [MODULE CLEAN DATA] ---\n");
                                          printf("\na. Xoa du lieu loi!!");
                                          printf("\nb. Loc trung lap!!");
                                          printf("\nc. Chuan hoa du lieu!");
                                          printf("\nd. Back to menu(MODULE)!!!");
                                          printf("\nNhap lua chon con [a - d]: ");
                                          scanf(" %c", &luaChonCon);
                                          
                                          switch(luaChonCon){
                                                case 'a':
                                                      printf("--> Dang thuc hien: Xoa du lieu bi loi...\n");
                                                      XoaTranLoi(MatchKill, n);
                                                      XuatMatchSkill(MatchKill, n);
                                                      break;
                                                case 'b':
                                                      printf("--> Dang thuc hien: Loc trung lap!!...\n");
                                                      LocDulieuTrung(MatchKill, n);
                                                      XuatMatchSkill(MatchKill, n);
                                                      break;
                                                case 'c':
                                                      printf("--> Dang thuc hien: Chuan hoa du lieu...\n");
                                                      ChuanHoaDuLieu(MatchKill, n);
                                                      XuatMatchSkill(MatchKill, n); 
                                                      break;
                                                case 'd':
                                                      printf("Dang quay lai Menu chinh...\n");
                                                      break;
                                                default:
                                                      printf("Chon chuc nang Module khong hop le!!");
                                                      break;
                                          }
                                    }while(luaChonCon != 'd');
                                    break;
                                    // Chức năng Module con thứ 3
                              case '3':
                                    do{
                                         printf("\n--- [MODULE SORT AND RANK] ---\n");
                                         printf("\na. Sap xep tang dan!!");
                                         printf("\nb. Top 3 tran dinh cao-(So Kill)!!");
                                         printf("\nc. Phan loai bac rank");
                                         printf("\nd. Back to menu(MODULE)!!!");
                                         printf("\nNhap lua chon con [a - d]: ");
                                         scanf(" %c", &luaChonCon);
                                         switch(luaChonCon){
                                                case 'a':
                                                      printf("--> Dang thuc hien: Sap xep tang dan!!\n");
                                                      printf("Sap xep kill tang dan la: ");
                                                      SapXeptangDan(MatchKill, n);
                                                      XuatMatchSkill(MatchKill, n);
                                                      break;
                                                case 'b':
                                                      printf("--> Dang thuc hien: Top 3 tran dinh cao!!\n");
                                                      Top3TranDinhCao(MatchKill, n);
                                                      break;
                                                case 'c':
                                                      printf("--> Dang thuc hien: Phan loai bac rank!!\n");
                                                      PhanLoaiRank(MatchKill, n);
                                                      break;
                                                case 'd':
                                                      printf("Dang quay lai Menu chinh...\n");
                                                      break;
                                                default:
                                                      printf("Chon chuc nang Module khong hop le!!");
                                                      break;
                                          }
                                    }while(luaChonCon != 'd');
                                    break;
                                    // Chức năng Module con thứ 4
                              case '4': 
                                    do{
                                          printf("\n--- [MODULE STRATEGY] ---\n");
                                          printf("\na. Dao nguoc danh sach (xem tran moi nhat)!!");
                                          printf("\nb. Tim kiem tran dau!!");
                                          printf("\nc. Back to menu(MODULE)!!!");
                                          printf("\nNhap lua chon con [a - c]: ");
                                          scanf(" %c", &luaChonCon);

                                          switch(luaChonCon){
                                                case 'a':
                                                      printf("--> Dang thuc hien: Dao nguoc danh sach tran dau gan nhat!!\n");
                                                      DaoNguocDanhSach(MatchKill, n);
                                                      XuatMatchSkill(MatchKill, n);
                                                      break;
                                                case 'b':
                                                      printf("--> Dang thuc hien: Tim kiem tran dau!!\n");
                                                      TimKiemTranDau(MatchKill, n);
                                                      break;
                                                case 'c':
                                                      printf("Dang quay lai Menu chinh...\n");
                                                      break;
                                                default: 
                                                      printf("Chon chuc nang Module khong hop le!!");
                                                      break;
                                          }
                                    }while(luaChonCon != 'c');
                                    break;
                              case 'x':
                                        printf("Dang thoat... Hen gap lai bro!\n");
                                        break;
                              default: 
                                        printf("Khong co Module nao hop le!!");
                                        break;
                  }
      }while(luaChonCha != 'x');
}