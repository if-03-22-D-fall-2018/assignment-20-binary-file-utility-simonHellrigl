# Binary File Utilities
## General Description
You are to write a number of small unix tools which maintain a binary file holding students data. The tools shall
- `init` initialize a students file
- `new_student` add new student data which is entered by the user to the file
- `list_all_students` list all student 
- `display_student` displays the student with the id as given in the command line parameter

The student's data to be stored shall consist of
- an id
- the first name
- the last name
- the age.

A typical procedure to use the tools would be:
```
Peters-MacBook-Pro-2:binary-file-utility peter$ ./init
Peters-MacBook-Pro-2:binary-file-utility peter$ ./add_student
First Name: Peter
Last Name: Bauer
Age: 42
Stored successfully
Peters-MacBook-Pro-2:binary-file-utility peter$ ./add_student
First Name: Franz
Last Name: Auernig
Age: 43
Stored successfully
Peters-MacBook-Pro-2:binary-file-utility peter$ ./add_student
First Name: Dietmar
Last Name: Steiner
Age: 35
Stored successfully
Peters-MacBook-Pro-2:binary-file-utility peter$ ./list_all_students
First Name  Last Name  Age
Peter       Bauer      42
Franz       Auernig    43
Dietmar     Steiner    35
Peters-MacBook-Pro-2:binary-file-utility peter$ ./display_student 2
First Name: Franz
Last Name: Auernig
Age: 43
```

## Init
`init` creates a file `student.dat` and writes the integer number 1 at the beginning of the file. This number is necessary to keep track of the id to be assigned to the next student which is stored to the data file

## New Student
`new_student` asks the user for the necessary student's data (first name, last name and age), assigns a new id to the student's record and stores it to the file. Take care that the id is taken from the first integer number stored. You have to guarantee that this number is not overwritten by the newly added student's record. Finally this number has to be incremented by 1 to keep track of the next id to be assigned.
