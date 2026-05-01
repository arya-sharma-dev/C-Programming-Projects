#include <stdio.h>
#include <string.h>
struct student {
    int admno;             
    char sname[20];        
    float eng, math, sci; 
    float total;           
    float per;   
};        

int main() {
    struct student s1;
    printf("Enter Admission Number: ");
    scanf("%d", &s1.admno);

    getchar(); 
    printf("Enter Student Name: ");
    fgets(s1.sname, 20, stdin);
    s1.sname[strcspn(s1.sname, "\n")] = 0; 

    printf("Enter marks for English, Math, and Science: ");
    scanf("%f %f %f", &s1.eng, &s1.math, &s1.sci);

    s1.total = s1.eng + s1.math + s1.sci;
    s1.per = (s1.total / 300.0) * 100.0;
    printf("\n--- Student Record ---\n");
    printf("Adm No: %d\n", s1.admno);
    printf("Name  : %s\n", s1.sname);
    printf("Marks : Eng:%.1f, Math:%.1f, Sci:%.1f\n", s1.eng, s1.math, s1.sci);
    printf("Total : %.1f / 300.0\n", s1.total);
    printf("Percentage: %.2f%%\n", s1.per);

    return 0;
}
