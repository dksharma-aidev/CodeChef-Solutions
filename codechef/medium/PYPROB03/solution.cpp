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