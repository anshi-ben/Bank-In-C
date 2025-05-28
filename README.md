# Bank of Anshika - Simple Banking System

## Description

This is a basic C console application that simulates a simple banking system. Users can create a bank account, deposit money, view their balance, and withdraw funds. The application uses a `Customer` structure to store user information and account details.

## Features

* Create a bank account with name, address, and phone number
* Deposit money into the account
* View current account balance
* Withdraw money from the account
* Generate a random account number upon creation

## How to Compile

Use the following command to compile the program using `gcc`:

```bash
gcc -o bank_app bank.c
```

Replace `bank.c` with the name of your source file if it's different.

## How to Run

After compiling, run the executable:

```bash
./bank_app
```

## Program Flow

1. **Create Account** - Input your name, address, and phone number to create an account.
2. **Deposit Money** - Add money to your account.
3. **View Balance** - See your current balance.
4. **Withdraw Money** - Take out money from your account.
5. **Exit** - Quit the application.

Note: You must create an account before you can deposit, view, or withdraw money.
