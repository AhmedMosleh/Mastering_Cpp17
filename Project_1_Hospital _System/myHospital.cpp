#include <iostream>
using namespace std;

// Function to display the main menu and get the user's choice
int mainMenu()
{
    cout << "Enter your choice:\n"
         << "1) Add new patient\n"
         << "2) Print all patients\n"
         << "3) Get next patient\n"
         << "4) Exit\n";

    int choice = -1;
    while (choice == -1)
    {
        cin >> choice;
        if (1 <= choice && choice <= 4)
            return choice;
        cout << "Not a VALID CHOICE!\n";
        choice = -1;
    }
    return 0;
}

// Function to add a new patient
void addNew(int pat[], string name[][5], int status[][5])
{
    int spec;
    string namePat;
    int statPat;

    cout << "Enter specialization, name, status (0 = regular, 1 = urgent): \n";

    cin >> spec;
    cin >> namePat;
    cin >> statPat;

    if (pat[spec] >= 5)
    {
        cout << "Sorry, we can't add more patients for this specialization\n";
        return;
    }

    if (statPat == 1)
    {
        for (int i = 0; i < pat[spec]; i++)
        {
            // Shift existing patients to make room for the urgent patient
            name[spec][pat[spec] - i] = name[spec][pat[spec] - i - 1];
            status[spec][pat[spec] - i + 2] = status[spec][pat[spec] - i + 1];
        }
        name[spec][0] = namePat;
        status[spec][0] = statPat;
        pat[spec]++;
    }
    else
    {
        // Add a regular patient to the end of the queue
        name[spec][pat[spec]] = namePat;
        status[spec][pat[spec]] = statPat;
        pat[spec]++;
    }
    for (int i = 0; i < pat[spec]; i++)
        cout << name[spec][i] << " ";
    cout << endl;
}

// Function to print all patients
void printAll(int pat[], string name[][5], int status[][5])
{
    cout << "*********************************\n";
    for (int i = 0; i < 20; i++)
    {
        if (pat[i] == 0)
        {
            continue;
        }
        cout << "There are " << pat[i] << " patients in specialization " << i << endl;
        for (int j = 0; j < pat[i]; j++)
        {
            cout << name[i][j] << " ";
            if (status[i][j])
                cout << "urgent";
            else
                cout << "regular";
            cout << endl;
        }
    }
}

// Function to get the next patient for a doctor
void getNext(int pat[], string name[][5], int status[][5])
{
    cout << "Enter specialization: \n";
    int spec;
    cin >> spec;
    if (pat[spec] == 0)
    {
        cout << "No patients at the moment. Have rest, Dr\n";
        return;
    }
    cout << name[spec][0] << " please go with the Dr please\n";
    pat[spec]--;

    for (int i = 0; i < pat[spec]; i++)
    {
        // Shift patients after removing the next patient
        name[spec][i] = name[spec][i + 1];
    }
}

// Main function to run the hospital system
void hospitalSystem()
{
    int pat[20] {0};
    string name[20][5];
    int status[20][5] {-1};

    while (true)
    {
        int choice = mainMenu();
        if (choice == 4)
        {
            return;
        }
        else if (choice == 1)
        {
            addNew(pat, name, status);
        }
        else if (choice == 2)
        {
            printAll(pat, name, status);
        }
        else if (choice == 3)
        {
            getNext(pat, name, status);
        }
    }
}

int main()
{
    hospitalSystem();
}
