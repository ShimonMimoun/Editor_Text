# ***Editor Command Meaning:***

Using C++
On Linux, run the command:

    ed <input.txt

The output obtained should be the same as the out.txt file
 You must write an editor program that if we run it:

    a.out <input.txt

We will get the same output as the out.txt file
***

## n

 prints line number of current line followed by TAB followed by current line 
***
## %p
prints all lines (ed maintains a current line) 
***
## number
makes line #number the current line a appends new text after the current line
***
## number1 ,number2 j 

Connect row number1 and row number2 to one row.
The current row is number1 , the number of rows in a small file is 1.
 ***
## i
inserts new text before the current line 
***
## c 
changes the current line for text that follows 
***
## d 
deletes the current line 
***
## /text 
searches forward after current line for the specified text 
***
## ?text
 searches backward 
 ***
 ## s/old/new/ 
 replaces old string with new in current line (google: C++ split or token) 
 ***
 ## Q 
 Quits the editor without saving
 ***
