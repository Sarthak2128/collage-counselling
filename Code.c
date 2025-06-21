#include <stdio.h>
#include <string.h>

int main() {
    printf("============================================\n");
    printf("         WELCOME TO BE/BTECH COUNSELLING    \n");
    printf("============================================\n");
    printf("        Session 2025-2026 Admissions         \n");
    printf("============================================\n\n");

    float cetMarks;
    int round = 1;
    char ans, accept;

    char name[50], fname[50], mname[50];
    char dob[20], school[50], clg[50];
    int year10, year12;
    float per10, per12;

    char colleges[11][50] = {
        "COEP Pune", "VJTI Mumbai", "SPIT Mumbai", "GCOE Yavatmal",
        "GCOE Amravati", "GCOE Karad", "Walchand College Sangli",
        "SGGS Nanded", "GCOE Nagpur", "ICT Mumbai", "LPU Punjab"
    };

    char branch[5][50] = {
        "Computer Science Engineering",
        "Electronics & Telecommunication",
        "Electrical Engineering",
        "Civil Engineering",
        "Mechanical Engineering"
    };

    float cutoffs[11][5][3] = {
        {{99.90, 99.70, 99.50}, {99.80, 99.60, 99.30}, {99.70, 99.40, 99.00}, {99.50, 99.20, 98.99}, {99.60, 99.30, 99.00}},
        {{98.50, 98.30, 98.00}, {98.40, 98.10, 97.80}, {98.30, 98.00, 97.60}, {98.00, 97.70, 97.50}, {98.20, 97.90, 97.60}},
        {{97.80, 97.50, 97.20}, {97.70, 97.40, 97.10}, {97.50, 97.20, 96.90}, {97.30, 97.00, 96.70}, {97.60, 97.30, 97.00}},
        {{96.00, 95.50, 95.00}, {95.80, 95.30, 94.80}, {95.50, 95.00, 94.50}, {95.00, 94.50, 94.00}, {95.30, 94.80, 94.30}},
        {{95.00, 94.50, 94.00}, {94.80, 94.30, 93.80}, {94.50, 94.00, 93.50}, {94.00, 93.50, 93.00}, {94.30, 93.80, 93.30}},
        {{93.50, 93.00, 92.50}, {93.30, 92.80, 92.30}, {93.00, 92.50, 92.00}, {92.50, 92.00, 91.50}, {93.00, 92.50, 92.00}},
        {{92.00, 91.50, 91.00}, {91.80, 91.30, 90.80}, {91.50, 91.00, 90.50}, {91.00, 90.50, 90.00}, {91.30, 90.80, 90.30}},
        {{90.00, 89.50, 89.00}, {89.80, 89.30, 88.80}, {89.50, 89.00, 88.50}, {89.00, 88.50, 88.00}, {89.30, 88.80, 88.30}},
        {{88.00, 87.50, 87.00}, {87.80, 87.30, 86.80}, {87.50, 87.00, 86.50}, {87.00, 86.50, 86.00}, {87.30, 86.80, 86.30}},
        {{86.00, 85.50, 85.00}, {85.80, 85.30, 84.80}, {85.50, 85.00, 84.50}, {85.00, 84.50, 84.00}, {85.30, 84.80, 84.30}},
        {{80.00, 78.00, 75.00}, {79.00, 77.00, 74.00}, {78.00, 76.00, 73.00}, {77.00, 75.00, 72.00}, {76.00, 74.00, 71.00}}
    };

    printf("Enter your CET/JEE percentage: ");
    scanf("%f", &cetMarks);
    printf("\n");

    printf("Available Colleges:\n");
    for (int i = 0; i < 11; i++) {
        printf("%d. %s\n", i + 1, colleges[i]);
    }
    printf("\n");

    printf("Do you want to fill admission form? (y/n): ");
    scanf(" %c", &ans);
    printf("\n");

    if (ans == 'y') {
        printf("--- Fill Admission Form ---\n\n");

        printf("Enter Full Name: ");
        scanf(" %[^\n]s", name);

        printf("Father's Name: ");
        scanf(" %[^\n]s", fname);

        printf("Mother's Name: ");
        scanf(" %[^\n]s", mname);

        printf("Date of Birth (DD/MM/YYYY): ");
        scanf(" %[^\n]s", dob);

        printf("10th Percentage: ");
        scanf("%f", &per10);

        printf("12th Percentage: ");
        scanf("%f", &per12);

        printf("School Name: ");
        scanf(" %[^\n]s", school);

        printf("College Name: ");
        scanf(" %[^\n]s", clg);

        printf("Year of Passing 10th: ");
        scanf("%d", &year10);

        printf("Year of Passing 12th: ");
        scanf("%d", &year12);

        int cno, bno;
        int found = 0;

        while (round <= 3) {
            printf("\n--- ROUND %d ---\n\n", round);

            while (1) {
                printf("Choose College (1 to 11): ");
                scanf("%d", &cno);

                if (cno < 1 || cno > 11) {
                    printf("Invalid college. Try again.\n\n");
                    continue;
                }

                printf("\nChoose Branch:\n");
                for (int j = 0; j < 5; j++) {
                    printf("%d. %s (Cutoff: %.2f)\n", j + 1, branch[j], cutoffs[cno - 1][j][round - 1]);
                }

                printf("\nEnter Branch Choice (1 to 5): ");
                scanf("%d", &bno);

                if (bno < 1 || bno > 5) {
                    printf("Invalid branch. Try again.\n\n");
                    continue;
                }

                float required = cutoffs[cno - 1][bno - 1][round - 1];

                if (cetMarks >= required) {
                    found = 1;

                    printf("\nYou are allotted:\n");
                    printf("College: %s\n", colleges[cno - 1]);
                    printf("Branch : %s\n", branch[bno - 1]);

                    printf("\nDo you want to accept? (y/n): ");
                    scanf(" %c", &accept);

                    if (accept == 'y') {
                        printf("\n============================================\n");
                        printf("         COLLEGE ALLOTMENT LETTER           \n");
                        printf("============================================\n");
                        printf("Name           : %s\n", name);
                        printf("Father's Name  : %s\n", fname);
                        printf("Mother's Name  : %s\n", mname);
                        printf("DOB            : %s\n", dob);
                        printf("10th %%        : %.2f\n", per10);
                        printf("12th %%        : %.2f\n", per12);
                        printf("School Name    : %s\n", school);
                        printf("College Name   : %s\n", clg);
                        printf("10th Passed    : %d\n", year10);
                        printf("12th Passed    : %d\n", year12);
                        printf("--------------------------------------------\n");
                        printf("Allotted College: %s\n", colleges[cno - 1]);
                        printf("Allotted Branch : %s\n", branch[bno - 1]);
                        printf("Course Duration : 4 Years\n");
                        printf("============================================\n");
                        printf("Thanks! You are successfully admitted.\n");
                        printf("============================================\n");
                        return 0;
                    } else {
                        printf("\nYou declined the offer. Going to next round.\n\n");
                        break;
                    }
                } else {
                    printf("\nSorry! Your score does not meet the cutoff.\nPlease try another college.\n\n");
                }
            }

            round++;
        }

        if (!found) {
            printf("\nSorry! No allotment in any round.\n");
        }

    } else {
        printf("Thanks for visiting. Goodbye!\n");
    }

    return 0;
}
