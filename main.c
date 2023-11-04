#include <stdio.h>
void pr1(){
    printf("Welcome to the jungle!\n");
    printf("|(>o<)/ ¯\\_(\'o\')_/¯ \\(>o<)|\n");
    printf("\"Why so serious\" - The Joker\n");
    printf("\"Listen to me. When the time comes, you gotta run and don\'t look back. This is over\" - Arthur Morgan");
}
void pr2(){
    int a11,a12,a13,a21,a22,a23,a31,a32,a33,b11,b12,b21,b22,b31,b32,c11,c12,c21,c22,c31,c32;
    scanf("%d %d %d", &a11, &a12, &a13);
    scanf("%d %d %d", &a21, &a22, &a23);
    scanf("%d %d %d", &a31, &a32, &a33);
    scanf("%d %d", &b11, &b12);
    scanf("%d %d", &b21, &b22);
    scanf("%d %d", &b31, &b32);
    c11 = a11*b11+a12*b21+a13*b31;
    c12 = a11*b12+a12*b22+a13*b32;
    c21 = a21*b11+a22*b21+a23*b31;
    c22 = a21*b12+a22*b22+a23*b32;
    c31 = a31*b11+a32*b21+a33*b31;
    c32 = a31*b12+a32*b22+a33*b32;
    printf("%d %d\n%d %d\n%d %d", c11,c12,c21,c22,c31,c32);
}
void pr3(){
    unsigned short p;int m,r;
    scanf("%hu %d %d", &p, &m, &r);
    p += m * (-r);
    printf("Xo[%hu]", p);
}
void pr4(){
    int m,n,o,x,y,z,a,b;
    scanf("Rp%d Rp%d %d%%", &m, &n, &o);
    x = (1 - o / 100.0) * m;y = n - x;
    printf("Total Bayar: Rp%d\n", x);
    printf("Total Kembalian: Rp%d\n", y);
    z = y / 2000;y %= 2000;
    a = y / 1000;y %= 1000;
    b = y / 500;
    printf("Kembalian Rp2000: %d\n", z);
    printf("Kembalian Rp1000: %d\n", a);
    printf("Kembalian Rp500: %d\n", b);
}
int main() {
    int sel;
    scanf("%d", &sel);fflush(stdin);
    switch (sel) {
        case 1: pr1();break;
        case 2: pr2();break;
        case 3: pr3();break;
        case 4: pr4();break;
    }
    return 0;
}