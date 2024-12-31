#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

typedef struct {
    int bookid;
    char bookname[50];
    char title[50];
    char author[50];
    int status;  // 0 = Available, 1 = Issued
    int user_id; // ID of the user who issued the book
    int due_day; // Due day for returning the book
} Book;

typedef struct {
    int userid;
    char username[20];
    char password[20];
    int books_issued;
    int fine;
} User;

void LoginMenu() {
    printf("\n=================================================");
    printf("\n\t Library Management System");
    printf("\n=================================================");
    printf("\n1. User Login ");
    printf("\n2. Admin Login ");
    printf("\n3. Exit");
    printf("\nEnter Your Choice : ");
}

int UserLogin(FILE *uf, User *current_user) {
    User u;
    char username[20], password[20];
    printf("\nEnter Username: ");
    scanf("%s", username);
    printf("Enter Password: ");
    scanf("%s", password);

    rewind(uf);
    while (fread(&u, sizeof(u), 1, uf)) {
        if (strcmp(u.username, username) == 0 && strcmp(u.password, password) == 0) {
            *current_user = u;
            return 1; // Successful login
        }
    }
    return 0; // Login failed
}

int AdminLogin() {
    char admin_username[] = "admin";
    char admin_password[] = "admin123";
    char username[20], password[20];

    printf("\nEnter Admin Username: ");
    scanf("%s", username);
    printf("Enter Admin Password: ");
    scanf("%s", password);

    if (strcmp(admin_username, username) == 0 && strcmp(admin_password, password) == 0) {
        return 1; // Admin login successful
    }
    return 0; // Admin login failed
}

void AdminDashboard() {
    printf("\nWelcome to the admin dashboard");
    printf("\n1. View Books");
    printf("\n2. Add New Books");
    printf("\n3. Edit Book Information");
    printf("\n4. Delete Books");
    printf("\n5. Issue a Book");
    printf("\n6. Return Book");
    printf("\n7. View All Users");
    printf("\n8. Add New Members");
    printf("\n9. Edit Member Information");
    printf("\n10. Delete Members");
    printf("\n11. Logout");
    printf("\nEnter Your Choice: ");
}

void UserDashboard() {
    printf("\nWelcome to user dashboard");
    printf("\n1. View Available books");
    printf("\n2. Book Issue Due Date Check");
    printf("\n3. View Fine Details");
    printf("\n4. Logout");
    printf("\nEnter Your Choice : ");
}

void AddBook(FILE *bf) {
    Book b;
    fseek(bf, 0, SEEK_END);
    printf("\nEnter Book ID: ");
    scanf("%d", &b.bookid);
    printf("Enter Book Name: ");
    scanf("%s", b.bookname);
    printf("Enter Book Title: ");
    scanf("%s", b.title);
    printf("Enter Book Author: ");
    scanf("%s", b.author);
    b.status = 0;
    b.user_id = -1;
    b.due_day = 0;
    fwrite(&b, sizeof(b), 1, bf);
    printf("Book Added Successfully.\n");
    getch(); // Wait for the user to press a key before continuing
    clrscr(); // Clear the screen
}

void ViewBooks(FILE *bf) {
    Book b;
    rewind(bf);
    printf("\nBook ID \t Name \t\t Title \t\t Author \t Status\n");
    while (fread(&b, sizeof(b), 1, bf)) {
        printf("%d \t\t %s \t\t %s \t\t %s \t\t %s\n", b.bookid, b.bookname, b.title, b.author, b.status == 0 ? "Available" : "Issued");
    }
    getch(); // Wait for the user to press a key before continuing
    clrscr(); // Clear the screen
}
void EditBook(FILE *bf) {
    Book b;
    int id;
    int flag = 0;
    long recsize = sizeof(Book);

    rewind(bf);
    printf("\nEnter Book ID to Modify: ");
    scanf("%d", &id);

    while (fread(&b, recsize, 1, bf)) {
        if (id == b.bookid) {
            flag = 1;
            fseek(bf, -recsize, SEEK_CUR);
            printf("\nEnter New Book ID: ");
            scanf("%d", &b.bookid);
            printf("Enter New Book Name: ");
            scanf("%s", b.bookname);
            printf("Enter New Book Title: ");
            scanf("%s", b.title);
            printf("Enter New Book Author: ");
            scanf("%s", b.author);
            fwrite(&b, recsize, 1, bf);
            printf("\nRecord Modified Successfully\n");
            break;
        }
    }

    if (flag == 0) {
        printf("\nBook with ID %d not found.\n", id);
    }
} 
void DeleteBook(FILE *bf) {
    Book b;
    FILE *temp = fopen("temp.dat", "wb");
    int id, found = 0;

    printf("Enter Book ID to delete: ");
    scanf("%d", &id);

    rewind(bf);
    while (fread(&b, sizeof(b), 1, bf)) {
        if (b.bookid != id) {
            fwrite(&b, sizeof(b), 1, temp);
        } else {
            found = 1;  // Mark that we found the book to delete
        }
    }
    
    fclose(bf);
    fclose(temp);

    remove("book.dat");
    rename("temp.dat", "book.dat");

    
    bf = fopen("book.dat", "rb+");

    
    if (found) {
        printf("Book with ID %d deleted successfully.\n", id);
    } else {
        printf("Book with ID %d not found.\n", id);
    }

    getch(); 
    clrscr();
}

void AddUser(FILE *uf) {
    User u;
    fseek(uf, 0, SEEK_END);
    printf("\nEnter User ID: ");
    scanf("%d", &u.userid);
    printf("Enter Username: ");
    scanf("%s", u.username);
    printf("Enter Password: ");
    scanf("%s", u.password);
    u.books_issued = 0;
    u.fine = 0;
    fwrite(&u, sizeof(u), 1, uf);
    printf("User Added Successfully.\n");
    getch(); // Wait for the user to press a key before continuing
    clrscr(); // Clear the screen
}
void EditUser(FILE *uf) {
    User u;
    int userid;
    int found = 0;
    long recsize = sizeof(User);

    rewind(uf);
    printf("Enter User ID to Edit: ");
    scanf("%d", &userid);

    while (fread(&u, recsize, 1, uf)) {
        if (userid == u.userid) {
            found = 1;
            fseek(uf, -recsize, SEEK_CUR);
            printf("\nEditing User: %s\n", u.username);
            printf("Enter New Username: ");
            scanf("%s", u.username);
            printf("Enter New Password: ");
            scanf("%s", u.password);
            fwrite(&u, recsize, 1, uf);
            printf("\nUser Edited Successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("\nUser ID %d not found.\n", userid);
    }
}
void DeleteUser(FILE **uf) {
    User u;
    FILE *tempFile = fopen("temp_user.dat", "wb+");
    int userid, found = 0;
    
    printf("Enter User ID to Delete: ");
    scanf("%d", &userid);

    rewind(*uf);
    while (fread(&u, sizeof(u), 1, *uf)) {
        if (u.userid == userid) {
            found = 1;
            continue;  // Skip the user to delete them
        }
        fwrite(&u, sizeof(u), 1, tempFile);
    }

    fclose(*uf);      // Close the original user file
    fclose(tempFile); // Close the temporary file

    remove("user.dat");                  // Delete the original file
    rename("temp_user.dat", "user.dat");  // Rename temp to user.dat

    // Reopen user.dat in read-write mode to continue using it
    *uf = fopen("user.dat", "rb+");
    if (*uf == NULL) {
        printf("Error reopening user file.\n");
        exit(1);  // Exit if reopening fails
    }

    if (found) {
        printf("User Deleted Successfully.\n");
    } else {
        printf("User ID %d not found.\n", userid);
    }

    getch();
    clrscr();
}
void ViewUsers(FILE *uf) {
    User u;
    rewind(uf);
    printf("\nUser ID \t Username \t Books Issued \t Fine\n");
    while (fread(&u, sizeof(u), 1, uf)) {
	printf("%d \t\t %s \t\t %d \t\t %d\n", u.userid, u.username, u.books_issued, u.fine);
    }
    getch();
    clrscr();
}
void IssueBook(FILE *bf, FILE *uf) {
    int bookid, userid;
    int book_found = 0, user_found = 0;
    Book b;
    User u;

    // Ensure files are open in the correct mode for reading and writing
    if (bf == NULL || uf == NULL) {
        printf("Error opening files.\n");
        return;
    }

    // Get Book ID and User ID from user
    printf("Enter Book ID to Issue: ");
    scanf("%d", &bookid);
    printf("Enter User ID: ");
    scanf("%d", &userid);

    // Reset file pointers to the beginning for a fresh search
    rewind(bf);
    rewind(uf);

    // Search for the book in the book file
    while (fread(&b, sizeof(Book), 1, bf)) {
        if (b.bookid == bookid && b.status == 0) {  // Book found and available
            book_found = 1;
            break;
        }
    }

    // Reset file pointer to beginning before searching for the user
    rewind(uf);

    // Search for the user in the user file
    while (fread(&u, sizeof(User), 1, uf)) {
        if (u.userid == userid) {  // User found
            user_found = 1;
            break;
        }
    }

    // Check if both book and user are found
    if (book_found && user_found) {
        // Update book details
        b.status = 1;  // Book is issued
        b.user_id = u.userid;
        b.due_day = 30;  // Set due date to 30 days

        // Move file pointer back to the book's position in file and write updated info
        fseek(bf, -sizeof(Book), SEEK_CUR);
        if (fwrite(&b, sizeof(Book), 1, bf) != 1) {
            printf("Error updating book record.\n");
            return;
        }

        // Update user details
        u.books_issued++;

        // Move file pointer back to the user's position in file and write updated info
        fseek(uf, -sizeof(User), SEEK_CUR);
        if (fwrite(&u, sizeof(User), 1, uf) != 1) {
            printf("Error updating user record.\n");
            return;
        }

        printf("Book Issued Successfully.\n");
    } else {
        // Display relevant error messages
        if (!book_found) {
            printf("Book not available or not found.\n");
        }
        if (!user_found) {
            printf("User not found.\n");
        }
    }
}

void ViewFine(User *current_user) {
    printf("\nYour Fine: %d\n", current_user->fine);
    getch();
    clrscr();
}

void BookDueCheck(User *current_user) {
    printf("\nYour Book Due Day: %d\n", current_user->fine); 
    getch();
    clrscr();
}
void main() {
    FILE *bookFile, *userFile;
    User current_user;
    int choice, login_choice, admin_choice;

    // Open files
    bookFile = fopen("book.dat", "rb+");
    if (bookFile == NULL) {
	bookFile = fopen("book.dat", "wb+");
    }
    userFile = fopen("user.dat", "rb+");
    if (userFile == NULL) {
	userFile = fopen("user.dat", "wb+");
    }

    do {
	clrscr();
	LoginMenu();
	scanf("%d", &login_choice);

	if (login_choice == 1) {  // User Login
	    if (UserLogin(userFile, &current_user)) {
		do {
		    clrscr();
		    UserDashboard();
		    scanf("%d", &choice);
		    switch (choice) {
			case 1: // View Available Books
			    ViewBooks(bookFile);
			    break;
			case 2: // Check Book Due Date
			    BookDueCheck(&current_user);
			    break;
			case 3: // View Fine Details
			    ViewFine(&current_user);
			    break;
			case 4: // Logout
			    break;
			default:
			    printf("Invalid Choice!\n");
			    break;

		    }
		} while (choice != 4); // User Logout
	    } else {
		printf("Invalid Username or Password.\n");
		getch();
	    }
	} else if (login_choice == 2) {  // Admin Login
	    if (AdminLogin()) {
		do {
		    clrscr();
		    AdminDashboard();
		    scanf("%d", &admin_choice);
		    switch (admin_choice) {
			case 1: // View Books
			    ViewBooks(bookFile);
			    break;
			case 2: // Add New Books
			    AddBook(bookFile);
			    break;
			case 3: // Edit Book Information
			    EditBook(bookFile);
			    break;
			case 4: // Delete Books
			    DeleteBook(bookFile);
			    break;
			case 5: // Issue a Book
			    IssueBook(bookFile, userFile);
			    break;
			case 6: // Return Book (functionality not implemented)
			    printf("Return Book functionality is under development.\n");
			    getch();
			    break;
                        case 7: // View All Users
                            ViewUsers(userFile);
                            break;
                        case 8: // Add New Members
                            AddUser(userFile);
                            break;
                        case 9: // Edit Member Information
                            EditUser(userFile);
                            break;
                        case 10: // Delete Members
                            DeleteUser(&userFile);
                            break;
                        case 11: // Logout
                            break;
                        default:
                            printf("Invalid Choice!\n");
                            break;
		    }
                } while (admin_choice != 11); // Admin Logout
            } else {
                printf("Invalid Admin Username or Password.\n");
                getch();
            }
        } else if (login_choice == 3) {  // Exit
            break;
        } else {
            printf("Invalid Choice. Try Again.\n");
            getch();
        }
    } while (1);

    // Close files before exiting
    fclose(bookFile);
    fclose(userFile);
}