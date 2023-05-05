#include <stdio.h>
#include <string.h>

void remove(char s[]) {
    int len = strlen(s);
    int i, j;
    for (i = 0, j = 0; i < len; i++) {
        if (j > 0 && s[j-1] == s[i]) {
            j--;
        } else {
            s[j] = s[i];
            j++;
        }
    }
    s[j] = '\0';
}

int main() {
    char s[100];
    printf("Bir dizi girin: ");
    scanf("%s", s);
    remove(s);
    printf("Son Hali: %s\n", s);
    return 0;
}
