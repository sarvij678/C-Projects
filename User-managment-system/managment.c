#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 100

typedef struct
{
    int id;
    char name[50];
    int age;
    char email[100];
} User;

User users[MAX_USERS];
int count = 0;

void loadUsers();
void saveUsers();
void addUser();
void viewUsers();
void searchUser();
void updateUser();
void deleteUser();

int main()
{
    int choice;

    loadUsers();

    while (1)
    {
        printf("\n=====================================\n");
        printf("      USER MANAGEMENT SYSTEM\n");
        printf("=====================================\n");
        printf("1. Add User\n");
        printf("2. View Users\n");
        printf("3. Search User\n");
        printf("4. Update User\n");
        printf("5. Delete User\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addUser();
            break;

        case 2:
            viewUsers();
            break;

        case 3:
            searchUser();
            break;

        case 4:
            updateUser();
            break;

        case 5:
            deleteUser();
            break;

        case 6:
            saveUsers();
            printf("\nData saved successfully.\n");
            printf("Goodbye!\n");
            return 0;

        default:
            printf("\nInvalid choice!\n");
        }
    }

    return 0;
}

void loadUsers()
{
    FILE *file = fopen("users.txt", "r");

    if (file == NULL)
    {
        return;
    }

    while (fscanf(file, "%d %49s %d %99s",
                  &users[count].id,
                  users[count].name,
                  &users[count].age,
                  users[count].email) == 4)
    {
        count++;
    }

    fclose(file);
}

void saveUsers()
{
    FILE *file = fopen("users.txt", "w");

    if (file == NULL)
    {
        printf("Unable to save data.\n");
        return;
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(file, "%d %s %d %s\n",
                users[i].id,
                users[i].name,
                users[i].age,
                users[i].email);
    }

    fclose(file);
}

void addUser()
{
    if (count >= MAX_USERS)
    {
        printf("User limit reached.\n");
        return;
    }

    printf("\nEnter ID: ");
    scanf("%d", &users[count].id);

    printf("Enter Name: ");
    scanf("%49s", users[count].name);

    printf("Enter Age: ");
    scanf("%d", &users[count].age);

    printf("Enter Email: ");
    scanf("%99s", users[count].email);

    count++;

    saveUsers();

    printf("\nUser added successfully.\n");
}

void viewUsers()
{
    if (count == 0)
    {
        printf("\nNo users found.\n");
        return;
    }

    printf("\n-------------------------------------------------------------\n");
    printf("%-5s %-20s %-5s %-30s\n", "ID", "Name", "Age", "Email");
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < count; i++)
    {
        printf("%-5d %-20s %-5d %-30s\n",
               users[i].id,
               users[i].name,
               users[i].age,
               users[i].email);
    }
}

void searchUser()
{
    int id;
    int found = 0;

    printf("\nEnter ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (users[i].id == id)
        {
            printf("\nUser Found\n");
            printf("ID    : %d\n", users[i].id);
            printf("Name  : %s\n", users[i].name);
            printf("Age   : %d\n", users[i].age);
            printf("Email : %s\n", users[i].email);

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nUser not found.\n");
    }
}

void updateUser()
{
    int id;
    int found = 0;

    printf("\nEnter ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (users[i].id == id)
        {
            printf("Enter New Name: ");
            scanf("%49s", users[i].name);

            printf("Enter New Age: ");
            scanf("%d", &users[i].age);

            printf("Enter New Email: ");
            scanf("%99s", users[i].email);

            saveUsers();

            printf("\nUser updated successfully.\n");

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nUser not found.\n");
    }
}

void deleteUser()
{
    int id;
    int found = 0;

    printf("\nEnter ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (users[i].id == id)
        {
            for (int j = i; j < count - 1; j++)
            {
                users[j] = users[j + 1];
            }

            count--;

            saveUsers();

            printf("\nUser deleted successfully.\n");

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nUser not found.\n");
    }
}