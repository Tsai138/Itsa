#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int t = 0 ; t < n ; t++) {
        char a[35], b[35];
        scanf("%s %s", a, b);
        int i = (int)strlen(a) - 1;
        int j = (int)strlen(b) - 1;
        char out[35];
        int k = 0;
        int carry = 0;
        while (i >= 0 || j >= 0 || carry) {
            int x = i >= 0 ? (a[i--] - '0') : 0;
            int y = j >= 0 ? (b[j--] - '0') : 0;
            int s = x + y + carry;
            out[k++] = (char)('0' + (s % 10));
            carry = s / 10;
        }
        for (int h = k - 1; h >= 0; --h) printf("%c", out[h]);
        putchar('\n');
    }
    return 0;
}