# Electricity Bill Calculator in C

## Explanation

The Electricity Bill Calculator is a C-based project that calculates the electricity bill according to the number of units consumed.

The program uses different billing rates for different ranges of electricity consumption. This project demonstrates the practical use of conditional statements and arithmetic operations in C.

## Problem Statement

Develop a C program to calculate an electricity bill based on the number of units consumed.

The program should:

* Accept electricity units as input
* Apply the appropriate billing slab
* Calculate the total bill
* Display the units consumed
* Display the final electricity bill

## Billing Slabs

| Units     |          Rate |
| --------- | ------------: |
| 1 - 100   | Rs. 1.50/unit |
| 101 - 200 | Rs. 2.50/unit |
| 201 - 500 | Rs. 4.00/unit |
| Above 500 | Rs. 6.00/unit |

The slab calculation is progressive, meaning each range is charged at its corresponding rate.

## Features

* Accepts electricity consumption
* Uses slab-based billing
* Calculates the bill automatically
* Handles invalid input
* Displays a formatted bill
* Simple console-based application

## How It Works

1. The user enters the number of electricity units consumed.
2. The program checks which billing slab applies.
3. Each portion of the consumption is multiplied by its corresponding rate.
4. The charges from all applicable slabs are added.
5. The final electricity bill is displayed.

## Technologies Used

* C Programming Language
* GCC Compiler
* Standard Input/Output Library

## Data Structure Used

No advanced data structure is required.

The program uses basic variables to store:

* Electricity units
* Bill amount

## Methods Used

* `main()`
* `if-else if-else`
* Arithmetic operations
* Relational operators
* Standard input/output functions

## Program Flow

```text id="w6ajk9"
Start
  ↓
Read Units Consumed
  ↓
Check Units
  ↓
Select Applicable Billing Slab
  ↓
Calculate Charges
  ↓
Add Charges
  ↓
Display Total Bill
  ↓
End
```

## Sample Input

```text id="x7s7cp"
===== Electricity Bill Calculator =====
Enter electricity units consumed: 350
```

## Sample Output

```text id="xw7wz0"
===== Electricity Bill =====
Units Consumed : 350
Total Bill     : Rs. 800.00
```

## Time Complexity

`O(1)`

The program performs a fixed number of conditional checks regardless of the number of units.

## Space Complexity

`O(1)`

Only a constant amount of memory is used.

## Key Learning

* Understanding conditional statements
* Implementing slab-based calculations
* Using arithmetic operations
* Applying real-world billing logic
* Handling invalid input
* Formatting numerical output in C

## File Location

```text id="z7qj5m"
electricity_bill_calculator.c
```

## Repository Structure

```text id="y7s3jo"
c-electricity-bill-calculator/
│
├── electricity_bill_calculator.c
└── README.md
```

## Author

V.Harini
