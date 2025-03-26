#include <stdio.h>
int main(){
int branch;
printf("enter number(1-4) 1-btech,2-aiml,3-ece,4-mec");
scanf("%d",&branch);
switch(branch){
case 1:
printf("B-tech branch");
break;
case 2:
printf("aiml branch");
break;
case 3:
printf("ECE branch");
break;
case 4:
printf("mec branch");
break;
deafult :
printf("invalid number");

