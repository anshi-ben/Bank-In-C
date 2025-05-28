#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Customer {
  char name[10];
  char address[20];
  int phone_number;
  long money;
  long account_number;
};

void create_account(struct Customer* cust) {
  printf("\n--- Account Creation ---\n");

  printf("Enter your name: ");
  scanf("%s", cust->name);

  printf("Enter your address: ");
  scanf(" %[^\n]", cust->address);  // Accept spaces

  printf("Enter your phone number: ");
  scanf("%d", &cust->phone_number);

  cust->money = 0;
  cust->account_number = 10000 + rand() % 90000;

  printf("Account created successfully!\n");
  printf("Your account number is: %ld\n", cust->account_number);
}

void deposit_money(struct Customer* cust) {
  long put_money;
  printf("Enter amount to be deposited: ");
  scanf("%ld", &put_money);
  cust->money += put_money;
  printf("Deposit successful. Current balance: %ld\n", cust->money);
}

void view_balance(struct Customer* cust) {
  printf("Your current balance is: %ld\n", cust->money);
}

void withdraw_money(struct Customer* cust) {
  long withdraw_money;
  printf("Enter amount to withdraw: ");
  scanf("%ld", &withdraw_money);
  if (cust->money < withdraw_money) {
    printf("Insufficient funds.\n");
  } else {
    cust->money -= withdraw_money;
    printf("Withdraw successful. Remaining balance: %ld\n", cust->money);
  }
}

int main() {
  srand(time(NULL));

  struct Customer user;
  int has_account = 0;  // Flag to check if account was created

  printf("Welcome to Bank of Anshika\n");

  int choice = 0;

  while (choice != 4) {
    printf("\n============================\n");
    printf("Choose an action:\n");
    printf("0. Create account\n");
    printf("1. Deposit money\n");
    printf("2. View balance\n");
    printf("3. Withdraw money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("============================\n");

    switch (choice) {
      case 0:
        create_account(&user);
        has_account = 1;
        break;
      case 1:
        if (!has_account) {
          printf("No account exists. Please create one first.\n");
        } else {
          deposit_money(&user);
        }
        break;
      case 2:
        if (!has_account) {
          printf("No account exists. Please create one first.\n");
        } else {
          view_balance(&user);
        }
        break;
      case 3:
        if (!has_account) {
          printf("No account exists. Please create one first.\n");
        } else {
          withdraw_money(&user);
        }
        break;
      case 4:
        printf("Thank you for banking with us!\n");
        choice = 4;
        break;
      default:
        printf("Invalid choice. Please try again.\n");
        break;
    }
  }

  return 0;
}
