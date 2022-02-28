#include <stdio.h>
#include <stdlib.h>
int menu()
{
 int action;
 printf("select an action:\n");
 printf("1. Add a new patron\n");
 printf("2. view all patrons\n");
 printf("3. view books\n");
 printf("4. add a new book\n");
 printf("your action: ");
 scanf("%d",&action);
 if(action<1 || action > 4){
    printf("invalid action.try again\n");

 }

return action;

}


void execute_action (int action){
switch(action){
case 1:
    printf("adding a new patron\n");
    break;

case 2:
    printf("here is a list of all patrons\n");
    break;
case 3:
    printf("here is a list of all books");
    break;
case 4:
    printf("adding a new book\n");
    break;
default:
    printf("invalid action.\n");
}

}






int main()
{
    printf("COUNTY LIBRARY SYSTEM!\n");
    printf("welcome ivyne wambui!\n");
    execute_action(menu());
    return 0;
}
