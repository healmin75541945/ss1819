#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>
typedef struct SinhVien {
    char hoten[50];
    int age;
    char phoneNumber[20];
} SinhVien;

int main() {
    SinhVien m ;
    printf("Nhap ho ten: ");
    
    fgets(m.hoten, sizeof(m.hoten), stdin); 
    printf("Nhap tuoi: ");
    scanf("%d", &m.age);  
    getchar();  
    printf("Nhap so dien thoai: ");
    fgets(m.phoneNumber, sizeof(m.phoneNumber), stdin);  
    printf("\nThong tin sinh vien:\n");
    printf("Ho ten: %s", m.hoten);
    printf("Tuoi: %d\n", m.age);
    printf("So dien thoai: %s", m.phoneNumber);

    return 0;
}

