#include <stdio.h>
int main(){
int num=1;
LOOP : while(num<=10){
if(num==5){
num++;
goto LOOP;
}
printf("%d\n", num);
num++;
}
return 0;
}