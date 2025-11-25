#include <stdio.h>

#define MAX 100

struct Account {
    int number;
    char name[30];
    double balance;
    int password;
};
void addAccount(struct Account arr[], int *count) {
    printf("\n\n--- Add New Account ---\n\n");
    printf("Enter Account Number: ");
    scanf("%d", &arr[*count].number);
    printf("Enter Name (dont use space): ");
    scanf("%s", arr[*count].name);
    printf("Enter Password (Number only):");
    scanf("%d", &arr[*count].password);
    printf("Enter Initial Balance: ");
    scanf("%lf", &arr[*count].balance);

    (*count)++;
    printf("Account Added Successfully!\n");
}

void viewAccounts(struct Account arr[], int count) {
    printf("\n--- All Accounts ---\n");
    for (int i = 0; i < count; i++) {
        printf("Account %d | Name: %s | Balance: %.2lf\n",
               arr[i].number, arr[i].name, arr[i].balance);
    }
}

int findAccount(struct Account arr[], int count, int num) {
    for (int i = 0; i < count; i++) {
        if (arr[i].number == num)
            return i;
    }
    return -1; 
}

void deposit(struct Account arr[], int count) {
    int num,password;
    double amount;
    printf("\nEnter Account Number: ");
    scanf("%d", &num);
    
    int index = findAccount(arr, count, num);
    if (index == -1) {
        printf("Account Not Found!\n");
        return;
    }
    printf("\nEnter Account Password: ");
    scanf("%d", &password);
    if(arr[index].password != password){
        printf("Incorrect Password!\n");
        return;
    }else{
        printf("Password Correct!\n");
        printf("Enter Amount to Deposit: ");
    scanf("%lf", &amount);
    }
    
    arr[index].balance += amount;
    printf("Deposit Successful! New Balance: %.2lf\n", arr[index].balance);
}

void withdraw(struct Account arr[], int count) {
    int num;
    double amount;
    long password;

    printf("\nEnter Account Number: ");
    scanf("%d", &num);

    int index = findAccount(arr, count, num);
    if (index == -1) {
        printf("Account Not Found!\n");
        return;}

    else{
        printf("\nEnter Account Password: ");
        scanf("%d", &password);
        if(arr[index].password != password){
        printf("Incorrect Password!\n");
        return;
        }else{
        printf("Password Correct!\n");
        printf("Enter Amount to Withdraw: ");
        scanf("%lf", &amount);}

        if (amount > arr[index].balance) {
        printf("Insufficient Balance!\n");
        return;}else{
        arr[index].balance -= amount;
        printf("Withdrawal Successful! New Balance: %.2lf\n", arr[index].balance);
    return;}
    }
}

void checkBalance(struct Account arr[], int count) {
    int num;
    printf("\nEnter Account Number: ");
    scanf("%d", &num);

    int index = findAccount(arr, count, num);  
    if (index == -1) {
        printf("Account Not Found!\n");
        return;
    }else{
        long password;
        printf("\nEnter Account Password: ");
        scanf("%d", &password);
        if(arr[index].password != password){
        printf("Incorrect Password!\n");}
        else{
        printf("Password Correct!\n");

        printf("Account: %d | Balance: %.2lf\n", arr[index].number, arr[index].balance);}
        return;
    }
}
