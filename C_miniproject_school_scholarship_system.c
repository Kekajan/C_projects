#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int totalinc(int fsalary,int msalary);      //totalinc function declaration
struct student{     //structure declaration
    char indexno[15]; //Because index numbers may contain characters and if needed to process using a method like checksum we can easily convert to int/float
    char name[25];
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
char stm[8][12]={"","","MATHS","BIO","","ARTS","COMMERCE","TECHNOLOGY"}; //array of strings //1st empty space is to avoid malicious reading which occur mysteriously -_-
FILE *fptr;        //file pointer variable
fptr=fopen("students_details.txt","a");     //file handling-fopen
struct student s[1];       //structure definition  s= array of structure
printf("**********************************************************************\n");
printf("-----------------STUDENTS SCHOLARSHIP DONATION SYSTEM-----------------\n");
printf("\t\t\t  RIDGE WOOD COLLEGE\n");
printf("\t\t   Responsibility.Excellence.Respect\n");
printf("\t\t\t\tEst.1960\n\n\n\n");

int n;
printf("How many A/L students do you have in your school: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
printf("\nEnter student index no: ");
scanf("%s",s[1].indexno);
printf("Enter student name: ");
scanf("%s",s[1].name);

ST: printf("Enter student A/L stream: ");
scanf("%s",s[1].stream);

char substream[12];
strcpy(substream,s[1].stream);
int x=0;
while(substream[x] != '\0'){   // null termination character
    substream[x] = toupper(substream[x]);
    x++;
}
substream[x+1] = '\0';  //  \0=null termination character

char status = 'F';
int i;
for( i=0; i<8; i++){
    if(!strcmp(substream,stm[i]))
    {
        status = 'T';
        break;
    }
}
if(status == 'F'){
    printf("\nWrong Value for Stream! Please Try Again\n");
    goto ST;
}

printf("\n");
fprintf(fptr,"\n%s \t %s \t %s\n",s[1].indexno,s[1].name,s[1].stream);       //file printf

printf("Enter student's first subject marks: ");      //marks entry
scanf("%d",&marks[0]);
printf("Enter student's second subject marks: ");
scanf("%d",&marks[1]);
printf("Enter student's third subject marks: ");
scanf("%d",&marks[2]);

int fsalary, msalary;  //fsalary = salary of father,  msalary = salary of mother
int ti;             //ti=total income, i=counter variable
//for(i=0;i<3;i++){

   sum = (float)(marks[0]+marks[1]+marks[2]);       //sum
//}
avg=sum/3;   //avg=average of 3 subjects
printf("Average of 3 subjects is: %.3f\n",avg);

if(!strcmp(substream,"MATHS"))        //Maths
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
else if(!strcmp(substream,"BIO"))          //Bio
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
else if(!strcmp(substream,"COMMERCE"))         //Commerce
{
    if(avg>=70)
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
else if(!strcmp(substream,"TECHNOLOGY"))       //Technology
{
    if(avg>=72)
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
else if(!strcmp(substream,"ARTS"))     //Arts
{
    if(avg>=75)
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
}
fclose(fptr);
return 0;
}