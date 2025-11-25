#include <stdio.h>

int main() {
    int students, subjects;
    const int terms = 3;

    printf("nter number of students (max 5): ");
    scanf("%d", &students);
    printf("Enter number of subjects (max 4): ");
    scanf("%d", &subjects);

    int marks[5][4][3];
    float termAvg[5][3] = {0}, overallAvg[5] = {0};

    for (int i = 0; i < students; i++) {
        printf("\nEnter marks for Student %d:\n", i + 1);
        for (int k = 0; k < terms; k++) {
            int termSum = 0;
            for (int j = 0; j < subjects; j++) {
                printf("  Subject %d, Term %d: ", j + 1, k + 1);
                scanf("%d", &marks[i][j][k]);
                termSum += marks[i][j][k];
            }
            termAvg[i][k] = (float) termSum / subjects;
            overallAvg[i] += termAvg[i][k];
        }
        overallAvg[i] /= terms;
    }

    printf("\n Marks Report \n");
    int topStudent = 0, bestTerm = 0;
    for (int i = 0; i < students; i++) {
        printf("\nStudent %d:\n", i + 1);
        for (int k = 0; k < terms; k++) {
            printf("  Term %d Average = %f\n", k + 1, termAvg[i][k]);
        }
        printf("  Overall Average = %f\n", overallAvg[i]);
        if (overallAvg[i] > overallAvg[topStudent]) topStudent = i;
    }

  
    for (int k = 1; k < terms; k++) {
        if (termAvg[topStudent][k] > termAvg[topStudent][bestTerm])
            bestTerm = k;
    }

    printf("\nHighest Overall Scorer: Student %d (Average = %f)\n",
           topStudent + 1, overallAvg[topStudent]);
    printf("Best Term for Student %d: Term %d (Average = %f)\n",
           topStudent + 1, bestTerm + 1, termAvg[topStudent][bestTerm]);

    return 0;
}

