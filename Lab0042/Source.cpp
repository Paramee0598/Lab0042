#include<stdio.h>
int main() {
    
    long int n, i ,count = 0  ;
   
    printf("In put number : ");
        scanf_s("%d",&n);
        if (n < 0) {
            printf("Error");
            return 0;
        }
        else {
            for (i = 1; i <= n; i++) {
                if (i % 3 == 0 && i % 7 == 0) {
                    printf("%d\n", i);
                    count++;
                }
            }
        }
    printf("num mod 3 and 7 = 0 \nis  %d\n", count);
    printf("End\n");
    return 0;
}