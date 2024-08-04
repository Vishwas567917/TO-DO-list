# To-Do List Application

This project is a simple console-based To-Do List application implemented in C. It allows users to add tasks, view tasks, and delete tasks from their to-do list.

## Features

- Add tasks to the to-do list.
- View all tasks in the to-do list.
- Delete tasks from the to-do list.

## Technologies Used

- **C**: The programming language used to implement the application.

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/to-do-list.git
2. Navigate to the project directory:
   ```bash
   cd to-do-list
3. Compile the code using a C compiler:
```bash
  gcc -o todo todo.c

4.Run the executable:
```bash
./todo

Usage
1. Run the program.
2. You will be presented with a menu:
To-Do List
1. Add Task
2. View Tasks
3. Delete Task
4. Exit
Enter your choice: 

Enter the number corresponding to your choice.
1. Add Task: Enter the task description when prompted.
2. View Tasks: Displays all the tasks in the list.
3. Delete Task: Enter the task number to delete it from the list.
4. Exit: Exits the application.

Examples Output:
To-Do List
1. Add Task
2. View Tasks
3. Delete Task
4. Exit
Enter your choice: 1
Enter the task: Buy groceries
Task added successfully!

To-Do List
1. Add Task
2. View Tasks
3. Delete Task
4. Exit
Enter your choice: 2

Your Tasks:
1. Buy groceries

To-Do List
1. Add Task
2. View Tasks
3. Delete Task
4. Exit
Enter your choice: 3
Enter the task number to delete: 1
Task deleted successfully!


File Structure
todo.c: Main C file containing the To-Do List application implementation.
