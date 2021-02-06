#include<stdio.h>
int main()
{
   
double phy,che,bio,mat,com,tot;
printf("ENTER THE PHYSICS MARKS: ");
scanf("%lf",&phy);
printf("ENTER THE CHEMISTRY MARKS: ");
scanf("%lf",&che);
printf("ENTER THE BIOLOGY MARKS: ");
scanf("%lf",&bio);
printf("ENTER THE MATHEMATICS MARKS: ");
scanf("%lf",&mat);
printf("ENTER THE COMPUTER MARKS: ");
scanf("%lf",&com);
printf("\n");
tot=(phy+che+bio+mat+com)/500*100;
printf("PERCENTAGE = %lf\n",tot);
if(tot>=90)
    printf("GRADE = A ");
else if(tot>=80)
    printf("GRADE = B ");
else if(tot>=70)
    printf("GRADE = C ");
else if(tot>=60)
    printf("GRADE = D ");
else if(tot>=50)
    printf("GRADE = E ");
else
    printf("GRADE = F ");
return 0;
}
