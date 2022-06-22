#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
char stm[5][10]={"MATHS","BIO","COMMERCE","TECHNOLOGY","ARTS"};     //array of strings
FILE *fptr;        //file pointer variable
fptr=fopen("students_details.txt","a");     //file handling-fopen
struct student s[1];       //structure definition, s= array of stucture variables

printf("Enter student's index no: ");
scanf("%d",&s[1].indexno);
printf("Enter student's name: ");
scanf("%s",s[1].name);
ST: printf("Enter student's AL stream: ");
scanf("%s",s[1].stream);

char substream[10];
strcpy(substream,s[1].stream);
/*int x=0;
while(substream[x] != '\0'){
    sizeof(substream)
    //substream[10] =  toupper(substream[10]);
    substream[10] =(char)toupper(substream[10]);
    x += 1;
    printf("%s",substream);
}*/
int x;
for (x = 0; substream[x]!='\0'; x++) {
      if(substream[x] >= 'a' && substream[x] <= 'z') {
         substream[x] = substream[x] -32;
        }
        printf("%s",substream);
   }
   //strupr(substream);

char status='F';
for(int i=0;i<5;i++){
    if(strcmp(substream, stm[i]) == 0){
        printf("Correct one");
        status = 'T';
    }
}

if(status == 'F'){
    printf("\nWrong Value for Stream ! Please Try Again\n");
    goto ST;
}

printf("\n");
fprintf(fptr,"\n%d \t %s \t %s\n",s[1].indexno,s[1].name,s[1].stream);       //file printf

printf("Enter student's first subject's marks: ");      //marks entry
scanf("%d",&marks[0]);
printf("Enter student's second subject's marks: ");
scanf("%d",&marks[1]);
printf("Enter student's third subject's marks: ");
scanf("%d",&marks[2]);

int fsalary=0, msalary=0;  //fsalary = salary of father,  msalary = salary of mother
int ti;             //ti=total income, i=counter variable
for(int i=0;i<3;i++){

   sum+=(float)marks[i];       //sum
}
avg=sum/3;   //avg=average of 3 subjects
printf("Average of 3 subjects is: %.3f\n",avg);

if(!strcmp(substream,"MATHS"))        //Maths
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
else if(!strcmp(substream,"BIO"))          //Bio
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
            fclose(fptr);
        }

}
else        //Invalid entry!
{
    printf("\nSorry and Error Occurred !");
}

return 0;

}









