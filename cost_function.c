#include <stdio.h>
int main() 
{
/* cost function need hypothesis so im gonna write hypothesis
eqation is Y = mX + c
so first we need to find the m so devited m = (y2-y1)/(x2-x1)
m = Teta One*/ 
float theta_one,theta_zero,y1,y2,x1,x2,X,Y,hypothesis; // diclear  variables for m(Theta One)
/* to find m first we have to find diirence between y2,y1 and x2,x1 values 
User input valuse  */
printf("Enter the Coodinat one:\n");
scanf("%f %f",&x1,&y1);
printf("Enter the 2nd Coodinat:\n");
scanf("%f %f",&x2,&y2);
/*printf("Enter the X1 Coodinats: ");
scanf("%f",&x1);
printf("Enter the X2 coodinats: ");
scanf("%f",&x2);*/

// users inputed data and gonna find the  theta one

theta_one = (y2-y1)/(x2-x1);
// we got the Theta one

printf("Enter the Theta Zero:");
scanf("%f",&theta_zero);
// now Enter the X 
printf("Enter the Coodinats of X and Y: \n");
scanf("%f %f",&X,&Y);

// everything now we have to find hypothesis so Lest write the eqation
hypothesis = theta_zero + (theta_one*X);
//Good job yo Lets Display it
printf("Hypothesis %.2f\n",hypothesis);

//Diclaring the variables for Cost Function 
float i=1,ans,j;
int m;
//user input the numbers of items
printf("Enter the Number of items: ");
scanf("%d",&m);
//lets write the damn eqation
ans = (hypothesis*(X*i)-Y*i)*(hypothesis*(X*i)-Y*i);
j=(2*m)/1+ans;
printf("Cost answer: %.2f\n",j);
return 0; 
}
// Algorithm by Mr.Dewwiman
