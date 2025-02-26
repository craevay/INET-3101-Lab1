#include <stdio.h>

#define maxRecords 100

// structure for the records
typedef struct {
    int part_number;
    char part_name[50];
    float part_size;
    char part_size_metric[50];
    float part_cost;
} Part;

Part database[maxRecords];
int record_count = 0;
int change_count = 0;

// functions
void printAllRecord();
void addRecord();
void deleteLastRecord();
void printRecordCount();
void printDatabaseSize();
void printChangeCount();
void displayMenu();

// Display menu function
void displayMenu() {
    printf("Part Database menu\n");
    printf("1. Print all records\n");
    printf("2. Add record\n");
    printf("3. Delete the last record\n");
    printf("4. Print number of records\n");
    printf("5. Print database size\n");
    printf("6. Print number of changes\n");
    printf("7. Exit\n");
}

// Function to print all records
void printAllRecords() {
    printf("You have entered the Print all records function.\n");
    if (record_count == 0) {
        printf("No records found.\n");
        return;
    }
    for (int i = 0; i < record_count; i++) {
        printf("Part number: %d\n", database[i].part_number);
        printf("Part name: %s", database[i].part_name);
        printf("Part size: %.2f\n", database[i].part_size);
        printf("Part cost: %.2f\n", database[i].part_cost);
    }
}

void addRecord() {
    if (record_count >= maxRecords) {
        printf("Database is full. Cannot add more records.\n");
        return;
    }
    Part newPart;
    printf("Part number -> ");
    scanf("%d", &newPart.part_number);
    getchar();

    printf("Part name -> ");
    fgets(newPart.part_name, sizeof(newPart.part_name), stdin);

    printf("Part size -> ");
    scanf("%f", &newPart.part_size);
    getchar();

    printf("Part size metric -> ");
    fgets(newPart.part_size_metric, sizeof(newPart.part_size_metric), stdin);

    printf("Part cost -> ");
    scanf("%f", &newPart.part_cost);
    getchar();

    printf("You entered\n");
    printf("Part number = %d\n", newPart.part_number);
    printf("Part name = %s", newPart.part_name);
    printf("Part size = %f\n", newPart.part_size);
    printf("Part size metric = %s", newPart.part_size_metric);
    printf("Part cost = %f\n", newPart.part_cost);

    //Store the new record in database
    database[record_count] = newPart;
    record_count++;
    change_count++;
}

void deleteLastRecord() {
    printf("You have entered the Delete last record function.\n");
    if (record_count == 0) {
        printf("No records to delete\n");
    }
    record_count--;
    change_count++;
}

void printRecordCount() {
    printf("\nNumber of records: %d\n", record_count);
}

void printDatabaseSize() {
    printf("\nDatabase size: %lu bytes\n", sizeof(Part) * record_count);
}

void printChangeCount() {
    printf("\nNumber of database changes: %d\n", change_count);
}

int main() {
    int choice;

    do {
        displayMenu();
        printf("Please enter a selection 1 - 7: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printAllRecords();
                break;
            case 2:
                addRecord();
                break;
            case 3:
                deleteLastRecord();
                break;
            case 4:
                printRecordCount();
                break;
            case 5:
                printDatabaseSize();
                break;
            case 6:
                printChangeCount();
                break;
            case 7:
                break;
            default:
                printf("Please enter a number 1 - 7. \n");
        }
    } while (choice != 7);
    return 0;
}