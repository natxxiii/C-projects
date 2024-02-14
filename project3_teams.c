
#include <stdio.h>
#include <stdlib.h>
//declare function
void assign(int points[], int team[], int n);

int main() {
    int students;
    //ask user to enter number of students and store in variable
    printf("Enter number of students: ");
    scanf("%d", &students);
    //declare lists
    int points[students];
    int team[students];
    //ask user to enter number of points for each student 
    printf("Enter points for each student: ");
    //add points to list
    for (int i = 0; i < students; i++) {
        scanf("%d", &points[i]);
    }
    //declare function
    assign(points, team, students);
    //print the beginner team if score falls under it
    printf("Beginner team: ");
    printf("student");
    for (int i = 0; i < students; i++) {
        if (team[i] == 1) {
            printf(" %d", i + 1);
        }
    }
    //print the honor team if score falls under it
    printf("\nHonor team: ");
    printf("student");
    for (int i = 0; i < students; i++) {
        if (team[i] == 2) {
            printf(" %d", i + 1);
        }
    }
    //print the excellence team if score falls under it
    printf("\nExcellence team:");
    printf("student");
    for (int i = 0; i < students; i++) {
        if (team[i] == 3) {
            printf(" %d", i + 1);
        }
    }
    
    return 0;
}
//define function
void assign(int points[], int team[], int n) {
    //define each type of team
    for (int i = 0; i < n; i++) {
        int studentPoints = points[i];
        int beginner = abs(studentPoints - 25);
        int honor = abs(studentPoints - 70);
        int excellence = abs(studentPoints - 125);
        //declare team 1 if score is 25 or below
        if (beginner <= honor && beginner <= excellence) {
            team[i] = 1;
            //declare team 2 if score is 70 or below
        } else if (honor <= beginner && honor <= excellence) {
            team[i] = 2;
            //declare team 3 if score is 125 or below
        } else {
            team[i] = 3;
        }
    }
}
