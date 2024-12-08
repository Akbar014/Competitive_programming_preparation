
print("This is a simple function for calculationg average for the given numbers")
 
def avg(numbers):
    if not numbers:  # Check if the list is empty
        return 0    # Return 0 or any default value if needed
    average = sum(numbers) / len(numbers)  # Calculating the average here
    return average # return the result 

numbers = [1,2,3,4,5]  # list of numbers 
result = avg(numbers) # call the function and store result in result variable
print("The average is:", result)