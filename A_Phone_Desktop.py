def minimum_screens(x, y):
    # Each screen can hold 15 cells
    total_cells_needed = x + (4 * y)
    
    # Each 2x2 icon needs 4 cells and at least 1 screen for up to 3 icons, thus require floor(y/3)+1 screens
    screens_for_2x2 = y // 3
    if y % 3 != 0:
        screens_for_2x2 += 1
        
    # Calculate the cells occupied by the 2x2 icons
    cells_for_2x2 = y * 4
    
    # Remaining cells available on the screens already used for 2x2 icons
    remaining_cells = (screens_for_2x2 * 15) - cells_for_2x2
    
    # Calculate remaining 1x1 icons that couldn't fit in the occupied screens
    remaining_1x1_icons = max(0, x - remaining_cells)
    
    # Calculate the additional screens needed for remaining 1x1 icons
    additional_screens_for_1x1 = (remaining_1x1_icons + 14) // 15  # Use ceiling division to determine the number of screens
    
    # Total screens needed
    total_screens_needed = screens_for_2x2 + additional_screens_for_1x1
    
    return total_screens_needed

# Read number of test cases
t = int(input().strip())

results = []

# Process each test case
for _ in range(t):
    x, y = map(int, input().split())
    results.append(minimum_screens(x, y))

# Print the results for each test case
for result in results:
    print(result)
