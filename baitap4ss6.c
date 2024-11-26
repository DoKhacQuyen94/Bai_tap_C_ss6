#include <stdio.h>
#include <math.h> 

int main() {
    double a, b, c; 
    float delta, x1, x2;
    printf("Giải phương trình bậc 2: ax^2 + bx + c = 0\n");
    printf("Nhập hệ số a: ");
    scanf("%.2f", &a);
    printf("Nhập hệ số b: ");
    scanf("%.2f", &b);
    printf("Nhập hệ số c: ");
    scanf("%.2f", &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phương trình có vô số nghiệm.\n");
            } else {
                printf("Phương trình vô nghiệm.\n");
            }
        } else {
            x1 = -c / b;
            printf("Phương trình là bậc nhất và nghiệm là: x = %.2lf\n", x1);
        }
    } else {
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("Phương trình vô nghiệm.\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phương trình có nghiệm kép: x = %.2lf\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phương trình có hai nghiệm phân biệt:\n");
            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf\n", x2);
        }
    }

    return 0;
}
