#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int list();
void deposite();
void withdraw();
void transfer();
void checkdetail();
 void information();
int TotalAmount=1000,Amount,Amo,Tr,TotalDeposite=0,TotalWith=0,TotalTR=0;
int Account;
char name[50];
int main()
{
    printf("enter the bank account number=\n");
    scanf("%d",&Account);
    while(getchar()!='\n');
    printf("enter bank account holder name=");
    fgets(name,50,stdin);
   while(1)
   {
      system("cls");
    switch(list())
    {
       case 1:
              deposite();
           TotalDeposite=TotalDeposite+Amount;
           break;
       case 2:
           withdraw();
           if(Amo<=TotalAmount)
           TotalWith+=Amo;
           break;
       case 3:
           transfer();
           TotalTR+=Tr;
           if(Tr<=TotalAmount)
            break;
        case 4:
            checkdetail();
            break;
        case 5:
            system("cls");
            information();
            exit(0);
         break;
        default:
    printf("\n invalid choice :");

    }
    getch();
   }
    information();
    getch();
}
int list()
{
    int ch;
    printf("\n1.Diposite Amount :");
    printf("\n2.Withdraw Amount :");
    printf("\n3.Transfer Amount :");
    printf("\n4.Check Detail :");
    printf("\n5.Exit :");
    printf("\n Enter your choice");
    scanf("%d",&ch);
    return(ch);
}
void deposite()
{
   printf("\n Enter the Amount you want to diposite");
   scanf("%d",&Amount);
   TotalAmount=TotalAmount+Amount;
   printf("Your money is deposite sucessfully");
}
void withdraw()
{
    printf("\n the Amount you want to withdraw:");
    scanf("%d",&Amo);
    if(Amo<=TotalAmount)
    {
    TotalAmount=TotalAmount-Amo;
    printf("Your money is sucessfully withdraw");
    }
    else
        printf("Enfficient amount amnd possible:");
}
void transfer()
{
 printf("\n Enter the amount want to transfer:");
 scanf("%d",&Tr);
 if(Tr<=TotalAmount)
 {
    TotalAmount-=Tr;
    printf("Your money is sucessfully is transfer");
 }
 else
    printf("\n less amount the transfer of amount is not possible:");
}
void checkdetail()
{
    printf("\ntotal Amount=%d",TotalAmount);
    printf("\nTotal Diposited Amont =%d",TotalDeposite);
    printf("\n Total withdraw Amont =%d",TotalWith);
    printf("\n Total transfer Amount=%d",TotalTR);
}
void information()
{
    printf("\n~~ your Bank Account Statement~~ \n");
   // while(getchar()!='\n');
    printf("your account number is=%d\n",Account);
    printf("the Name of Account holder =%s",name);
    printf("\ntotal Amount=%d",TotalAmount);
    printf("\nTotal Diposited Amont =%d",TotalDeposite);
    printf("\n Total withdraw Amont =%d",TotalWith);
    printf("\n Total transfer Amount=%d\n",TotalTR);
    printf("\n*  THANKYOU *\n");
}

