#include <stdio.h>
#include <string.h>
#include "header.h"

int main() {
    struct Account accounts[MAX];
    int count = 0;
    int choice;

    while (1) {
        printf("\n===== SIMPLE BANK SYSTEM =====\n");
        printf("[1] Add Account\n");
        printf("[2] View Accounts\n");
        printf("[3] Deposit\n");
        printf("[4] Withdraw\n");
        printf("[5] Check Balance\n");
        printf("[6] Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
         

        switch (choice) {
            case 1: addAccount(accounts, &count); break;
            case 2: viewAccounts(accounts, count); break;
            case 3: deposit(accounts, count); break;
            case 4: withdraw(accounts, count); break;
            case 5: checkBalance(accounts, count); break;
            case 6: printf("Thank you!\n"); return 0;
            default: printf("Invalid Choice!\n"); 
            
        }
    }

}



