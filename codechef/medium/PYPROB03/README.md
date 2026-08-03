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
**Submitted:** 2026-08-03T17:53:27.189Z  

```cpp
            break
        value  = userChoice(choice, tasks)
        if value == "Exiting application. Goodbye!":
            print(value)
    while True:
        print("Choose one operation:")
        print("1. Add Task")
        print("2. Delete Task")
        print("3. Display Tasks")
        print("4. Exit")
        
        choice = int(input("Enter your choice: "))
```

---

[View on CodeChef](https://www.codechef.com/problems/PYPROB03)