def traverse_directories(num_dirs, directories):
    cd_count = 0
    ls_count = 0
    path = "C:\\Users>"
    traversal = []

    for directory in directories:
        path += f" {directory}"
        traversal.append(path)
        cd_count += 1
        ls_count += 1
    
    # Show the required output
    print(cd_count)
    print(ls_count)
    print(path)
    
    for path in traversal:
        print(path)

# Example input based on the problem
num_dirs = 5
directories = ["IT Clash", "123gcc", "cmd.py", "script.js", "Target"]

# Call the function to process
traverse_directories(num_dirs, directories)
