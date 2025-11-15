#include<stdio.h>

char calculategrade(int marks) {
if(marks >=90) {
return 'A';
} else if (marks >=75) {
return 'B';
} else if(marks >=50){
return 'C';
} else {
return 'F';
}
}
int main() {
int n ,marks;
float scholarship;
char grade;
printf("Enter the number Of Students:");
Scanf("%d",&n);

for(int i =1; i <=n; i++){
Printf("\n Enter the marks of Students %d",i);
scanf("%d",&marks);

grade=calculategrade(marks);

if(grade =='A') {
scholarship =1000 *0.20;
} else if(grade =='B') {
scholarship =1000 *0.10;
} else if(grade =='C') {
scholarship =1000 *0.05;
} else {
scholarship =0;
}

printf("Student %d -> Marks :%d, Grade: %c,scholarship: %.2f\n",i,marks,grade,scholarship);
}
return 0;
}
