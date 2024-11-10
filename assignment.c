#include <stdio.h>
#define NUM_SUBJECTS 3
#define NUM_STUDENTS 2

int main(){
  //declare variables
  char names[NUM_STUDENTS][50];
  int scores[NUM_STUDENTS][NUM_SUBJECTS];
  float averages[NUM_STUDENTS];
  char grades[NUM_STUDENTS];
  //Input stdent information
  for(int i = 0; i < NUM_STUDENTS; i++) {
    printf("Enter name of student%d:", i + 1);
    scanf("%s", names[i]);

    printf("Enter scores for %s in %d subject;\n", names[i], NUM_SUBJECTS);
    int total = 0;

    //Input scores and calculate total
    for (int j = 0; j < NUM_SUBJECTS; j++) {
        printf("Score for subject %d: ", j + 1);
        scanf("%d" , &scores[i][j]);
        total += scores[i][j]
    }
    //calculate average score
  
    averages[i] = (float)total / NUM_SUBJECTS;
  //Determine grade
    switch ((int)averages[i] / 10) {
      case 10:
      case 9: grades[i] = 'A'; break;
      case 8: grades[i] = 'B'; break;
      case 7: grades[i] = 'C'; break;
      case 6: grades[i] = 'D'; break;
      default: grades[i] = 'F'; break;
    }
  }
  //Results
  printf("\nStudent Grade:\n");
  for(int i = 0; i < NUM_STUDENTS; i++) {
    printf("Name: %s\n", names[i]);
    printf(" Average Score: %.2f\n", averages[i]);
    printf("Grade: %c\n\n", grades[i]);
  }
    
  return 0; 
}

