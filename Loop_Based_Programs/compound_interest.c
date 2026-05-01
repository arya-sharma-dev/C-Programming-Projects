#include<stdio.h>
#include<math.h>
int main(){
    float p, r, t, CI, amt;
    printf("enter principal amount(p):");
    scanf("%f",&p);
    printf("enter rate of interest (r):");
    scanf("%f",&r);
    printf("enter time in years(t):");
    scanf("%f", &t);
    amt = p * pow((1 + r/100),t);
    CI = amt - p;
    printf("\ntotal amount after interest: %.2f", amt);
    printf("\ncompound interest (CI): %.2f\n", CI);
    return 0;
}
