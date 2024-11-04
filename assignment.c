#include <stdio.h>
#define NUM_SUBJECTS 3
#define NUM_STUDENTS 2

int main(){
  
  char names[NUM_STUDENTS][50];
  int scores[NUM_STUDENTS][NUM_SUBJECTS];
  float averages[NUM_STUDENTS];
  char grades[NUM_STUDENTS];

  for(int i = ; i < NUM_STUDENTS; i++) {
    printf("Enter sname of student%d:", i + 1);
    scanf("%s, names[i]);

    printf("Enter scores for %s in %d subject;\n", names[i], NUM_SUBJECTS);
    int total = 0;


    for (int j = 0; j < NUM_SUBJECTS; j++) {
        printf("Score for subject %d: ", j + 1);
        scanf("%d" , %scores[i][j]);
    }

    averages[i] = (float)total / NUM_SUBJECTS;

    switch ((int)averages[i] / 10) {
      case 10:
      case 9: grades[i] = 'A'; break;
      case 8: grades[i] = 'B'; break;
      case 7: grades[i] = 'C'; break;
      case 6: grades[i] = 'D'; break;
      default: grades[i] = 'F' break;
    }
  }

  return 0; 
}

