#include <iostream>

using namespace std;

void menuStud();
void StudRecChoice(char choice);

const int maxStud = 100;

char choice, addMore;
int ctr;

struct student
    {
        char first_name[maxStud], last_name[maxStud];
        float assignment[maxStud], mid[maxStud], final[maxStud], total[maxStud];
        char grade[maxStud];
        ;
    };
struct student h[maxStud];


int main()
{   
    for (int i= 0; i < maxStud; i++)
    {
        menuStud();
    
        struct student h[maxStud];
    }
return 0;
}

void menuStud()
        {
          cout << "\t\t====== STUDENT RECORD MANAGEMENT ======";
          cout <<"\n\n                                          ";
          cout << "\n\n";
          cout << "\n \t\t\t 1. Add Student Records";
          cout << "\n \t\t\t 2. List Student Records";
          cout << "\n \t\t\t 3. Modify Student Records";
          cout << "\n \t\t\t 4. Delete Student Records";
          cout << "\n \t\t\t 5. Exit ";
          cout << "\n\n";
          cout << "\t\t\t Select Your Choice :=> ";
          cin >> choice;
          StudRecChoice(choice, i);
        }
void StudRecChoice(char choice, int i)
    {   ctr = 0;
        switch(choice)
            {
                case '1' :
                    {   system("cls");
                        cout << "Enter the Firt Name : ";
                        cin >> h[i].first_name;
                        cout << "Enter the Last Name : ";
                        cin >> h[i].last_name;
                        cout << "Enter the assignment record : ";
                        cin >> h[i].assignment;
                        cout << "Enter the mid record : ";
                        cin >> h[i].mid;
                        cout << "Enter the final record : ";
                        cin >> h[i].final;
                        h.total[i] =  h[i].assignment + h[i].mid + h[i].final;
                        if (80 >= h.total[i] <= 100) h[i].grade = 'A';
                        else if (60 <= h.total[i] <= 79) h[i].grade = 'B';
                        else if (40 <= h.total[i] <= 59) h[i].grade = 'C';
                        else if (20 <= h.total[i] <= 39) h[i].grade = 'D';
                        else h[i].grade = 'F';
                        ctr++;
                         cout << "\n Add Another Record (Y/N) ";
                         while (addMore == 'y' || addMore =='Y')
                         {
                            system("cls");
                            cout << "Enter the Firt Name : ";
                            cin >> h[i].first_name;
                            cout << "Enter the Last Name : ";
                            cin >> h[i].last_name;
                            cout << "Enter the assignment record : ";
                            cin >> h[i].assignment;
                            cout << "Enter the mid record : ";
                            cin >> h[i].mid;
                            cout << "Enter the final record : ";
                            cin >> h[i].final;
                            h.total[i] =  h[i].assignment + h[i].mid + h[i].final;
                            if (80 >= h.total[i] <= 100) h[i].grade = 'A';
                            else if (60 <= h[i].total <= 79) h[i].grade = 'B';
                            else if (40 <= h[i].total <= 59) h[i].grade = 'C';
                            else if (20 <= h[i].total <= 39) h[i].grade = 'D';
                            else h[i].grade = 'F';
                            ctr++;
                            cout << "\n Add Another Record (Y/N) ";
                            cin >> addMore;
                         }
                    }break;
                case '2':
                    {
                        system("cls");
                        cout << "=== Student Records ===";
                        cout << "\n";
                        cout << "\nNo\t\t\t\tName\t\t\t\tAssignment\t\tMid\t\tFinal\t\tTotal\t\tGrade";
                            for (int i= 0; i < ctr; i++)
                            {
                                cout <<"\n" << h[i].first_name <<" "<< h[i].last_name<<"\t\t\t\t"<<h[i].assignment <<"\t\t"<< h[i].mid<<"\t\t"<<h[i].final<<"\t\t"<<h.total[i]<<"\t\t"<<h[i].grade;   
                            }
                        cout << "\n\n";
                        system("pause");
                        break;
                    }
                case '3' :
                    system("cls");
                    char editChoice = 'Y';
                            do
                                {
                                    char srhFirst_Name[20] ,srhLast_Name[20];
                                    
                                    cout << "\n Enter the first name of the student : ";
                                    cin >> srhFirst_Name;
                                    cout << "\n Enter the last name of the student : ";
                                    cin >> srhLast_Name;

                                for (int i= 0; i < maxStud; i++)
                                    {
                                        if (strcmp(h[i].first_name,srhFirst_Name) == 0 && strcmp(h[i].last_name,srhLast_Name)  == 0)
                                        {
                                            cout << "Enter new the Firt Name : ";
                                            cin >> h[i].first_name;
                                            cout << "Enter new the Last Name : ";
                                            cin >> h[i].last_name;
                                            cout << "Enter the assignment record : ";
                                            cin >> h[i].assignment;
                                            cout << "Enter the mid record : ";
                                            cin >> h[i].mid;
                                            cout << "Enter the final record : ";
                                            cin >> h[i].final;
                                            h.total[i] =  h[i].assignment + h[i].mid + h[i].final;
                                            if (80 >= h[i].total <= 100) h[i].grade = 'A';
                                            else if (60 <= h[i].total <= 79) h[i].grade = 'B';
                                            else if (40 <= h[i].total <= 59) h[i].grade = 'C';
                                            else if (20 <= h[i].total <= 39) h[i].grade = 'D';
                                            else h[i].grade = 'F';
                                            break;
                                        }
                                        else
                                            cout<<"record not found";
                                    }
                                    cout << "\n Modify Another Record (Y/N) ";
                                    cin >> editChoice;
                                }while (editChoice == 'y' || editChoice == 'Y')
                            }
                            break;
                
                case '4':
                 system("cls");
                    char deleteChoice = 'Y';
                            do
                                {
                                    char srhDFirst_Name[20] ,srhDLast_Name[20];
                                    
                                    cout << "\n Enter the first name of the student : ";
                                    cin >> srhDFirst_Name;
                                    cout << "\n Enter the last name of the student : ";
                                    cin >> srhDLast_Name;

                                for (int i= 0; i < maxStud; i++)
                                    {
                                        if (strcmp(h[i].first_name,srhDFirst_Name) == 0 && strcmp(h[i].last_name,srhDLast_Name)  == 0)
                                        {
                                            h[i].first_name = {0};
                                            h[i].last_name = {0};
                                            h[i].assignment = {0};
                                            h[i].mid = {0};
                                            h[i].final = {0};
                                            h[i].total = {0};
                                            break;
                                        }
                                        else
                                            cout<<"record not found";
                                    }
                                    cout << "\n Delete Another Record (Y/N) ";
                                    cin >> deleteChoice;
                                }while (deleteChoice == 'y' || deleteChoice == 'Y')
                            }
                    break;
                case '5':   system("cls");
                            cout << "thank you and good bye!";
                            break;

                default: system("cls");
                         cout << "Error! Incorrect input";

        }
    


        