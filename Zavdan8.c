#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[20];
    printf("Введіть слово: ");
    scanf("%s", word);

    int len = strlen(word);
    int count[26] = {0};

    for (int i = 0; i < len; i++) {
        count[tolower(word[i]) - 'a']++;
    }

    double result = 1;
    for (int i = 1; i <= len; i++) {
        result *= i;
    }

    for (int i = 0; i < 26; i++) {
        for (int j = 1; j <= count[i]; j++) {
            result /= j;
        }
    }

    printf("Кількість анаграм: %.0f\n", result);

    return 0;
}