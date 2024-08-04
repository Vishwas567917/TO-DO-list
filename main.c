#include <stdio.h>
#include <string.h>

#define MAX_TASKS 100
#define MAX_LENGTH 100

typedef struct {
    char task[MAX_LENGTH];
} Task;

Task tasks[MAX_TASKS];
int taskCount = 0;

void addTask();
void viewTasks();
void deleteTask();

int main() {
    int choice;

    while (1) {
        printf("\nTo-Do List\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Delete Task\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // to consume the newline character left by scanf

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                deleteTask();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

void addTask() {
    if (taskCount >= MAX_TASKS) {
        printf("Task list is full!\n");
        return;
    }
    printf("Enter the task: ");
    fgets(tasks[taskCount].task, MAX_LENGTH, stdin);
    tasks[taskCount].task[strcspn(tasks[taskCount].task, "\n")] = 0; // remove newline character
    taskCount++;
    printf("Task added successfully!\n");
}

void viewTasks() {
    if (taskCount == 0) {
        printf("No tasks to display!\n");
        return;
    }
    printf("\nYour Tasks:\n");
    for (int i = 0; i < taskCount; i++) {
        printf("%d. %s\n", i + 1, tasks[i].task);
    }
}

void deleteTask() {
    int taskNumber;
    if (taskCount == 0) {
        printf("No tasks to delete!\n");
        return;
    }
    printf("Enter the task number to delete: ");
    scanf("%d", &taskNumber);
    getchar(); // to consume the newline character left by scanf

    if (taskNumber < 1 || taskNumber > taskCount) {
        printf("Invalid task number!\n");
        return;
    }
    for (int i = taskNumber - 1; i < taskCount - 1; i++) {
        strcpy(tasks[i].task, tasks[i + 1].task);
    }
    taskCount--;
    printf("Task deleted successfully!\n");
}
