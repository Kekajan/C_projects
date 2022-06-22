#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int totalinc(int fsalary,int msalary);      //totalinc function declaration
struct student{     //structure declaration
    int indexno;
    char name[20];
    char stream[15];
};
int marks[3];
float avg=0,sum=0;

int totalinc(int fsalary,int msalary){       //total income function definition
int ti;
printf("\nEnter the monthly income of father: ");  //salary of father
scanf("%d",&fsalary);
printf("Enter the monthly income of mother: ");  //salary of mother
scanf("%d",&msalary);
ti=fsalary+msalary;     //total income
printf("Total income of parents' is : %d",ti);
return ti;
}

int main(){
char stm[5][10]={"Maths","Bio","Commerce","Technology","Arts"};     //array of strings
FILE *fptr;        //file pointer variable
fptr=fopen("students_details.txt","a");     //file handling-fopen
struct student s[1];       //structure definition

printf("Enter student's index no: ");
scanf("%d",&s[1].indexno);
printf("Enter student's name: ");
scanf("%s",s[1].name);
printf("Enter student's AL stream: ");
scanf("%s",s[1].stream);
/*if(strcmp(stm[5],s[1].stream)){
    printf("\nWrong entry! Please enter a valid stream.\n");
    return 0;
}*/

{
printf("\n");
fprintf(fptr,"\n%d \t %s \t %s\n",s[1].indexno,s[1].name,s[1].stream);       //file printf

printf("Enter student's first subject's marks: ");      //marks entry
scanf("%d",&marks[0]);
printf("Enter student's second subject's marks: ");
scanf("%d",&marks[1]);
printf("Enter student's third subject's marks: ");
scanf("%d",&marks[2]);

int fsalary, msalary;  //fsalary = salary of father,  msalary = salary of mother
int ti,i;             //ti=total income, i=counter variable
for(i=0;i<3;i++){

   sum+=(float)marks[i];       //sum
}
avg=sum/3;   //avg=average of 3 subjects
printf("Average of 3 subjects is: %.3f\n",avg);

if(!strcmp(s[1].stream,"Maths"))        //Maths
{
    if(avg>=60)
    {

        ti=totalinc(fsalary, msalary);
        if(ti<20000)
        {
            printf("\n%s is selected to scholarship.\n",s[1].name);
            fprintf(fptr,"%s","This student is selected to scholarship.\n");
        }
        else
        {
            printf("\n%s is not selected to scholarship.\n",s[1].name);
            fprintf(fptr,"%s","This student is not selected to scholarship.\n");
        }
    }
    else
        {
            printf("\n%s is not selected to scholarship.\n",s[1].name);
            fprintf(fptr,"%s","This student is not selected to scholarship.\n");
        }
}
else if(!strcmp(s[1].stream,"Bio"))          //Bio
{
    if(avg>=65)
    {
        ti=totalinc(fsalary, msalary);
        if(ti<20000)
        {
            printf("\n%s is selected to scholarship.\n",s[1].name);
            fprintf(fptr,"%s","This student is selected to scholarship.\n");
        }
         else
        {
            printf("\n%s is not selected to scholarship.\n",s[1].name);
            fprintf(fptr,"%s","This student is not selected to scholarship.\n");
        }
    }
     else
        {
            printf("\n%s is not selected to scholarship.\n",s[1].name);
            fprintf(fptr,"%s","This student is not selected to scholarship.\n");
        }
}
else if(!strcmp(s[1].stream,"Commerce"))         //Commerce
{
    if(avg>=70)
    {
        ti=totalinc(fsalary, msalary);
        if(ti<24000)
        {
            printf("\n%s is selected to scholarship.\n",s[1].name);
            fprintf(fptr,"%s","This student is selected to scholarship.\n");
        }
        else
        {
            printf("\n%s is not selected to scholarship.\n",s[1].name);
            fprintf(fptr,"%s","This student is not selected to scholarship.\n");
        }
    }
     else
        {
            printf("\n%s is not selected to scholarship.\n",s[1].name);
            fprintf(fptr,"%s","This student is not selected to scholarship.\n");
        }

}
else if(!strcmp(s[1].stream,"Technology"))       //Technology
{
    if(avg>=72)
    {
        ti=totalinc(fsalary, msalary);
        if(ti<24000)
        {
            printf("\n%s is selected to scholarship.\n",s[1].name);
            fprintf(fptr,"%s","This student is selected to scholarship.\n");
        }
        else
        {
           printf("\n%s is not selected to scholarship.\n",s[1].name);
            fprintf(fptr,"%s","This student is not selected to scholarship.\n");
        }


    }
    else
    {
        printf("\n%s is not selected to scholarship.\n",s[1].name);
        fprintf(fptr,"%s","This student is not selected to scholarship.\n");
    }

}
else if(!strcmp(s[1].stream,"Arts"))     //Arts
{
    if(avg>=75)
    {
        ti=totalinc(fsalary, msalary);
        if(ti<25000)
        {
            printf("\n%s is selected to scholarship.\n",s[1].name);
            fprintf(fptr,"%s","This student is selected to scholarship.\n");
        }
        else
        {
            printf("\n%s is not selected to scholarship.\n",s[1].name);
            fprintf(fptr,"%s","This student is not selected to scholarship.\n");
        }


    }
     else
        {
            printf("\n%s is not selected to scholarship.\n",s[1].name);
            fprintf(fptr,"%s","This student is not selected to scholarship.\n");
            fclose(fptr);
        }

}
else        //Invalid entry!
{
    printf("\nWrong entry!");
}

return 0;
}
}










