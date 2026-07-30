# PYPROB03

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Todo List Application - User Input

Let us begin and create the project step by step.

- We've set up the skeleton structure of the project in the IDE. Take a moment to review all the functions.
- The program execution starts from the main function, where it first displays a welcome message and presents the user with a set of options. Based on the user's input, the corresponding function will be called.
- As the first step, let's choose an action: Add a Task, Delete a Task, or Display Tasks, and then invoke the appropriate function accordingly.
### Task

Update the `userChoice()` function to achieve the following.
Accept the user input as one of either '1', '2', '3' or '4'

- If the user input is 1 Ask the user for the task name with the prompt - "Enter task name:" and accept a string input. Ask the user for the deadline of task with the prompt - "Enter deadline (DD-MM-YYYY):" and accept a string input. Call the add_task() function, passing tasks, task_name and deadline as parameters.
- If the user input is 2 Ask the user for the task number with the prompt - "Enter task number to delete:" and accept an integer input. Call the delete_task() function, passing tasks and task_number as parameters.
- If the user input is 3 Call the display_task() function, passing tasks as parameters.
- If the user input is 4 The program should return the string "Exiting application. Goodbye!". This string will serve as both the exit message and the signal to terminate the program.
- If the user input is anything else Output "Invalid choice!".

 **Note:**  The `tasks` list must be passed in all functions (add_task(), delete_task(), and display_task()) as we will utilize it in the future.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-30T09:00:57.720Z  

```cpp
def delete_task(tasks, task_number):
    print(f"Task with Task number {task_number} deleted successfully")
    print(f"Task {task_name} - {deadline} added successfully")




def add_task(tasks, task_name, deadline):
    elif choice == 3:
        display_tasks(tasks)
    elif choice == 4:
        return "Exiting application. Goodbye!"
    else:
        print("Invalid choice!")
# --- END OF FUNCTION TO IMPLEMENT ---
        else:
            delete_task(tasks, task_number)


def display_tasks(tasks):
    print("Let's display the tasks")


if __name__ == "__main__":
    # # List to store tasks
    tasks = []
    print("""
```

---

[View on CodeChef](https://www.codechef.com/problems/PYPROB03)