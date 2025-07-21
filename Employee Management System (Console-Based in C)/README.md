# 🧑‍💼 Employee Management System (Console-Based in C)

This is a simple **Console-Based Employee Management System** built using the **C programming language**. It uses `struct` for employee records and demonstrates basic operations like Add, Read, Update, and Delete (CRUD).

---

## 🚀 Features

- ✅ Add Employee (with Unique ID validation)
- 📋 Read/Display All Employees
- ✏️ Update Employee Details
- 🗑️ Delete Employee (with record shifting)
- 🛑 Exit Program

---

## 🛠️ Technologies Used

- **Language**: C
- **Compiler**: GCC / any C compiler
- **Environment**: Console/Terminal

---

## 📦 Project Structure

employee_management_system.c # Main program file

## 📋 Sample Output
Add Employee

Read Employees

Update Employee

Delete Employee

Exit
Enter your choice: 1

Enter Employee ID: 101
Enter Employee Name: John
Enter Employee Salary: 50000
Employee added successfully!


---

## 💡 How It Works

- Employees are stored in an array of `struct Employee`
- Max 2 employees (fixed size, for simplicity)
- All operations are done in memory (no file storage)
- ID must be **unique** for each employee
- `deleteEmployee()` shifts remaining employees to keep the array clean

---

## 📌 Limitations

- Array size is fixed to 2 employees (for demonstration)
- No file handling or persistent storage
- No dynamic memory (`malloc`) used

---

## 🧪 How to Run

### 💻 Using GCC Compiler

```bash
gcc employee_management_system.c -o ems
./ems

```

### 🙌 Author
## Akshada Sondekar
📅 Project Submitted as part of C Programming 
