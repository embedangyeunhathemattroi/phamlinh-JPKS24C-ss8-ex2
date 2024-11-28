#include <stdio.h>
int main() {
    int listagefamily[2][3] = { {2, 70, 35}, {75, 43, 18} };
    listagefamily[1][0] = 99;

    printf("Tuoi cua em be la: %d\n", listagefamily[0][0]);
    printf("Tuoi cua ba ngoai la: %d\n", listagefamily[0][1]);
    printf("Tuoi cua di ruot la: %d\n", listagefamily[0][2]);
    printf("Tuoi cua ong ngoai la: %d\n", listagefamily[1][0]);
    printf("Tuoi cua me la: %d\n", listagefamily[1][1]);
    printf("Tuoi cua toi la: %d\n", listagefamily[1][2]);

    int mama;
    printf("Ban hay nhap vao mot phan tu bat ky: ");
    scanf("%d", &mama);

    int found = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (listagefamily[i][j] == mama) {
                found = 1;
                printf("Vi tri phan tu trong mang la: [%d][%d]\n", i, j);
                break;
            }
        }
        if (found) break; 
    }

    if (!found) {
        printf("Phan tu nay khong ton tai trong mang dau ban oi...\n");
    }

    return 0;
}	
