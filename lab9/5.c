//rep letter max n min frequenct in a string
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)//for counting frequency
    {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            freq[str[i] - 'A']++;
        }
        
    }
    int maxFreq = 0, minFreq = 1000;
    char maxChar, minChar;
    for (int i = 0; i < 26; i++)//for finding max n min freq
     {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = 'a' + i;
        }
        if (freq[i] < minFreq && freq[i] > 0) {
            minFreq = freq[i];
            minChar = 'a' + i;
        }
    }
    printf("Most frequent character: %c (Frequency: %d)\n", maxChar, maxFreq);
    printf("Least frequent character: %c (Frequency: %d)\n", minChar, minFreq);
    
    return 0;
}