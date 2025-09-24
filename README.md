# Student Grade Tracker (C++)

Small console app to store students (ID, name, 3 exams) and compute stats.

## Features
- Add a student
- Update a student by **ID**
- Display all students with per-student mean
- Class stats: **mean**, **min mean**, **max mean**

## Data Model
`Student { id, first, last, exam1, exam2, exam3, mean }`  
Mean = `(exam1 + exam2 + exam3) / 3.0`

## Build
If you have `main.cpp` + `student_ops.cpp` + `hwk1.h`:
```bash
g++ -std=c++17 -O2 -Wall -Wextra -o grade_tracker main.cpp student_ops.cpp
