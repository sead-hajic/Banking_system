#include <stdio.h>
#include <stdlib.h>


int main() {
	int option,accountCounter=1,passError=0,blocked1=0,blocked2=0,accountNum,accountNum1,accountNum2,phone1,phone2,amount,intAmount1,intAmount2,password1,password2,repassword;
    char name1[10],address1[100],name2[10],address2[100];
    while(1)
    {
        printf("Welcome to our bank\n1.New account\n2.Operations\n3.Exit\nSelection: ");
        scanf("%d",&option);
        if(option==1)
        {
            if(accountCounter==1)
            {
                printf("Name: ");
                scanf("%s",name1);
                printf("Address: ");
                scanf("%s",address1);
                printf("Phone: ");
                scanf("%d",&phone1);
                printf("Inital Amount: ");
                scanf("%d",&intAmount1);
                printf("Password: ");
                scanf("%d",&password1);
                while(1)
                {
                    printf("Re-type Password: ");
                    scanf("%d",&repassword);
                    if(repassword!=password1)
                        printf("Passwords do not match.\n");
                    else
                        break;
                }
                printf("Password successfully created.\n");
                accountNum1=accountCounter;
                printf("Account number: %d\n",accountNum1);
                accountCounter++;
            }
            else if(accountCounter==2)
            {
                printf("Name: ");
                scanf("%s",&name2);
                printf("Address: ");
                scanf("%s",&address2);
                printf("Phone: ");
                scanf("%d",&phone2);
                printf("Initial Amount: ");
                scanf("%d",&intAmount2);
                printf("Password: ");
                scanf("%d",&password2);
                while(1)
                {
                    printf("Re-type Password: ");
                    scanf("%d",&repassword);
                    if(repassword!=password2)
                        printf("Passwords do not match.\n");
                    else
                        break;
                }
                printf("Password successfully created.\n");
                accountNum2=accountCounter;
                printf("Account number: %d\n",accountNum2);
                accountCounter++;
            }
            else
                printf("Too many accounts.\n");
        }
        else if(option==2)
        {
            printf("Enter your account number: ");
            scanf("%d",&accountNum);
            if(accountNum==accountNum1)
            {
                while(passError<3)
                {
                    printf("Enter password: ");
                    scanf("%d",&repassword);
                    if(repassword==password1)
                        break;
                    else
                    {
                        printf("Wrong password.\n");
                        passError++;
                    }
                }
                if(passError==3)
                {
                    printf("Account blocked.\n");
                    return 0;
                    blocked1=1;
                }
                while(1)
                {
                    printf("1.Change password\n2.Deposit\n3.Withdraw\n4.Print\n5.Exit\nSelection: ");
                    scanf("%d",&option);
                    if(option==1)
                    {
                        printf("Enter new password: ");
                            scanf("%d",&password1);
                        while(1)
                        {
                            printf("Re-type Password: ");
                            scanf("%d",&repassword);
                            if(repassword!=password1)
                                printf("Passwords do not match.\n");
                            else
                                break;
                        }
                        printf("Password changed");
                    }
                    else if(option==2)
                    {
                        printf("Amount: ");
                        scanf("%d",&amount);
                        intAmount1+=amount;
                        printf("Operation Successful");
                    }
                    else if(option==3)
                    {
                        printf("Amount: ");
                        scanf("%d",&amount);
                        if(intAmount1>=amount)
                        {
                            intAmount1-=amount;
                            printf("Operation Successful");
                        }
                        else
                            printf("Not enough money on account.");
                    }
                    else if(option==4)
                    {
                        printf("Name: %s\nAddress: %s\nPhone: %d\nAmount: %d\n",name1,address1,phone1,intAmount1);
                    }
                    else if(option==5)
                        break;
                }
            }
            else if(accountNum==accountNum2)
            {
                while(passError<3)
                {
                    printf("Enter password: ");
                    scanf("%d",&repassword);
                    if(repassword==password2)
                        continue;
                    else
                    {
                        printf("Wrong password.\n");
                        passError++;
                    }
                }
                if(passError==3)
                {
                    printf("Account blocked.\n");
                    return 0;
                    blocked2=1;
                }
                while(1)
                {
                    printf("1.Change password\n2.Deposit\n3.Withdraw\n4.Print\n5.Exit\nSelection: ");
                    scanf("%d",&option);
                    if(option==1)
                    {
                        printf("Enter new password: ");
                            scanf("%d",&password2);
                        while(1)
                        {
                            printf("Re-type Password: ");
                            scanf("%d",&repassword);
                            if(repassword!=password2)
                                printf("Passwords do not match.\n");
                            else
                                break;
                        }
                        printf("Password changed");
                    }
                    else if(option==2)
                    {
                        printf("Amount: ");
                        scanf("%d",&amount);
                        intAmount2+=amount;
                        printf("Operation Successful");
                    }
                    else if(option==3)
                    {
                        printf("Amount: ");
                        scanf("%d",&amount);
                        if(intAmount2>=amount)
                        {
                            intAmount2-=amount;
                            printf("Operation Successful");
                        }
                        else
                            printf("Not enough money on account.");
                    }
                    else if(option==4)
                    {
                        printf("Name: %s\nAddress: %s\nPhone: %d\nAmount: %d",name2,address2,phone2,intAmount2);
                    }
                    else if(option==5)
                        break;
                }
            }
        }
        else if(option==3)
        {
            printf("Exiting...");
            break;
        }
    }
}
