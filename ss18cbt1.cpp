#include <stdio.h>
#include <string.h>
typedef struct SinhVien {
    char hoten[50];
    int age;
    char phoneNumber[20];
} SinhVien;
int main() {
    SinhVien s;
    strcpy(s.hoten, "Tran Hieu");          
    s.age = 18;                           
    strcpy(s.phoneNumber, "123456789");   
    printf("Ho ten: %s\n", s.hoten);
    printf("Tuoi: %d\n", s.age);
    printf("So dien thoai: %s\n", s.phoneNumber);

    return 0;
}

  	
  	
  	
  
