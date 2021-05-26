#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include<time.h>

struct noderec {
  int letter1, letter2;
  char college[30], course[30];
  struct noderec * next;
};
typedef struct noderec * node;
node new, start, last, prev, temp;
struct choices {
  int subid, collid;
  char course[30];
  char college[30];
};
typedef struct choices choices;
void collegelist() {
  printf("\ncollege id      college name\n");
  printf("   201        CEG anna university  \n");
  printf("   202        SSN Engineering      \n");
  printf("   203        SVCE Engineering     \n");
  printf("   204        REC Engineering      \n");
  printf("   205        PSG engineering      \n");
  printf("   206        MIT Chennai          \n");
  printf("   207        Sathyabama College   \n");
  printf("   208        Hindustan Engineering\n");
  printf("   209        SRM Easwari College  \n");
  printf("   210        Crescent Engineering \n\n");

}
void courselist() {

  printf("course id      course name\n");
  printf("   101             CSE \n");
  printf("   102             IT  \n");
  printf("   103             ECE \n");
  printf("   104             EEE \n");
  printf("   105          Mechanical\n");
  printf("   106          BioMedical \n");
  printf("   107         GeoInformatics \n\n");
  
}
void course(choices * );
void college(choices * );
void course(choices * c) {
  if (c -> subid == 101)
    strcpy(c -> course, "Computer Science Engineering");
  else if (c -> subid == 102)
    strcpy(c -> course, "--Information  Technology--");
  else if (c -> subid == 103)
    strcpy(c -> course, "-----------ECE------------");
  else if (c -> subid == 104)
    strcpy(c -> course, "-----------EEE------------");
  else if (c -> subid == 105)
    strcpy(c -> course, "--Mechanical Engineering--");
  else if (c -> subid == 106)
    strcpy(c -> course, "--BioMedical Engineering--");
  else if (c -> subid == 107)
    strcpy(c -> course, "------Geo Informatics-----");
  else
    strcpy(c -> course, "Doesnt Exist");
}
float cutoffcalc(float x, float y, float z) {
  return (x + (y + z) / 2);
}
void college(choices * c) {
  if (c -> collid == 201)
    strcpy(c -> college, "---CEG anna university---");
  else if (c -> collid == 202)
    strcpy(c -> college, "-SSN engineering college-");
  else if (c -> collid == 203)
    strcpy(c -> college, "SVCE engineering college-");
  else if (c -> collid == 204)
    strcpy(c -> college, "-REC engineering college-");
  else if (c -> collid == 205)
    strcpy(c -> college, "-PSG engineering college-");
  else if (c -> collid == 206)
    strcpy(c -> college, "---MIT Chennai College---");
  else if (c -> collid == 207)
    strcpy(c -> college, "---Sathyabama  Chennai---");
  else if (c -> collid == 208)
    strcpy(c -> college, "----Hindustan  college---");  
  else if (c -> collid == 209)
    strcpy(c -> college, "---SRM Easwari college---");
  else if (c -> collid == 210)
    strcpy(c -> college, "---Crescent Engineering---");  
  else
    strcpy(c -> course, "doesnt exist");

}

void createList() {
  start = last = NULL;
}
int isEmpty() {
  return start == NULL;
}
void insert_mid(int x, int y, int pos) {
  int i = 1;
  new = (struct noderec * ) malloc(sizeof(struct noderec));
  new -> letter1 = x;
  new -> letter2 = y;
  if (y == 101)
    strcpy(new -> course, "Computer science engg ");
  else if (y == 102)
    strcpy(new -> course, "Information technology");
  else if (y == 103)
    strcpy(new -> course, "---------ECE----------");
  else if (y == 104)
    strcpy(new -> course, "---------EEE----------");
  else if (y == 105)
    strcpy(new -> course, "Mechanical engineering");
  else if (y == 106)
    strcpy(new -> course, "BioMedical engineering");
  else if (y == 107)
    strcpy(new -> course, "---Geo  Informatics---");
  else
    strcpy(new -> course, "doesnt exist");
  if (x == 201)
    strcpy(new -> college, "---CEG anna university---");
  else if (x == 202)
    strcpy(new -> college, "-SSN engineering college-");
  else if (x == 203)
    strcpy(new -> college, "SVCE engineering college-");
  else if (x == 204)
    strcpy(new -> college, "-REC engineering college-");
  else if (x == 205)
    strcpy(new -> college, "-PSG engineering college-");
  else if (x == 206)
    strcpy(new -> college, "---MIT Chennai College---");
  else if (x == 207)
    strcpy(new -> college, "---Sathyabama  Chennai---");
  else if (x == 208)
    strcpy(new -> college, "----Hindustan  college---");  
  else if (x == 209)
    strcpy(new -> college, "---SRM Easwari college---");
  else if (x == 210)
    strcpy(new -> college, "---Crescent Engineering---");  
  else
    strcpy(new -> course, "doesnt exist");

  if (isEmpty()) {
    new -> next = start;
    start -> next = new;
  } else {
    temp = start -> next;
    while (temp -> next != start && i < pos - 1) 
    {
      temp = temp -> next;
      i++;
    }
    if (pos == 1) {
      new -> next = start -> next;
      start -> next = new;
    } else if (temp -> next == start) {
      new -> next = start;
      temp -> next = new;
    } else {
      new -> next = temp -> next;
      temp -> next = new;
    }
  }
}
void insert_beg(int x, int y) {
  new = (struct noderec * ) malloc(sizeof(struct noderec));
  new -> letter1 = x;
  new -> letter2 = y;
    if (y == 101)
    strcpy(new -> course, "Computer science engg ");
  else if (y == 102)
    strcpy(new -> course, "Information technology");
  else if (y == 103)
    strcpy(new -> course, "---------ECE----------");
  else if (y == 104)
    strcpy(new -> course, "---------EEE----------");
  else if (y == 105)
    strcpy(new -> course, "Mechanical engineering");
  else if (y == 106)
    strcpy(new -> course, "BioMedical engineering");
  else if (y == 107)
    strcpy(new -> course, "---Geo  Informatics---");
  else
    strcpy(new -> course, "doesnt exist");
  if (x == 201)
    strcpy(new -> college, "---CEG anna university---");
  else if (x == 202)
    strcpy(new -> college, "-SSN engineering college-");
  else if (x == 203)
    strcpy(new -> college, "SVCE engineering college-");
  else if (x == 204)
    strcpy(new -> college, "-REC engineering college-");
  else if (x == 205)
    strcpy(new -> college, "-PSG engineering college-");
  else if (x == 206)
    strcpy(new -> college, "---MIT Chennai College---");
  else if (x == 207)
    strcpy(new -> college, "---Sathyabama  Chennai---");
  else if (x == 208)
    strcpy(new -> college, "----Hindustan  college---");  
  else if (x == 209)
    strcpy(new -> college, "---SRM Easwari college---");
  else if (x == 210)
    strcpy(new -> college, "---Crescent Engineering---");  
  else
    strcpy(new -> course, "doesnt exist");
  new -> next = start;
  start = new;
}
int calcrank(float cutoff) {
  int rank;
  srand(time(0));
  if (cutoff >= 198.5)
    rank = (rand() % 100);
  else if (cutoff >= 196 && cutoff < 198.5)
    rank = (rand() % 300) + 100;
  else if (cutoff >= 194 && cutoff < 196)
    rank = (rand() % 500) + 300;
  else if (cutoff >= 191 && cutoff < 194)
    rank = (rand() % 1000) + 500;
  else if (cutoff >= 188 && cutoff < 191)
    rank = (rand() % 2000) + 1000;
  else if (cutoff >= 184 && cutoff < 188)
    rank = (rand() % 3000) + 2000;
  else if (cutoff >= 180 && cutoff < 184)
    rank = (rand() % 4000) + 3000;
  else if (cutoff >= 176 && cutoff < 180)
    rank = (rand() % 5000) + 4000;
  else
    rank = (rand() % 6000) + 5000;
  return rank;
}

void insertEnd(int x, int y) {
  new = (struct noderec * ) malloc(sizeof(struct noderec));
  new -> letter1 = x;
  new -> letter2 = y;
    if (y == 101)
    strcpy(new -> course, "Computer science engg ");
  else if (y == 102)
    strcpy(new -> course, "Information technology");
  else if (y == 103)
    strcpy(new -> course, "---------ECE----------");
  else if (y == 104)
    strcpy(new -> course, "---------EEE----------");
  else if (y == 105)
    strcpy(new -> course, "Mechanical engineering");
  else if (y == 106)
    strcpy(new -> course, "BioMedical engineering");
  else if (y == 107)
    strcpy(new -> course, "---Geo  Informatics---");
  else
    strcpy(new -> course, "doesnt exist");
  if (x == 201)
    strcpy(new -> college, "---CEG anna university---");
  else if (x == 202)
    strcpy(new -> college, "-SSN engineering college-");
  else if (x == 203)
    strcpy(new -> college, "SVCE engineering college-");
  else if (x == 204)
    strcpy(new -> college, "-REC engineering college-");
  else if (x == 205)
    strcpy(new -> college, "-PSG engineering college-");
  else if (x == 206)
    strcpy(new -> college, "---MIT Chennai College---");
  else if (x == 207)
    strcpy(new -> college, "---Sathyabama  Chennai---");
  else if (x == 208)
    strcpy(new -> college, "----Hindustan  college---");  
  else if (x == 209)
    strcpy(new -> college, "---SRM Easwari college---");
  else if (x == 210)
    strcpy(new -> college, "---Crescent Engineering---");  
  else
    strcpy(new -> course, "doesnt exist");

  new -> next = NULL;
  if (isEmpty()) {
    start = last = new;
  } else {
    last -> next = new;
    last = new;
  }
}
void display() {
  int i = 1;
  if (isEmpty()) {
    printf("\nList is empty");
  } else {
    printf("\n");
    temp = start;

    printf("         the colleges you have enrolled for are         \n\n");
    printf("sno  college id\t\tcollege name\t subject id\t\t subject name\n\n");
    while (temp != NULL) {
      printf("%d     %d      %s   %d          %s\n", i, temp -> letter1, temp -> college, temp -> letter2, temp -> course);
      temp = temp -> next;
      i++;
    }
    printf("\n Press exit if you have completed selecting your list\n");
  }
}
void deletebeg()
{
  struct noderec * ptr;
  ptr=start;
  start=start->next;
  free(ptr);
}
void delete(int l) {
  int i = 1;
  struct noderec * ptr, * preptr;
  ptr = start;
  if (l==1)
  {
    deletebeg();
    return;
  }
  while (i != l) {
    preptr = ptr;
    ptr = ptr -> next;
    i++;
  }
  preptr -> next = ptr -> next;
  free(ptr);
}
void deleteList() {
  if (!isEmpty()) {
    prev = temp = start;
    while (temp != NULL) {
      prev = temp;
      temp = temp -> next;
      free(prev);
    }
    start = NULL;
    printf("\nList deleted successfully!!");
  } else {
    printf("\nList is empty");
  }
}
int count(int x, int y) {
  int counter = 0;
  temp = start;
  while (temp -> next != NULL) {
    if (x == temp -> letter1 && y == temp -> letter2)
      counter++;
    temp = temp -> next;
  }
  return counter;
}
int main() {
  char name[50], pos3;
  int i, j, option, n, a, b, l, pos, rank;
  float math, phy, chem, cutoff;
  int x, y;
  createList();
  choices ch[20], c2[20];
  printf("--------------------------------------------Welcome To TNEA Online Councelling Process--------------------------------------------\n");
  int count = 1;
  char username[30], password[30], confpass[30];
  printf("Enter your username:\n");
  gets(username);
  printf("\n *************************************************************************** \n");
  printf("\nPlease create a password:\n");
  scanf("%s", & password);
  printf("\n *************************************************************************** \n");
  printf("\nEnter the created password:\n");
  scanf("%s", & confpass);
  printf("\n *************************************************************************** \n");
  while (count < 3) {
    if (strcmp(password, confpass) == 0) {
      printf("\nYour Login is Successful\n");
      goto abc;
    } else {
      printf("\nWrong Password\n");
      count++;
    }
    printf("Enter the created password:\n");
    scanf("%s", & confpass);
  }
  if (count >= 3) {
    printf("\nToo many incorrect attempts, You are not allowed to access the site\n");

    exit(0);
  }
 
  abc: printf("\n *************************************************************************** \n"); 
  printf("\nWelcome to the Enrollment Website!\n");
  printf("\nWelcome %s !!!  Now enter the marks you have secured in your 12th standard board exams\n", username);
  printf("\n*************************************************************************** \n");
  printf("Enter the marks you have secured in MATHEMATICS subject\n");
  scanf("%f", & math);
  printf("\n*************************************************************************** \n");
  printf("Enter the marks you have secured in PHYSICS subject\n");
  scanf("%f", & phy);
  printf("\n*************************************************************************** \n");
  printf("Enter the marks you have secured in CHEMISTRY subject\n");
  scanf("%f", & chem);
  printf("\n*************************************************************************** \n");
  cutoff = cutoffcalc(math, phy, chem);
  printf("\n Your Cutoff is %.2f \n", cutoff);
  rank = calcrank(cutoff);
  printf("\n The rank you have secured is %d Congratulations \n", rank);
  while (1) {
    printf("\n *************************************************************************** \n");
    printf("\n\n1. Create a priority list and enter your choices\n2. Display the priority list\n3. Enter choice after a given position\n4. Enter choice in the beginning\n5. Enter choice in the end\n6. Delete choice\n7. Exit\n");
    printf("\n *************************************************************************** \n");
    printf("\nEnter your choice : ");
    scanf("%d", & option);
    switch (option) {
      createList();
    case 1:
      printf("\nEnter the number of choices you want to enter\n");
      scanf("%d", & n);
      printf("\nChoose your List\n");
      for (i = 0; i < n; i++) {
        collegelist();
        courselist();
        printf("\n enter college %d id ", i + 1);
        scanf("%d", & ch[i].collid);
        printf("\n enter sub %d id ", i + 1);
        scanf("%d", & ch[i].subid);
        insertEnd(ch[i].collid, ch[i].subid);
      }
      for (i = 0; i < n; i++) {
        course( & ch[i]);
        college( & ch[i]);
      }
      printf("\nThe linked list after inserting the choices are : ");
      display();
      break;
    case 2:
      printf("The linked list : \n");
      printf("\n");
      display();
      break;

    case 3:
      printf("Enter the position after which you want to insert\n");
      scanf("%d", & pos);
      j = 11;
      collegelist();
      courselist();
      printf("\nEnter college id ");
      scanf("%d", & ch[j].collid);
      printf("\nEnter sub id ");
      scanf("%d", & ch[j].subid);
      insert_mid(ch[j].collid, ch[j].subid, pos);
      display();
      break;
    case 4:
	  collegelist();
      courselist();
      printf("\nEnter college id ");
      scanf("%d", & x);
      printf("\nEnter sub id ");
      scanf("%d", & y);
      insert_beg(x, y);
      display();
      break;
    case 5:
	  collegelist();
      courselist();
      printf("\n Enter college id ");
      scanf("%d", & x);
      printf("\n Enter sub id ");
      scanf("%d", & y);
      insertEnd(x, y);
      display();
      break;
    case 6:
      printf("\nTo delete enter sno\n");
      scanf("%d", & l);
      delete(l);
      display();
      break;
    case 7:
      printf("\n ------------------------------Thank You %s For Entering Your Priority List,Based on your rank %d and cutoff %.2f Your Choice Will Be Confirmed After Few More Days---------------------------------", username, rank, cutoff);
      exit(0);
      break;
    }
  }
  return 0;
}
