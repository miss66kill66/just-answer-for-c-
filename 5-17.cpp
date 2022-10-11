#include<stdio.h>

typedef struct record{
    int number;
    char name[10];
    int score;
    char grade;
}Record;

char set_grade(int score );

int main(void){
    const int n=3;
    Record rec[n];
    int i,cnt=0;

    /**  ‰»Î */
    for(i=0;i<n;i++){
        printf("input the info of No.%d\n",i+1);
        printf("number:");
        scanf("%d",&rec[i].number);
        printf("name:");
        scanf("%s",&rec[i].name);
        printf("score:");
        scanf("%d",&rec[i].score);
        if(rec[i].score<60)
            cnt++;
        rec[i].grade = set_grade(rec[i].score);
    }

    printf("the grade of the students is:\n");
    for(i=0;i<n;i++){
        printf("%c\n",rec[i].grade);
    }
    printf("the fail students have %d\n",cnt);

    return 0;
}

char set_grade(int score ){
    char grade;
    if(score>=85 && score<=100){
        grade = 'A';
    }else if(score>=70 && score<=84){
        grade = 'B';
    }else if(score>=60 && score<=69){
        grade = 'C';
    }else{
        grade = 'D';
    }

    return grade;
}
//!
