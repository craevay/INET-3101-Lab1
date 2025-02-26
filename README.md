# INET-3101-Lab1
Code for INET 3101 Lab

Huy Tran

This program will prompt the user with 7 options: 
 - Print all records
 - Add a record, delete the last record
 - Print number of records,
 - Print data basesize
 - Print number of changes
 - Exit the prompted menu. 

Choosing the corresponding number will give the user either an 
actionable or texts. The user will likely have to add records to the
database before using any of the print or delete options. to add a 
record the user will have to enter a record's number, name, size, size
metric, and cost. Repeatedly doing this will fill up the database up to
100 records in which will prevent the user from adding any more.

 - Print all records will print any record in the database and include it's 
number, name, size, and cost.
 - Add records will as the the user to enter a record's number, name, size, 
size metric, and cost. 
 - Delete last record will delete the most recently added record. 
 - Print database size will print the size of records by number of records in the database. 
 - print number of changes will print the amount of actions the user has completed. 
 - Finally exit will quit the running program.

printAllRecords
 - None
 - Void
 - Iterates through database[] looping until i reaches record_count

addRecord
 - User input(int, string, float)
 - Void
 - Checks if record_count >= maxRecord, store user input in database[record_count]
record_count & change_count + 1

deleteLastRecord
 - None
 - Void
 - Check record_count == 0, if false remove database[record_count], record_count -1
change_count + 1

printRecordCount
 - None
 - Void
 - Print record_count

printDatabaseSize
 - None
 - Void
 - Print change_count

Lab.c
