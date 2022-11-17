[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-9f69c29eadd1a2efcce9672406de9a39573de1bdf5953fef360cfc2c3f7d7205.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=9378710)
# CS202-Lab9_TemplateClassesAndOverloads

## Lab Goals
The goal of this Lab is to:
1.	Allow students to create a program which uses a **template class**.
2.  Allow students to create a program which uses friend functions to overload an operator.
### Important Notes:
1.	**Comments**:  Links to outside resources have been provided in the code as comments. These resources are immensely useful, because creating a template class impacts the creation of an overloaded insertion operator. Please _review_ these resources before asking for help.
2.  **Executable**: The executable should be named ```arrayCalc``` (which is what's already in the makefile).
3.  **Partners**: You _may_ work with a partner on this lab, if you so choose. If you work individually, your work is still due at the same time as your peers.
4.  **Example**: I have provided an example executable called _arrayCalculator_, and you will likely have to do chmod u+x to fix any permission errors. Please use it to look at what the formatted output looks like once double arrays are able to be used. The makefile currently generates arrayCalc and it only works on int arrays.
## Program

The following files have been provided:
```
- driver.cpp
- arrayCalculator.h
- arrayCalculator.cpp
- makefile  
```

**After your modifications, the program should behave as follows:**  
The program should be able to calculate the sum, product, difference, and quotient of all values in any array, __regardless__ of datatype. This requires you to template the arrayCalculator class. The program should then display the values it has calculated using an insertion stream overload. 

Here is an example of how the program could function using the following files as input:

```
>./arrayCalc


INT ARRAY!
Array Sum: 55
Array Difference: -55
Array Product: 3628800
Array Quotient: 0


DOUBLE ARRAY!
Array Sum: 25.63
Array Difference: -25.63
Array Product: 64.94
Array Quotient: 0.00271635

```
## Requirements
```
driver.cpp

```
*main()*  
**Functionality**: The main function already creates the arrays of objects you'll be needing. You will need to revise main so that instead of couting directly from main, you use an insertion operator overload, and you calculate the sum, product, difference, and quotient of the doubles array (this is currently not enabled, but the array is provided). 

*insertion operator overload()*
**Note**: Declare the overload in the arrayCalculator class, but implement it in the driver. 
**Funtionality**: It should direct the needed output from the arrayCalculator class into an output stream, and then return that output stream. There is a link in arrayCalculator.h that provides a great example of how to implement an insertion stream operator overload on a templated class. 

```
arrayCalculator.h
```
**Functionality**: In addition to the existing functionality, this class should be made into a template class by replacing static instances of int having to do with Sum/Difference/Product/Quotient with the template. You should also declare your insertion operator overload friend function here. There is a link to an additional resource on declaring a friend function overload from a templated class in the file.
```
arrayCalculator.cpp
```
**Functionality**: In addition to the existing functionality, this file should be modified so that all functions are templated and any static instances of int having to do with the properties should be changed to template type. Additionally, you will need to forward declare array calculators for int and double.  There is a link to an additional resource on forward declaration in the file.
```


## Submission details
To submit your project, you will have to use git on your VirtualBox installation:
1.	After accepting the assignment invitation, copy the clone URL
2.	Type 
```git clone clone_URL```
3.	cd into your new assignment directory
4.	After working on your files
5.	When you’re ready, type the following commands: 
```
git add .
git commit -m “your commit message”
git push
```
## Academic Honesty
Academic dishonesty is against university as well as the system community standards. Academic dishonesty includes, but is not limited to, the following:
Plagiarism: defined as submitting the language, ideas, thoughts or work of another as one's own; or assisting in the act of plagiarism by allowing one's work to be used in this fashion.
Cheating: defined as (1) obtaining or providing unauthorized information during an examination through verbal, visual or unauthorized use of books, notes, text and other materials; (2) obtaining or providing information concerning all or part of an examination prior to that examination; (3) taking an examination for another student, or arranging for another person to take an exam in one's place; (4) altering or changing test answers after submittal for grading, grades after grades have been awarded, or other academic records once these are official.
Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic
dishonesty according to the code of this university. Academic dishonesty will not be tolerated and
penalties can include cancelling a student’s enrolment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.
