/*
Problem - Switch-Case_Stream Subjects Finder
Platform - HackerRank
Summary - Each stream has a fixed curriculum based on the current academic year (1–4).
Additionally, in 4th year, students may choose an internship instead of regular subjects.
Your task is to print the correct set of subjects based on these inputs.
*/

#include <stdio.h>

int main() {
    int year;
    char branch;

    scanf("%d %c", &year, &branch);

    switch (year) {

        case 1:
            printf("Physics\nChemistry\nMaths");
            break;

        case 2:
            switch (branch) {
                case 'C':
                    printf("C Programming\nComputer Organization & Architecture\nWeb Development");
                    break;
                case 'E':
                    printf("Signal Processing\nLogic Design\nNetwork Analysis");
                    break;
                case 'M':
                    printf("Thermodynamics\nSolid Mechanics\nHeat Transfer");
                    break;
                default:
                    printf("-1");
            }
            break;

        case 3:
            switch (branch) {
                case 'C':
                    printf("Object-oriented Programming\nDBMS\nData Structures & Algorithms");
                    break;
                case 'E':
                    printf("Analog Electronics\nEmbedded Systems\nMicrocontrollers");
                    break;
                case 'M':
                    printf("Applied Mechanics\nKinematics\nMechatronics");
                    break;
                default:
                    printf("-1");
            }
            break;

        case 4: {
            int internship;
            scanf("%d", &internship);

            switch (internship) {
                case 1:
                    printf("Enrolled into Internship Program");
                    break;

                case 0:
                    switch (branch) {
                        case 'C':
                            printf("Operating Systems\nComputer Networks\nCompiler Design");
                            break;
                        case 'E':
                            printf("VLSI Design\nFiber-optic Communication\nDigital Electronics");
                            break;
                        case 'M':
                            printf("Mechanism of Materials (MOM)\nStrength of Materials (SOM)\nMachine Design");
                            break;
                        default:
                            printf("-1");
                    }
                    break;

                default:
                    printf("-1");
            }
            break;
        }

        default:
            printf("-1");
    }

    return 0;
}
