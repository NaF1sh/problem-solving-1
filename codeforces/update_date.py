import datetime

# File paths
source_file = "test1.cpp"
output_file = "test1_with_date.cpp"

# Get current date and time
current_datetime = datetime.datetime.now().strftime("%b %d %Y %H:%M:%S")

# Read the source file
with open(source_file, "r") as file:
    lines = file.readlines()

# Insert the compilation info as a comment
for i, line in enumerate(lines):
    if "// === Compilation Info ===" in line:
        lines[i + 1] = f"// Compiled on: {current_datetime}\n"
        break

# Write the updated source code to a new file
with open(output_file, "w") as file:
    file.writelines(lines)

print(f"Updated source code written to {output_file}")