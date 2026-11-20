# Bank
My program is a command-line banking system that stores data for 3 users in arrays: names, accountNumber, pins and balance. The variables option and currentUser are declared as global variables so all functions can use them.

When the program starts, main() runs a do-while loop that keeps calling the Menu() function until the user enters 5.The Menu() function displays the options and uses switch to call the correct function: checkBalance() shows the balance, depositAmount() adds money if the amount is more than 0, withdrawAmount() checks if there is enough money before subtracting tom prevent overdrawing and SendMoney() asks for an accountnumber and amount and subtracts it if there are enough funds. If the user enters 5, the program prints “Thank you. Goodbye!” and the loop stops.
