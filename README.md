# INET-3101-Lab1
Code for INET 3101 Lab

Huy Tran

This program provides a simple database management system that allows users to interact with records through a menu-driven interface. The user is presented with **seven options**:  

1. **Print all records** – Displays all stored records, including their number, name, size, and cost.  
2. **Add a record** – Allows the user to enter a new record with the following details:  
   - Record number  
   - Name  
   - Size  
   - Size metric  
   - Cost  
3. **Delete the last record** – Removes the most recently added record.  
4. **Print number of records** – Displays the current number of records in the database.  
5. **Print database size** – Outputs the total number of records stored.  
6. **Print number of changes** – Shows how many actions (additions/deletions) have been performed.  
7. **Exit** – Terminates the program.  

### Important Notes  
- Users must **add records before using print or delete options**.  
- The database has a **maximum capacity of 100 records**; no further records can be added once this limit is reached.  

---

## Function Descriptions  

### `printAllRecords()`  
- **Parameters:** None  
- **Return Type:** `void`  
- **Functionality:**  
  - Iterates through `database[]` and prints each record until `record_count` is reached.  

### `addRecord()`  
- **Parameters:** User input (`int`, `string`, `float`)  
- **Return Type:** `void`  
- **Functionality:**  
  - Checks if `record_count >= maxRecord`.  
  - If within limits, stores user input in `database[record_count]`.  
  - Increments `record_count` and `change_count`.  

### `deleteLastRecord()`  
- **Parameters:** None  
- **Return Type:** `void`  
- **Functionality:**  
  - Checks if `record_count == 0`.  
  - If false, removes `database[record_count]`, decrements `record_count`, and increments `change_count`.  

### `printRecordCount()`  
- **Parameters:** None  
- **Return Type:** `void`  
- **Functionality:**  
  - Prints the total number of records in the database.  

### `printDatabaseSize()`  
- **Parameters:** None  
- **Return Type:** `void`  
- **Functionality:**  
  - Prints `change_count`, indicating the number of user actions performed.
