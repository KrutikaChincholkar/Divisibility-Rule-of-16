num = int(input("Enter a number: "))

# Extract last 4 digits
last_four = num % 10000

if last_four % 16 == 0:
    print(num, "is divisible by 16")
else:
    print(num, "is not divisible by 16")
