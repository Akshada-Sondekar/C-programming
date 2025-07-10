# 🏦 ATM Withdrawal System in C

This project is a simple C program that simulates an **ATM withdrawal system**.  
It demonstrates how to use a function with **parameters** and a **return value** to handle balance checks and withdrawal logic.

---

## 🧠 Learning Purpose

This program was created as part of my learning journey with **C functions**.  
I applied a **real-world ATM use case** to understand:

- How to **pass values (parameters)** into functions
- How to **return results** (updated balance)
- Implementing conditional logic for **insufficient funds**
- Creating clean, user-friendly console outputs

This is a logic-based project to reinforce the use of **parameterized functions with return values**.

---

## ✅ Function Type Used

| Feature       | Used       |
|---------------|------------|
| Parameters    | ✅ Yes      |
| Return Value  | ✅ Yes      |
| Function Type | `float withdraw(float, float);` |

---

### 🧪 Sample Output

Welcome to ATM
Your current balance: ₹5000.00
Enter amount to withdraw: ₹1500
✅ Withdrawal of ₹1500.00 successful!
Your updated balance: ₹3500.00


Welcome to ATM
Your current balance: ₹5000.00
Enter amount to withdraw: ₹6000
❌ Insufficient balance!
Your updated balance: ₹5000.00


### 🛠 How to Compile and Run (MinGW on Windows)
🔧 Compile:
bash

gcc main.c -o atm.exe

▶️ Run:
bash

atm.exe

Make sure MinGW is installed and gcc is added to your PATH.
Example: C:\MinGW\bin


### 📂 Project Structure

atm-withdrawal-c/
├── main.c         # Source code
├── README.md      # Project description


### 📚 Concepts Covered
C Functions

Parameters and return values

Conditional statements (if-else)

Basic console input/output

MinGW usage in VS Code

### 🏷️ Tags
C Functions ATM System Beginner C Project With Param & Return MinGW

