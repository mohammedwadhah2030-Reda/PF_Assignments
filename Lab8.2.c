#include <stdio.h>
#include <string.h>
//Mohammed Wadhah              CT-20591
int main() {
    char name[100];
    char course[200];
    char both[300];
    int freq[256] = {0};
    int i, j = 0, len, maxFreq;
    char maxChar;

    printf("Enter your name: ");
    scanf("%[^\n]", name);
    getchar();

    printf("nter your course name: ");
    scanf("%[^\n]", course);

    for(i = 0; name[i] != '\0'; i++) {
        both[j++] = name[i];
    }
    for(i = 0; course[i] != '\0'; i++) {
     both[j++] = course[i];
    }
    both[j] = '\0'; 

    len = strlen(both);
    for(i = 0; i < len; i++) {
     if(both[i] != ' ')
      freq[(unsigned char)both[i]]++;
    }

    maxFreq = 0;
    for(i = 0; i < 256; i++) {
     if(freq[i] > maxFreq) {
      maxFreq = freq[i];
            maxChar = i;
        }
    }

    printf("\nIn our NAME + COURSE, the most frequent character is '%c' repeated %d times.\n", maxChar, maxFreq);

    return 0;
}


