#include <iostream>
#include <string>

using namespace std;

int main() {
    double balance = 1000.0;          // Initial starting balance
    const double MIN_BALANCE = 500.0; // Minimum balance limit required

    // Parallel arrays to store the last 5 transactions
    string txTypes[5];
    double txAmounts[5];
    int txCount = 0; // Tracks total transactions added (up to 5)

    int choice;

    do {
        // Display Menu
        cout << "\n=====================================\n";
        cout << "           BANKING SYSTEM            \n";
        cout << "=====================================\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Calculate Interest (5% if > 10,000)\n";
        cout << "4. Display Current Balance\n";
        cout << "5. Show Transaction History (Last 5)\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            // 1. DEPOSIT MONEY
            case 1: {
                double depositAmount;
                cout << "\nEnter amount to deposit: ";
                cin >> depositAmount;

                if (depositAmount <= 0) {
                    cout << "Invalid deposit amount!\n";
                } else {
                    balance += depositAmount;
                    cout << "Successfully deposited $" << depositAmount << endl;

                    // Add to transaction history
                    if (txCount < 5) {
                        txTypes[txCount] = "Deposit";
                        txAmounts[txCount] = depositAmount;
                        txCount++;
                    } else {
                        // Shift older transactions left to make room for new one
                        for (int i = 0; i < 4; i++) {
                            txTypes[i] = txTypes[i + 1];
                            txAmounts[i] = txAmounts[i + 1];
                        }
                        txTypes[4] = "Deposit";
                        txAmounts[4] = depositAmount;
                    }
                }
                break;
            }

            // 2. WITHDRAW MONEY
            case 2: {
                double withdrawAmount;
                cout << "\nEnter amount to withdraw: ";
                cin >> withdrawAmount;

                if (withdrawAmount <= 0) {
                    cout << "Invalid withdrawal amount!\n";
                } else if (balance - withdrawAmount < MIN_BALANCE) {
                    cout << "Transaction denied! You must maintain a minimum balance of $" 
                         << MIN_BALANCE << endl;
                } else {
                    balance -= withdrawAmount;
                    cout << "Successfully withdrew $" << withdrawAmount << endl;

                    // Add to transaction history
                    if (txCount < 5) {
                        txTypes[txCount] = "Withdrawal";
                        txAmounts[txCount] = withdrawAmount;
                        txCount++;
                    } else {
                        // Shift older transactions left
                        for (int i = 0; i < 4; i++) {
                            txTypes[i] = txTypes[i + 1];
                            txAmounts[i] = txAmounts[i + 1];
                        }
                        txTypes[4] = "Withdrawal";
                        txAmounts[4] = withdrawAmount;
                    }
                }
                break;
            }

            // 3. CALCULATE INTEREST
            case 3: {
                if (balance > 10000.0) {
                    double interest = balance * 0.05; // 5% interest
                    balance += interest;
                    cout << "\nInterest added: $" << interest << " (5% on balance over $10,000)\n";

                    // Add to transaction history
                    if (txCount < 5) {
                        txTypes[txCount] = "Interest (5%)";
                        txAmounts[txCount] = interest;
                        txCount++;
                    } else {
                        // Shift older transactions left
                        for (int i = 0; i < 4; i++) {
                            txTypes[i] = txTypes[i + 1];
                            txAmounts[i] = txAmounts[i + 1];
                        }
                        txTypes[4] = "Interest (5%)";
                        txAmounts[4] = interest;
                    }
                } else {
                    cout << "\nInterest not applicable. Balance must be greater than $10,000.\n";
                }
                break;
            }

            // 4. DISPLAY CURRENT BALANCE
            case 4: {
                cout << "\n-------------------------------------\n";
                cout << "Current Balance: $" << balance << endl;
                cout << "Minimum Balance Limit: $" << MIN_BALANCE << endl;
                cout << "-------------------------------------\n";
                break;
            }

            // 5. SHOW TRANSACTION HISTORY
            case 5: {
                cout << "\n--- Last 5 Transactions ---\n";
                if (txCount == 0) {
                    cout << "No transactions performed yet.\n";
                } else {
                    for (int i = 0; i < txCount; i++) {
                        cout << (i + 1) << ". " << txTypes[i] 
                             << ": $" << txAmounts[i] << endl;
                    }
                }
                break;
            }

            // 6. EXIT
            case 6: {
                cout << "\nThank you for using our bank! Goodbye.\n";
                break;
            }

            default: {
                cout << "\nInvalid choice! Please select an option between 1 and 6.\n";
                break;
            }
        }

    } while (choice != 6);

    return 0;
}
